// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 36

// StaticClass @ 149483fa0

UClass * __cdecl UWN_BindlessISMComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISMComponent",
               &Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton,
               StaticRegisterNativesUWN_BindlessISMComponent,0xa70,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWN_BindlessISMComponent>,
               InternalVTableHelperCtorCaller<UWN_BindlessISMComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton;
}

// UWN_BindlessISMComponent @ 14948deb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UWN_BindlessISMComponent * __thiscall
UWN_BindlessISMComponent::UWN_BindlessISMComponent
          (UWN_BindlessISMComponent *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  this_00 = &(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_BindlessISMComponent__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Bindless_TextureCollectionBindings).ArrayNum = 0;
  (this->Bindless_TextureCollectionBindings).ArrayMax = 0;
  (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->Bindless_MaterialInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindless_MaterialInterfaces).ArrayNum = 0;
  (this->Bindless_MaterialInterfaces).ArrayMax = 0;
  (this->Bindless_MaterialIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindless_MaterialIndices).ArrayNum = 0;
  (this->Bindless_MaterialIndices).ArrayMax = 0;
  return this;
}

// UWN_BindlessISMComponent @ 14948df90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UWN_BindlessISMComponent * __thiscall
UWN_BindlessISMComponent::UWN_BindlessISMComponent
          (UWN_BindlessISMComponent *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UWN_TextureCollection *pUVar4;
  FName local_res8;
  
  UInstancedStaticMeshComponent::UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this,param_1);
  this_00 = &(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x18;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_BindlessISMComponent__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Bindless_TextureCollectionBindings).ArrayNum = 0;
  (this->Bindless_TextureCollectionBindings).ArrayMax = 0;
  (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->Bindless_MaterialInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindless_MaterialInterfaces).ArrayNum = 0;
  (this->Bindless_MaterialInterfaces).ArrayMax = 0;
  (this->Bindless_MaterialIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindless_MaterialIndices).ArrayNum = 0;
  (this->Bindless_MaterialIndices).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,"BindlessTextureCollection");
  FVar1 = *pFVar2;
  pUVar3 = UWN_TextureCollection::StaticClass();
  pUVar4 = (UWN_TextureCollection *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  this->Bindless_TextureCollection = pUVar4;
  return this;
}

// ~UWN_BindlessISMComponent @ 1494904f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWN_BindlessISMComponent::~UWN_BindlessISMComponent(UWN_BindlessISMComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_BindlessISMComponent__6B_;
  pFVar1 = (this->Bindless_MaterialIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  return;
}

// AddBindlessInstance @ 149493ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UWN_BindlessISMComponent::AddBindlessInstance
          (UWN_BindlessISMComponent *this,TTransform<double> *param_1,bool param_2,
          UMaterialInterface *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FStaticBasicLogRecord *pFVar4;
  bool local_res8 [8];
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      if (param_3 == (UMaterialInterface *)0x0) {
        if ((byte)Common._0_1_ < 3) {
          return -1;
        }
        pFVar4 = &::LOG_Static;
      }
      else {
        if ((this->Bindless_TextureCollectionBindings).ArrayNum != 0) {
          iVar1 = TryAddBindlessMaterialInterface(this,param_3,local_res8);
          if (local_res8[0] != false) {
            UTextureCollection::UpdateResource
                      ((UTextureCollection *)this->Bindless_TextureCollection);
          }
          iVar1 = AddBindlessInstance_Impl(this,param_1,param_2,iVar1);
          if (local_res8[0] != false) {
            UpdateBindlessTextureCollection(this,true);
          }
          UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
          return iVar1;
        }
        if ((byte)Common._0_1_ < 3) {
          return -1;
        }
        pFVar4 = &::LOG_Static;
      }
      goto LAB_149493ff3;
    }
  }
  if ((byte)Common._0_1_ < 3) {
    return -1;
  }
  pFVar4 = &::LOG_Static;
LAB_149493ff3:
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&Common);
  return -1;
}

// AddBindlessInstance_Impl @ 149494020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UWN_BindlessISMComponent::AddBindlessInstance_Impl
          (UWN_BindlessISMComponent *this,TTransform<double> *param_1,bool param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined7 in_register_00000081;
  undefined1 local_res20 [8];
  
  uVar4 = (**(code **)(*(longlong *)this + 0xbb0))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  uVar7 = 0;
  if (param_3 < (this->Bindless_MaterialInterfaces).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  pFVar1 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data +
           (longlong)param_3 * 0x10 + 0xc;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  iVar5 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  pFVar8 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar5 * 0x14;
  while( true ) {
    if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar8 == pFVar1) break;
    (**(code **)(*(longlong *)this + 0xbc8))(this,uVar4);
    pFVar8 = pFVar8 + 0x14;
  }
  this_00 = &this->Bindless_MaterialIndices;
  iVar5 = (this->Bindless_MaterialIndices).ArrayNum;
  uVar10 = (ulonglong)iVar5;
  if (iVar5 <= (int)uVar4) {
    uVar7 = iVar5 + 0x20 + uVar4 & 0xffffffe0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar7,Default);
    uVar11 = uVar10;
    for (; (longlong)uVar10 < (longlong)(int)uVar7; uVar10 = uVar10 + 1) {
      uVar9 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar9 < (this->Bindless_MaterialIndices).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar11 = (ulonglong)(uVar9 + 1);
      *(undefined4 *)((this_00->AllocatorInstance).Data + uVar10 * 4) = 0xffffffff;
    }
  }
  uVar7 = 0;
  if ((int)uVar4 < (this->Bindless_MaterialIndices).ArrayNum) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  *(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar4 * 4) = param_3;
  return uVar4;
}

// AddBindlessInstances @ 149494220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UWN_BindlessISMComponent::AddBindlessInstances
          (UWN_BindlessISMComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  FStaticBasicLogRecord *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  byte bVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a7;
  bool local_1a6;
  bool local_1a5;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a0;
  longlong local_190;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_188;
  UMaterialInterface *local_180;
  TArray<int,TSizedDefaultAllocator<32>_> *local_178;
  void *local_170;
  undefined8 local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  TPairInitializer<UMaterialInterface_*_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&&>
  local_138;
  UWN_BindlessISMComponent *local_128;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  UMaterialInterface **local_f0;
  void **local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e0 [2];
  undefined4 local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a5 = param_2;
  local_188 = param_1;
  local_178 = __return_storage_ptr__;
  local_128 = this;
  pUVar11 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar11 == (UObject *)0x0) {
LAB_1494948f0:
    if ((byte)Common._0_1_ < 3) goto LAB_1494942d5;
    pFVar16 = &::LOG_Static;
  }
  else {
    pUVar12 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar9 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar12->_padding_)) goto LAB_1494948f0;
    if ((this->Bindless_TextureCollectionBindings).ArrayNum == 0) {
      if ((byte)Common._0_1_ < 3) goto LAB_1494942d5;
      pFVar16 = &::LOG_Static;
    }
    else {
      if (param_1->ArrayNum == param_3->ArrayNum) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4527353850239123827>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\Bindless\\WN_BindlessISMComponent.cpp"
                           ,0x173,"InTransforms.Num() != InMIs.Num()");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar13;
        }
        pFVar21 = (param_3->AllocatorInstance).Data;
        uVar18 = 0;
        iVar9 = param_3->ArrayNum;
        bVar25 = 0;
        local_a8._0_8_ = 0;
        local_a8._8_8_ = 0;
        local_88 = (uint *)0x0;
        pFVar19 = pFVar21 + (longlong)iVar9 * 8;
        local_80 = 0;
        local_7c = 0x80;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = (ForElementType<FSetElementId>)0x0;
        local_60 = 0;
        while( true ) {
          if (param_3->ArrayNum != iVar9) {
            local_1a7 = 0;
            `TCheckedPointerIterator<UMaterialInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1a7);
          }
          pTVar13 = local_178;
          if (pFVar21 == pFVar19) break;
          local_180 = *(UMaterialInterface **)pFVar21;
          TryAddBindlessMaterialInterface(this,local_180,&local_1a6);
          bVar25 = bVar25 | local_1a6;
          pTVar14 = TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)local_a8,local_180);
          if ((pTVar14 ==
               (TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                *)0x0) ||
             (pTVar14 ==
              (TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
               *)&DAT_fffffffffffffff8)) {
            local_f0 = &local_180;
            local_170 = (void *)0x0;
            local_e8 = &local_170;
            local_168 = 0;
            TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<UMaterialInterface_*_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&&>_>
                      ((TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)local_a8,&local_138,(bool *)&local_f0);
            if (local_170 != (void *)0x0) {
              FMemory::Free(local_170);
            }
          }
          pFVar21 = pFVar21 + 8;
        }
        if (bVar25 != 0) {
          UTextureCollection::UpdateResource((UTextureCollection *)this->Bindless_TextureCollection)
          ;
        }
        pTVar4 = local_188;
        local_190 = 0;
        local_138.Value =
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (longlong)local_188->ArrayNum;
        uVar22 = 0;
        uVar23 = uVar18;
        uVar27 = uVar18;
        if (0 < (longlong)local_138.Value) {
          do {
            uVar26 = (uint)uVar27;
            uVar8 = 0;
            if ((int)uVar26 < pTVar4->ArrayNum) {
              uVar8 = ~uVar26 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar13;
            }
            pFVar19 = (pTVar4->AllocatorInstance).Data + uVar23;
            uVar8 = uVar22;
            if ((int)uVar26 < param_3->ArrayNum) {
              uVar8 = ~uVar26 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar13;
            }
            pTVar14 = TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)local_a8,
                             *(UMaterialInterface **)
                              ((param_3->AllocatorInstance).Data + local_190 * 8));
            if ((pTVar14 ==
                 (TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                  *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar13;
            }
            if (((*(FScriptContainerElement **)&pTVar14->field_0x8 <= pFVar19) &&
                (pFVar19 < *(FScriptContainerElement **)&pTVar14->field_0x8 +
                           (longlong)*(int *)&pTVar14->field_0x14 * 0x60)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar2 = (code *)swi(3);
              pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar13;
            }
            iVar9 = *(int *)&pTVar14->field_0x10;
            if (iVar9 == *(int *)&pTVar14->field_0x14) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1060,(ForAnyElementType *)&pTVar14->field_0x8,
                                 (int *)&pTVar14->field_0x14);
            }
            *(int *)&pTVar14->field_0x10 = iVar9 + 1;
            local_190 = local_190 + 1;
            uVar3 = *(undefined8 *)(pFVar19 + 8);
            lVar20 = *(longlong *)&pTVar14->field_0x8;
            lVar17 = (longlong)iVar9 * 0x60;
            *(undefined8 *)(lVar17 + lVar20) = *(undefined8 *)pFVar19;
            ((undefined8 *)(lVar17 + lVar20))[1] = uVar3;
            uVar3 = *(undefined8 *)(pFVar19 + 0x18);
            puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar20);
            *puVar1 = *(undefined8 *)(pFVar19 + 0x10);
            puVar1[1] = uVar3;
            uVar3 = *(undefined8 *)(pFVar19 + 0x28);
            puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar20);
            *puVar1 = *(undefined8 *)(pFVar19 + 0x20);
            puVar1[1] = uVar3;
            uVar3 = *(undefined8 *)(pFVar19 + 0x38);
            puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar20);
            *puVar1 = *(undefined8 *)(pFVar19 + 0x30);
            puVar1[1] = uVar3;
            uVar3 = *(undefined8 *)(pFVar19 + 0x48);
            puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar20);
            *puVar1 = *(undefined8 *)(pFVar19 + 0x40);
            puVar1[1] = uVar3;
            uVar3 = *(undefined8 *)(pFVar19 + 0x58);
            puVar1 = (undefined8 *)(lVar17 + 0x50 + lVar20);
            *puVar1 = *(undefined8 *)(pFVar19 + 0x50);
            puVar1[1] = uVar3;
            this = local_128;
            uVar23 = uVar23 + 0x60;
            pTVar13 = local_178;
            uVar27 = (ulonglong)(uVar26 + 1);
          } while (local_190 < (longlong)local_138.Value);
        }
        uVar8 = local_188->ArrayNum;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        if (0 < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar8,&local_1a0.AllocatorInstance,0,&local_1a0.ArrayMax);
        }
        bVar6 = local_1a5;
        uStack_114 = 1;
        TStack_158.CurrentBitIndex = uVar22;
        local_100 = uVar22;
        if (local_80 != 0) {
          puVar24 = (uint *)(local_a8 + 0x10);
          if (local_88 != (uint *)0x0) {
            puVar24 = local_88;
          }
          uVar8 = *puVar24;
          uVar23 = uVar18;
          uVar22 = 0;
          local_100 = 0;
          while (uVar8 == 0) {
            uVar22 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar22;
            local_100 = (int)uVar23 + 0x20;
            uVar23 = (ulonglong)local_100;
            TStack_158.CurrentBitIndex = local_80;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22)
            goto LAB_1494946df;
            uVar8 = puVar24[(int)uVar22];
          }
          uStack_114 = -uVar8 & uVar8;
          uVar18 = (ulonglong)uStack_114 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_138.Key._4_4_ = (int)lVar20;
          TStack_158.CurrentBitIndex = local_138.Key._4_4_ + -1 + local_100;
          if ((int)local_80 < TStack_158.CurrentBitIndex) {
            TStack_158.CurrentBitIndex = local_80;
          }
        }
LAB_1494946df:
        local_160 = (longlong *)local_a8;
        uStack_fc = local_b4;
        local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        uStack_108 = 0xffffffff;
        TStack_158._padding_ = CONCAT44(uStack_114,uVar22);
        TStack_158.UnvisitedBitMask = 0xffffffff;
        TStack_158._28_4_ = local_b4;
        TStack_158.BaseBitIndex = local_100;
        local_120 = local_160;
        uStack_118 = uVar22;
        uStack_104 = TStack_158.CurrentBitIndex;
        TStack_158.Array = local_110;
        if (TStack_158.CurrentBitIndex < (int)local_80) {
          do {
            plVar5 = local_160;
            lVar20 = (longlong)TStack_158.CurrentBitIndex;
            iVar9 = GetMaterialInterfaceIndex
                              (this,*(UMaterialInterface **)(lVar20 * 0x20 + *local_160));
            pTVar15 = AddBindlessInstances_Impl
                                (this,local_e0,
                                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *
                                 )(*plVar5 + 8 + lVar20 * 0x20),bVar6,iVar9);
            if (&local_1a0 == pTVar15) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L"");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
                return pTVar13;
              }
            }
            iVar9 = pTVar15->ArrayNum;
            if (iVar9 != 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar9,&local_1a0.AllocatorInstance,&local_1a0.ArrayNum,
                                  &local_1a0.ArrayMax);
              memmove(local_1a0.AllocatorInstance.Data + (longlong)iVar10 * 4,
                      (pTVar15->AllocatorInstance).Data,(longlong)iVar9 << 2);
              pTVar15->ArrayNum = 0;
            }
            if (local_e0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0[0].AllocatorInstance.Data);
            }
            TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
          } while (TStack_158.CurrentBitIndex < (TStack_158.Array)->NumBits);
        }
        if (bVar25 == 0) {
          UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
          (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        }
        else {
          UpdateBindlessTextureCollection(this,true);
          UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
        }
        (pTVar13->AllocatorInstance).Data = local_1a0.AllocatorInstance.Data;
        pTVar13->ArrayNum = local_1a0.ArrayNum;
        pTVar13->ArrayMax = local_1a0.ArrayMax;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60 = 0;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        return pTVar13;
      }
      if ((byte)Common._0_1_ < 3) goto LAB_1494942d5;
      pFVar16 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar16,(FLogCategoryBase *)&Common);
LAB_1494942d5:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// AddBindlessInstances @ 149494920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UWN_BindlessISMComponent::AddBindlessInstances
          (UWN_BindlessISMComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          UMaterialInterface *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FStaticBasicLogRecord *pFVar4;
  bool local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar2 == (UObject *)0x0) {
LAB_149494a4d:
    if ((byte)Common._0_1_ < 3) goto LAB_149494a69;
    pFVar4 = &::LOG_Static;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_149494a4d;
    if (param_3 == (UMaterialInterface *)0x0) {
      if ((byte)Common._0_1_ < 3) goto LAB_149494a69;
      pFVar4 = &::LOG_Static;
    }
    else {
      if ((this->Bindless_TextureCollectionBindings).ArrayNum != 0) {
        iVar1 = TryAddBindlessMaterialInterface(this,param_3,local_res8);
        if (local_res8[0] != false) {
          UTextureCollection::UpdateResource((UTextureCollection *)this->Bindless_TextureCollection)
          ;
        }
        AddBindlessInstances_Impl(this,&local_28,param_1,param_2,iVar1);
        if (local_res8[0] == false) {
          UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
          (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        }
        else {
          UpdateBindlessTextureCollection(this,true);
          UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_28.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_28.ArrayNum;
        __return_storage_ptr__->ArrayMax = local_28.ArrayMax;
        return __return_storage_ptr__;
      }
      if ((byte)Common._0_1_ < 3) goto LAB_149494a69;
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&Common);
LAB_149494a69:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// AddBindlessInstances_Impl @ 149494a90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UWN_BindlessISMComponent::AddBindlessInstances_Impl
          (UWN_BindlessISMComponent *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_58 [4];
  uint local_54;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  
  (**(code **)(*(longlong *)this + 3000))();
  iVar1 = __return_storage_ptr__->ArrayNum;
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar14 = pFVar8 + (longlong)iVar1 * 4;
  iVar10 = -1;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar14) break;
    iVar4 = *(int *)pFVar8;
    if (*(int *)pFVar8 < iVar10) {
      iVar4 = iVar10;
    }
    pFVar8 = pFVar8 + 4;
    iVar10 = iVar4;
  }
  uVar7 = 0;
  if (param_3 < (this->Bindless_MaterialInterfaces).ArrayNum) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar6;
  }
  local_50 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data + (longlong)param_3 * 0x10;
  *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + iVar1;
  iVar1 = (this->Bindless_MaterialIndices).ArrayNum;
  uVar12 = (ulonglong)iVar1;
  if (iVar1 <= iVar10) {
    uVar7 = iVar1 + 0x20 + iVar10 & 0xffffffe0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Bindless_MaterialIndices,uVar7,Default);
    uVar13 = uVar12;
    for (; (longlong)uVar12 < (longlong)(int)uVar7; uVar12 = uVar12 + 1) {
      uVar11 = (uint)uVar13;
      uVar5 = 0;
      if ((int)uVar11 < (this->Bindless_MaterialIndices).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)((this->Bindless_MaterialIndices).AllocatorInstance.Data + uVar12 * 4) =
           0xffffffff;
    }
  }
  local_54 = __return_storage_ptr__->ArrayNum;
  uVar12 = (ulonglong)(int)local_54;
  pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = pFVar14 + uVar12 * 4;
  while( true ) {
    pFVar8 = local_48;
    if (__return_storage_ptr__->ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar14 == pFVar8) {
      return __return_storage_ptr__;
    }
    iVar1 = (this->Bindless_TextureCollectionBindings).ArrayNum;
    pFVar9 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
    uVar7 = *(uint *)pFVar14;
    pFVar8 = pFVar9 + (longlong)iVar1 * 0x14;
    while( true ) {
      if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar1) {
        local_58[0] = 0;
        `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_58);
      }
      if (pFVar9 == pFVar8) break;
      (**(code **)(*(longlong *)this + 0xbc8))(this,uVar7);
      pFVar9 = pFVar9 + 0x14;
    }
    uVar5 = 0;
    if ((int)uVar7 < (this->Bindless_MaterialIndices).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    pFVar14 = pFVar14 + 4;
    uVar12 = (ulonglong)local_54;
    *(int *)((this->Bindless_MaterialIndices).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) =
         param_3;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// ClearBindlessMaterialInstance @ 14949a950

void __thiscall
UWN_BindlessISMComponent::ClearBindlessMaterialInstance(UWN_BindlessISMComponent *this)

{
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this);
  (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  return;
}

// ClearBindlessTextureCollection @ 14949a980

void __thiscall
UWN_BindlessISMComponent::ClearBindlessTextureCollection(UWN_BindlessISMComponent *this)

{
  UWN_TextureCollection *pUVar1;
  
  pUVar1 = this->Bindless_TextureCollection;
  *(undefined4 *)&pUVar1->field_0x38 = 0;
  if (*(int *)&pUVar1->field_0x3c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&pUVar1->field_0x30,0,(int *)&pUVar1->field_0x3c);
  }
  UTextureCollection::UpdateResource((UTextureCollection *)this->Bindless_TextureCollection);
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this);
  (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  return;
}

// GetBindingByCustomDataOffset @ 1494a03b0

FWN_BindlessISM_TextureCollectionBinding * __thiscall
UWN_BindlessISMComponent::GetBindingByCustomDataOffset(UWN_BindlessISMComponent *this,int param_1)

{
  FWN_BindlessISM_TextureCollectionBinding *pFVar1;
  int iVar2;
  FWN_BindlessISM_TextureCollectionBinding *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  pFVar3 = (FWN_BindlessISM_TextureCollectionBinding *)
           (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->CustomDataOffset == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FWN_BindlessISM_TextureCollectionBinding *)0x0;
}

// GetBindingByTextureCollectionParameter @ 1494a0430

FWN_BindlessISM_TextureCollectionBinding * __thiscall
UWN_BindlessISMComponent::GetBindingByTextureCollectionParameter
          (UWN_BindlessISMComponent *this,FName *param_1)

{
  FWN_BindlessISM_TextureCollectionBinding *pFVar1;
  int iVar2;
  FWN_BindlessISM_TextureCollectionBinding *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  pFVar3 = (FWN_BindlessISM_TextureCollectionBinding *)
           (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->TextureCollectionParameterName == *param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FWN_BindlessISM_TextureCollectionBinding *)0x0;
}

// GetBindingByTextureParameter @ 1494a04b0

FWN_BindlessISM_TextureCollectionBinding * __thiscall
UWN_BindlessISMComponent::GetBindingByTextureParameter
          (UWN_BindlessISMComponent *this,FName *param_1)

{
  FWN_BindlessISM_TextureCollectionBinding *pFVar1;
  int iVar2;
  FWN_BindlessISM_TextureCollectionBinding *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  pFVar3 = (FWN_BindlessISM_TextureCollectionBinding *)
           (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (pFVar3->TextureParameterName == *param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FWN_BindlessISM_TextureCollectionBinding *)0x0;
}

// GetMaterialInterfaceIndex @ 1494a0a80

int __thiscall
UWN_BindlessISMComponent::GetMaterialInterfaceIndex
          (UWN_BindlessISMComponent *this,UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Bindless_MaterialInterfaces).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Bindless_MaterialInterfaces).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pUVar1 = *(UMaterialInterface **)
                ((this->Bindless_MaterialInterfaces).AllocatorInstance.Data + lVar7);
      if (pUVar1 == (UMaterialInterface *)0x0) {
        bVar3 = param_1 == (UMaterialInterface *)0x0;
      }
      else {
        bVar3 = pUVar1 == param_1;
      }
      if (bVar3) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->Bindless_MaterialInterfaces).ArrayNum);
  }
  return -1;
}

// GetPrivateStaticClass @ 1494a1850

UClass * __cdecl UWN_BindlessISMComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISMComponent",
               &Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton,
               StaticRegisterNativesUWN_BindlessISMComponent,0xa70,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWN_BindlessISMComponent>,
               InternalVTableHelperCtorCaller<UWN_BindlessISMComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton;
}

// GetTextureCollectionParameterNames @ 1494a2bb0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWN_BindlessISMComponent::GetTextureCollectionParameterNames
          (UWN_BindlessISMComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TSoftObjectPtr<UMaterial> *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UMaterialInterface *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_38;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = &this->Bindless_BaseMaterial;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar7 == (UObject *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
  iVar10 = (int)pUVar8->_padding_;
  if (*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar10) {
    return __return_storage_ptr__;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
      &pUVar8->_padding_) {
    return __return_storage_ptr__;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TSoftObjectPtr<UMaterial>::LoadSynchronous(this_00);
  this_01 = (UMaterialInterface *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (this_01 != (UMaterialInterface *)0x0) {
    pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar10 = (int)pUVar8->_padding_;
    if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar8->_padding_)) goto LAB_1494a2c6e;
  }
  this_01 = (UMaterialInterface *)0x0;
LAB_1494a2c6e:
  UMaterialInterface::GetAllTextureCollectionParameterInfo(this_01,&local_38,&local_28);
  uVar11 = local_38._8_8_ & 0xffffffff;
  if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11);
  }
  if (*piVar1 < local_38.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_38.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar11 = local_38._8_8_ & 0xffffffff;
  }
  iVar10 = (int)uVar11;
  pFVar12 = local_38.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  FVar13.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar13.Data == pFVar12) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= FVar13.Data) && (FVar13.Data < pFVar2 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    uVar3 = *(undefined8 *)FVar13.Data;
    FVar13.Data = FVar13.Data + 0x10;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = uVar3;
    uVar11 = local_38._8_8_ & 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTextureParameterNames @ 1494a2dc0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWN_BindlessISMComponent::GetTextureParameterNames
          (UWN_BindlessISMComponent *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  TSoftObjectPtr<UMaterial> *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UMaterialInterface *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_38;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = &this->Bindless_BaseMaterial;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar7 == (UObject *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
  iVar10 = (int)pUVar8->_padding_;
  if (*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar10) {
    return __return_storage_ptr__;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
      &pUVar8->_padding_) {
    return __return_storage_ptr__;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TSoftObjectPtr<UMaterial>::LoadSynchronous(this_00);
  this_01 = (UMaterialInterface *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (this_01 != (UMaterialInterface *)0x0) {
    pUVar8 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar10 = (int)pUVar8->_padding_;
    if ((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar8->_padding_)) goto LAB_1494a2e7e;
  }
  this_01 = (UMaterialInterface *)0x0;
LAB_1494a2e7e:
  UMaterialInterface::GetAllTextureParameterInfo(this_01,&local_38,&local_28);
  uVar11 = local_38._8_8_ & 0xffffffff;
  if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11);
  }
  if (*piVar1 < local_38.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_38.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
    uVar11 = local_38._8_8_ & 0xffffffff;
  }
  iVar10 = (int)uVar11;
  pFVar12 = local_38.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  FVar13.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar13.Data == pFVar12) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= FVar13.Data) && (FVar13.Data < pFVar2 + (longlong)*piVar1 * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    uVar3 = *(undefined8 *)FVar13.Data;
    FVar13.Data = FVar13.Data + 0x10;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = uVar3;
    uVar11 = local_38._8_8_ & 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsCompatableStaticMeshComponent @ 1494a56a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWN_BindlessISMComponent::IsCompatableStaticMeshComponent
          (UWN_BindlessISMComponent *this,UStaticMeshComponent *param_1)

{
  undefined1 *this_00;
  undefined8 *puVar1;
  int iVar2;
  UStaticMesh *pUVar3;
  UStaticMesh *pUVar4;
  UObjectBaseUtility *this_01;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined8 *local_58;
  uint local_50;
  FString local_48;
  FString local_38;
  
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      pUVar3 = *(UStaticMesh **)&this->field_0x5a0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar4 = (param_1->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if (pUVar4 == pUVar3) {
        (**(code **)(param_1->_padding_ + 0xa90))(param_1);
        uVar8 = (ulonglong)(int)local_50;
        puVar1 = local_58 + uVar8;
        puVar10 = local_58;
        do {
          if ((uint)uVar8 != local_50) {
            `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (puVar10 == puVar1) {
            bVar9 = true;
            goto LAB_1494a5895;
          }
          this_01 = (UObjectBaseUtility *)*puVar10;
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial)
          ;
          if (pUVar5 == (UObject *)0x0) {
            this_00 = &(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x8;
            if (*(longlong *)this_00 != 0) {
              FSoftObjectPath::TryLoad((FSoftObjectPath *)this_00,(FUObjectSerializeContext *)0x0);
              pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)
                                  &this->Bindless_BaseMaterial);
              goto LAB_1494a57c3;
            }
LAB_1494a57eb:
            pUVar5 = (UObject *)0x0;
          }
          else {
LAB_1494a57c3:
            if (pUVar5 == (UObject *)0x0) goto LAB_1494a57eb;
            pUVar6 = Z_Construct_UClass_UMaterial_NoRegister();
            iVar2 = (int)pUVar6->_padding_;
            if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar6->_padding_)) goto LAB_1494a57eb;
          }
          pUVar7 = (UObject *)(**(code **)(*(longlong *)this_01 + 0x2d8))(this_01);
          if (pUVar7 != pUVar5) {
            if (2 < (byte)Common._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(this_01,&local_48,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
            bVar9 = false;
LAB_1494a5895:
            if (local_58 != (undefined8 *)0x0) {
              FMemory::Free(local_58);
            }
            return bVar9;
          }
          uVar8 = (ulonglong)local_50;
          puVar10 = puVar10 + 1;
        } while( true );
      }
    }
  }
  return false;
}

// OnRegister @ 1494a8460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWN_BindlessISMComponent::OnRegister(UWN_BindlessISMComponent *this)

{
  longlong lVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  bool bVar7;
  UWN_BindlessISMComponent *pUStackX_8;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5060,"UInstancedStaticMeshComponent::OnRegister()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
               ,0x13c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5060);
  }
  UStaticMeshComponent::OnRegister((UStaticMeshComponent *)this);
  pvVar2 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  *(undefined8 *)&this->field_0x680 = *(undefined8 *)&this->field_0x1f0;
  *(undefined8 *)&this->field_0x688 = *(undefined8 *)&this->field_0x1f8;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar6 * 8);
  *(undefined8 *)&this->field_0x690 = *(undefined8 *)&this->field_0x200;
  *(undefined8 *)&this->field_0x698 = *(undefined8 *)&this->field_0x208;
  *(undefined8 *)&this->field_0x6a0 = *(undefined8 *)&this->field_0x210;
  *(undefined8 *)&this->field_0x6a8 = *(undefined8 *)&this->field_0x218;
  *(undefined8 *)&this->field_0x6b0 = *(undefined8 *)&this->field_0x220;
  *(undefined8 *)&this->field_0x6b8 = *(undefined8 *)&this->field_0x228;
  *(undefined8 *)&this->field_0x6c0 = *(undefined8 *)&this->field_0x230;
  *(undefined8 *)&this->field_0x6c8 = *(undefined8 *)&this->field_0x238;
  *(undefined8 *)&this->field_0x6d0 = *(undefined8 *)&this->field_0x240;
  *(undefined8 *)&this->field_0x6d8 = *(undefined8 *)&this->field_0x248;
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((*(uint *)&this->field_0x8 & 0x30) == 0)) {
    pUStackX_8 = this;
    if (*(int *)&this->field_0x6e4 == 0) {
      iVar4 = `UInstancedStaticMeshComponent::InitializeInstancingRandomSeed'::__l2::<lambda_1>::
              operator()(&pUStackX_8);
      *(int *)&this->field_0x6e4 = iVar4;
    }
    FPrimitiveInstanceDataManager::OnRegister
              ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,*(int *)&this->field_0x660);
  }
  if (((this->field_0x9a & 0x40) != 0) &&
     (cVar3 = (**(code **)(*(longlong *)this + 0xc88))(this), cVar3 != '\0')) {
    UInstancedStaticMeshComponent::PartialNavigateUpdateForCurrentInstances
              ((UInstancedStaticMeshComponent *)this);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUnregister @ 1494a9070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWN_BindlessISMComponent::OnUnregister(UWN_BindlessISMComponent *this)

{
  char cVar1;
  
  if ((this->field_0x9a & 0x40) != 0) {
    cVar1 = (**(code **)(*(longlong *)this + 0xc88))();
    if (cVar1 != '\0') {
      UInstancedStaticMeshComponent::PartialNavigateUpdateForCurrentInstances
                ((UInstancedStaticMeshComponent *)this);
    }
  }
  UStaticMeshComponent::OnUnregister((UStaticMeshComponent *)this);
  return;
}

// PostLoad @ 1494a92b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UWN_BindlessISMComponent::PostLoad(UWN_BindlessISMComponent *this)

{
  undefined1 *this_00;
  undefined4 uVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ULevel *this_01;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iStack_70;
  FString FStack_68;
  FString aFStack_58 [2];
  
  UStaticMeshComponent::PostLoad((UStaticMeshComponent *)this);
  this_01 = UActorComponent::GetComponentLevel((UActorComponent *)this);
  if ((this_01 != (ULevel *)0x0) && (bVar5 = ULevel::IsInstancedLevel(this_01), bVar5)) {
    this->field_0x938 = 0;
    this->field_0x978 = 0;
    this->field_0x9b8 = 0;
  }
  this_00 = &this->field_0x6e8;
  if ((*(int *)&this->field_0x660 * *(int *)&this->field_0x6e0 != *(int *)&this->field_0x6f0) &&
     (0 < *(int *)&this->field_0x660)) {
    if (*(int *)&this->field_0x6f0 == 0) {
      if (2 < (byte)LogStaticMesh._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_68,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                ((TArray<float,TSizedDefaultAllocator<32>_> *)this_00,
                 *(int *)&this->field_0x6e0 * *(int *)&this->field_0x660);
    }
    else {
      if (2 < (byte)LogStaticMesh._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,aFStack_58,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
        if (aFStack_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(aFStack_58[0].Data.AllocatorInstance.Data);
        }
      }
      pvVar3 = *(void **)this_00;
      uVar4 = *(undefined8 *)&this->field_0x6f0;
      iVar6 = *(int *)&this->field_0x6f0 / *(int *)&this->field_0x660;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&this->field_0x6f0 = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                ((TArray<float,TSizedDefaultAllocator<32>_> *)this_00,
                 *(int *)&this->field_0x6e0 * *(int *)&this->field_0x660);
      iVar7 = *(int *)&this->field_0x6e0;
      if (iVar6 < *(int *)&this->field_0x6e0) {
        iVar7 = iVar6;
      }
      iVar13 = 0;
      if (0 < *(int *)&this->field_0x660) {
        iVar12 = 0;
        do {
          iVar9 = 0;
          if (0 < iVar7) {
            puVar10 = (undefined4 *)((longlong)pvVar3 + (longlong)iVar12 * 4);
            do {
              iStack_70 = (int)uVar4;
              uVar8 = 0;
              if (iVar12 + iVar9 < iStack_70) {
                uVar8 = (uint)~(iVar12 + iVar9) >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar1 = *puVar10;
              uVar11 = iVar13 * *(int *)&this->field_0x6e0 + iVar9;
              uVar8 = 0;
              if ((int)uVar11 < *(int *)&this->field_0x6f0) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              iVar9 = iVar9 + 1;
              puVar10 = puVar10 + 1;
              *(undefined4 *)(*(longlong *)this_00 + (longlong)(int)uVar11 * 4) = uVar1;
            } while (iVar9 < iVar7);
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + iVar6;
        } while (iVar13 < *(int *)&this->field_0x660);
      }
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
    }
  }
  if ((*(uint *)&this->field_0x8 & 0x30) == 0) {
    FPrimitiveInstanceDataManager::PostLoad
              ((FPrimitiveInstanceDataManager *)&this->field_0x7a0,*(int *)&this->field_0x660);
  }
                    /* WARNING: Could not recover jumptable at 0x000147d1defa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xc98))(this);
  return;
}

// RemoveAllBindlessInstances @ 1494aacf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_BindlessISMComponent::RemoveAllBindlessInstances(UWN_BindlessISMComponent *this)

{
  int *piVar1;
  UWN_TextureCollection *pUVar2;
  
  if (0 < *(int *)&this->field_0x660) {
    (**(code **)(*(longlong *)this + 0xc38))();
    piVar1 = &(this->Bindless_MaterialIndices).ArrayMax;
    (this->Bindless_MaterialIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Bindless_MaterialIndices).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Bindless_MaterialInterfaces).ArrayMax;
    (this->Bindless_MaterialInterfaces).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Bindless_MaterialInterfaces).AllocatorInstance,0,piVar1);
    }
    pUVar2 = this->Bindless_TextureCollection;
    *(undefined4 *)&pUVar2->field_0x38 = 0;
    if (*(int *)&pUVar2->field_0x3c != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pUVar2->field_0x30,0,(int *)&pUVar2->field_0x3c);
    }
    UTextureCollection::UpdateResource((UTextureCollection *)this->Bindless_TextureCollection);
    UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this);
    (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
  }
  UMeshComponent::EmptyOverrideMaterials((UMeshComponent *)this);
  (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  return;
}

// RemoveBindlessInstance @ 1494aae60

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
UWN_BindlessISMComponent::RemoveBindlessInstance(UWN_BindlessISMComponent *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  cVar4 = (**(code **)(*(longlong *)this + 0xc20))(this,param_1);
  if (cVar4 != '\0') {
    uVar6 = 0;
    if (param_1 < (this->Bindless_MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Bindless_MaterialIndices).AllocatorInstance.Data;
    uVar6 = *(uint *)(pFVar2 + (longlong)param_1 * 4);
    uVar7 = 0;
    if ((int)uVar6 < (this->Bindless_MaterialInterfaces).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data +
             (longlong)(int)uVar6 * 0x10 + 0xc;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    *(undefined4 *)(pFVar2 + (longlong)param_1 * 4) = 0xffffffff;
    bVar5 = TryRemoveBindlessMaterialInterfaces(this);
    if (bVar5) {
      UpdateBindlessTextureCollection(this,true);
    }
    UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
  }
  return;
}

// RemoveBindlessInstance_Impl @ 1494aaf90

bool __thiscall
UWN_BindlessISMComponent::RemoveBindlessInstance_Impl(UWN_BindlessISMComponent *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  cVar4 = (**(code **)(*(longlong *)this + 0xc20))(this,param_1);
  if (cVar4 != '\0') {
    uVar7 = 0;
    if (param_1 < (this->Bindless_MaterialIndices).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this->Bindless_MaterialIndices).AllocatorInstance.Data;
    uVar7 = *(uint *)(pFVar2 + (longlong)param_1 * 4);
    uVar8 = 0;
    if ((int)uVar7 < (this->Bindless_MaterialInterfaces).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar1 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data +
             (longlong)(int)uVar7 * 0x10 + 0xc;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    *(undefined4 *)(pFVar2 + (longlong)param_1 * 4) = 0xffffffff;
  }
  return (bool)cVar4;
}

// RemoveBindlessInstances @ 1494ab0b0

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
UWN_BindlessISMComponent::RemoveBindlessInstances
          (UWN_BindlessISMComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  iVar4 = param_1->ArrayNum;
  if (0 < iVar4) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar9 + (longlong)iVar4 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar1) break;
      uVar5 = *(uint *)pFVar9;
      uVar8 = 0;
      if ((int)uVar5 < (this->Bindless_MaterialIndices).ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar2 = (this->Bindless_MaterialIndices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
      uVar5 = *(uint *)pFVar2;
      uVar8 = 0;
      if ((int)uVar5 < (this->Bindless_MaterialInterfaces).ArrayNum) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data +
               (longlong)(int)uVar5 * 0x10 + 0xc;
      *(int *)pFVar3 = *(int *)pFVar3 + -1;
      pFVar9 = pFVar9 + 4;
      *(uint *)pFVar2 = 0xffffffff;
    }
    (**(code **)(*(longlong *)this + 0xc30))(this,param_1);
    bVar7 = TryRemoveBindlessMaterialInterfaces(this);
    if (bVar7) {
      UpdateBindlessTextureCollection(this,true);
    }
    UActorComponent::MarkRenderInstancesDirty((UActorComponent *)this);
  }
  return;
}

// RemoveBindlessInstances_Impl @ 1494ab220

void __thiscall
UWN_BindlessISMComponent::RemoveBindlessInstances_Impl
          (UWN_BindlessISMComponent *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar4 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    uVar5 = *(uint *)pFVar9;
    uVar8 = 0;
    if ((int)uVar5 < (this->Bindless_MaterialIndices).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->Bindless_MaterialIndices).AllocatorInstance.Data + (longlong)(int)uVar5 * 4;
    uVar5 = *(uint *)pFVar2;
    uVar8 = 0;
    if ((int)uVar5 < (this->Bindless_MaterialInterfaces).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data +
             (longlong)(int)uVar5 * 0x10 + 0xc;
    *(int *)pFVar3 = *(int *)pFVar3 + -1;
    pFVar9 = pFVar9 + 4;
    *(uint *)pFVar2 = 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001494ab348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xc30))(this,param_1);
  return;
}

// StaticRegisterNativesUWN_BindlessISMComponent @ 1494ae210

void __cdecl UWN_BindlessISMComponent::StaticRegisterNativesUWN_BindlessISMComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWN_BindlessISMComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryAddBindlessMaterialInterface @ 1494ae740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
UWN_BindlessISMComponent::TryAddBindlessMaterialInterface
          (UWN_BindlessISMComponent *this,UMaterialInterface *param_1,bool *param_2)

{
  int *piVar1;
  TArray<FWN_BindlessISM_MaterialInterface,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  UWN_TextureCollection *pUVar6;
  code *pcVar7;
  UObject *pUVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObject *local_88;
  UObject *local_80;
  uint local_78;
  undefined4 local_74;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_70;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  FScriptContainerElement local_40;
  
  *param_2 = false;
  uVar11 = GetMaterialInterfaceIndex(this,param_1);
  if (uVar11 == 0xffffffff) {
    *param_2 = true;
    pTVar2 = &this->Bindless_MaterialInterfaces;
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    local_80 = (UObject *)0x0;
    local_74 = 0;
    local_78 = uVar11;
    if (((pFVar17 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar17 + (longlong)(this->Bindless_MaterialInterfaces).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
    iVar12 = (this->Bindless_MaterialInterfaces).ArrayNum;
    piVar1 = &(this->Bindless_MaterialInterfaces).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Bindless_MaterialInterfaces).ArrayNum = iVar12 + 1;
    pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(UObject **)pFVar17 = local_80;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_80);
    }
    *(uint *)(pFVar17 + 8) = local_78;
    *(undefined4 *)(pFVar17 + 0xc) = local_74;
    iVar12 = (this->Bindless_MaterialInterfaces).ArrayNum;
    uVar11 = iVar12 - 1;
    uVar16 = 0;
    if ((int)uVar11 < iVar12) {
      uVar16 = ~uVar11 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
    pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UMaterialInterface **)pFVar17 = param_1;
    iVar12 = (this->Bindless_MaterialInterfaces).ArrayNum;
    iVar4 = (this->Bindless_TextureCollectionBindings).ArrayNum;
    *(int *)(pFVar17 + 8) = (iVar12 + -1) * iVar4;
    TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *)
               &this->Bindless_TextureCollection->field_0x30,iVar4 * iVar12,Default);
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 0;
    local_60.ArrayMax = 0;
    UMaterialInterface::GetAllTextureParameterInfo
              (*(UMaterialInterface **)pFVar17,&local_70,&local_60);
    iVar12 = local_70.ArrayNum;
    uVar14 = (ulonglong)local_70.ArrayNum;
    pFVar19 = local_70.AllocatorInstance.Data + uVar14 * 0x10;
    FVar18.Data = local_70.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar18.Data == pFVar19) break;
      iVar4 = (this->Bindless_TextureCollectionBindings).ArrayNum;
      pFVar15 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
      pFVar3 = pFVar15 + (longlong)iVar4 * 0x14;
      while( true ) {
        if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar15 == pFVar3) goto LAB_1494aea6c;
        lVar5 = *(longlong *)FVar18.Data;
        if (*(longlong *)(pFVar15 + 8) == lVar5) break;
        pFVar15 = pFVar15 + 0x14;
      }
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        uVar16 = *(int *)(pFVar15 + 0x10) + *(int *)(pFVar17 + 8);
        local_50 = (undefined4)lVar5;
        local_48 = (undefined4)((ulonglong)lVar5 >> 0x20);
        local_44 = *(undefined4 *)(FVar18.Data + 0xc);
        local_40 = FVar18.Data[8];
        local_4c = 0;
        cVar10 = (**(code **)(**(longlong **)pFVar17 + 0x418))
                           (*(longlong **)pFVar17,&local_50,&local_88,0);
        if (cVar10 != '\0') {
          pUVar6 = this->Bindless_TextureCollection;
          uVar13 = 0;
          if ((int)uVar16 < *(int *)&pUVar6->field_0x38) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            iVar12 = (*pcVar7)();
            return iVar12;
          }
          pUVar8 = local_88;
          lVar5 = *(longlong *)&pUVar6->field_0x30;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_88);
          }
          *(UObject **)(lVar5 + (longlong)(int)uVar16 * 8) = pUVar8;
        }
      }
LAB_1494aea6c:
      uVar14 = local_70._8_8_ & 0xffffffff;
      FVar18.Data = FVar18.Data + 0x10;
    }
    if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return uVar11;
}

// TryRemoveBindlessMaterialInterfaces @ 1494aeb40

bool __thiscall
UWN_BindlessISMComponent::TryRemoveBindlessMaterialInterfaces(UWN_BindlessISMComponent *this)

{
  int *piVar1;
  TArray<FWN_BindlessISM_MaterialInterface,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  bVar8 = false;
  uVar12 = 0;
  if (0 < (this->Bindless_MaterialInterfaces).ArrayNum) {
    pTVar2 = &this->Bindless_MaterialInterfaces;
    local_res10 = 0;
    bVar8 = false;
    do {
      lVar13 = local_res10;
      uVar9 = 0;
      if ((int)uVar12 < (this->Bindless_MaterialInterfaces).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + lVar13 + 0xc) == 0) {
        iVar3 = (this->Bindless_MaterialInterfaces).ArrayNum;
        if (iVar3 != 1) {
          pFVar11 = (this->Bindless_MaterialIndices).AllocatorInstance.Data;
          iVar10 = (this->Bindless_MaterialIndices).ArrayNum;
          pFVar4 = pFVar11 + (longlong)iVar10 * 4;
          while( true ) {
            if ((this->Bindless_MaterialIndices).ArrayNum != iVar10) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            lVar13 = local_res10;
            if (pFVar11 == pFVar4) break;
            if (*(int *)pFVar11 == iVar3 + -1) {
              *(uint *)pFVar11 = uVar12;
            }
            pFVar11 = pFVar11 + 4;
          }
        }
        uVar9 = 0;
        if ((int)uVar12 < (this->Bindless_MaterialInterfaces).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar3 = (this->Bindless_MaterialInterfaces).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar10 = ~uVar12 + iVar3;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar12 * 0x10,pFVar4 + (longlong)(iVar3 - iVar10) * 0x10,
                  (longlong)iVar10 << 4);
        }
        piVar1 = &(this->Bindless_MaterialInterfaces).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar2->AllocatorInstance,(this->Bindless_MaterialInterfaces).ArrayNum,
                   &(this->Bindless_MaterialInterfaces).ArrayMax);
        uVar12 = uVar12 - 1;
        bVar8 = true;
        lVar13 = lVar13 + -0x10;
      }
      local_res10 = lVar13 + 0x10;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (this->Bindless_MaterialInterfaces).ArrayNum);
  }
  return bVar8;
}

// UpdateAllCustomDatas @ 1494b01b0

void __thiscall UWN_BindlessISMComponent::UpdateAllCustomDatas(UWN_BindlessISMComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  if (iVar2 == 0) {
    lVar11 = *(longlong *)this;
    iVar8 = 0;
  }
  else {
    pFVar10 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x14;
    iVar8 = 0;
    while( true ) {
      if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      iVar5 = *(int *)(pFVar10 + 0x10);
      if (*(int *)(pFVar10 + 0x10) < iVar8) {
        iVar5 = iVar8;
      }
      pFVar10 = pFVar10 + 0x14;
      iVar8 = iVar5;
    }
    lVar11 = *(longlong *)this;
    iVar8 = iVar8 + 1;
  }
  (**(code **)(lVar11 + 0xbd0))(this,iVar8);
  lVar11 = (longlong)(this->Bindless_MaterialIndices).ArrayNum;
  uVar9 = 0;
  if (0 < lVar11) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Bindless_MaterialIndices).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)((this->Bindless_MaterialIndices).AllocatorInstance.Data + lVar12 * 4);
      if (uVar6 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar6 < (this->Bindless_MaterialInterfaces).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
        pFVar10 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
        pFVar1 = pFVar10 + (longlong)iVar2 * 0x14;
        while( true ) {
          if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if (pFVar10 == pFVar1) break;
          (**(code **)(*(longlong *)this + 0xbc8))(this,uVar9);
          pFVar10 = pFVar10 + 0x14;
        }
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar11);
  }
  return;
}

// UpdateBindlessMaterialInstance @ 1494b09e0

void __thiscall
UWN_BindlessISMComponent::UpdateBindlessMaterialInstance(UWN_BindlessISMComponent *this)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UMaterial *pUVar6;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar7;
  ulonglong uVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  FName local_res8;
  undefined8 *local_18;
  uint local_10;
  
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      if ((this->Bindless_MaterialInstance).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0)
      {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        pUVar6 = TSoftObjectPtr<UMaterial>::LoadSynchronous(&this->Bindless_BaseMaterial);
        this_00 = UMaterialInstanceDynamic::Create
                            ((UMaterialInterface *)pUVar6,(UObject *)this,local_res8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UMaterialInstanceDynamic *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (this->Bindless_MaterialInstance).field0_0x0.DebugPtr = this_00;
        pFVar7 = ::FName::FName(&local_res8,"UseBindlessInstancing");
        UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar7,__real_3f800000);
      }
      iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
      pFVar9 = (FName *)(this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
      pFVar7 = (FName *)((longlong)pFVar9 + (longlong)iVar2 * 0x14);
      while( true ) {
        if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res8);
        }
        if (pFVar9 == pFVar7) break;
        UMaterialInstanceDynamic::SetTextureCollectionParameterValue
                  ((this->Bindless_MaterialInstance).field0_0x0.DebugPtr,*pFVar9,
                   (UTextureCollection *)this->Bindless_TextureCollection);
        pFVar9 = (FName *)&pFVar9[2].Number;
      }
      (**(code **)(*(longlong *)this + 0x6a0))(this,&local_18);
      uVar3 = local_10;
      uVar8 = (ulonglong)(int)local_10;
      puVar1 = local_18 + uVar8;
      puVar10 = local_18;
      while( true ) {
        if ((uint)uVar8 != uVar3) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (puVar10 == puVar1) break;
        (**(code **)(*(longlong *)this + 0x6c0))
                  (this,*puVar10,(this->Bindless_MaterialInstance).field0_0x0.DebugPtr);
        uVar8 = (ulonglong)local_10;
        puVar10 = puVar10 + 1;
      }
      if (local_18 != (undefined8 *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return;
}

// UpdateBindlessTextureCollection @ 1494b0b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UWN_BindlessISMComponent::UpdateBindlessTextureCollection
          (UWN_BindlessISMComponent *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWN_TextureCollection *pUVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  char local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FMaterialParameterInfo,TSizedDefaultAllocator<32>_> local_b8;
  int local_a8;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  FScriptContainerElement local_68;
  FScriptContainerElement *local_60;
  UObject *local_58 [3];
  
  local_res10 = param_1;
  pUVar10 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Bindless_BaseMaterial);
  if (pUVar10 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_UMaterial_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar11->_padding_)) &&
       (local_8c = (this->Bindless_TextureCollectionBindings).ArrayNum, local_8c != 0)) {
      iVar2 = (this->Bindless_MaterialInterfaces).ArrayNum;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ArrayNum = 0;
      local_c8.ArrayMax = 0;
      if (iVar2 * local_8c != 0) {
        TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>::SetNum
                  (&local_c8,iVar2 * local_8c,Default);
        local_b8.ArrayNum = 0;
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_res20 = 0;
        local_80 = (longlong)iVar2;
        if (0 < iVar2) {
          local_a8 = 0;
          local_88 = 0;
          do {
            lVar6 = local_88;
            iVar2 = local_a8;
            uVar16 = local_res20;
            local_b8.ArrayNum = 0;
            if (local_b8.ArrayMax != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
            }
            iVar5 = local_a0.ArrayMax;
            local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
            if (iVar5 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
            }
            uVar9 = 0;
            if ((int)uVar16 < (this->Bindless_MaterialInterfaces).ArrayNum) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar18 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data;
            local_60 = pFVar18 + lVar6;
            *(int *)(pFVar18 + lVar6 + 8) = iVar2;
            UMaterialInterface::GetAllTextureParameterInfo
                      (*(UMaterialInterface **)(pFVar18 + lVar6),&local_b8,&local_a0);
            uVar12 = (ulonglong)local_b8.ArrayNum;
            pFVar18 = local_b8.AllocatorInstance.Data + uVar12 * 0x10;
            local_90 = local_b8.ArrayNum;
            uVar13 = uVar12;
            FVar17.Data = local_b8.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar12 != (int)uVar13) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<FMaterialParameterInfo,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_res8);
              }
              if (FVar17.Data == pFVar18) break;
              iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
              pFVar14 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
              pFVar1 = pFVar14 + (longlong)iVar2 * 0x14;
              while( true ) {
                if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
                  local_res18[0] = 0;
                  `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_res18);
                }
                if (pFVar14 == pFVar1) goto LAB_1494b0e80;
                if (*(longlong *)(pFVar14 + 8) == *(longlong *)FVar17.Data) break;
                pFVar14 = pFVar14 + 0x14;
              }
              if (pFVar14 != (FScriptContainerElement *)0x0) {
                uVar16 = *(int *)(pFVar14 + 0x10) + *(int *)(local_60 + 8);
                local_74 = 0;
                local_78 = (undefined4)*(longlong *)FVar17.Data;
                local_70 = (undefined4)((ulonglong)*(longlong *)FVar17.Data >> 0x20);
                local_6c = *(undefined4 *)(FVar17.Data + 0xc);
                local_68 = FVar17.Data[8];
                cVar8 = (**(code **)(**(longlong **)local_60 + 0x418))
                                  (*(longlong **)local_60,&local_78,local_58,0);
                if (cVar8 != '\0') {
                  uVar9 = 0;
                  if ((int)uVar16 < local_c8.ArrayNum) {
                    uVar9 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pUVar10 = local_58[0];
                  pFVar1 = local_c8.AllocatorInstance.Data + (longlong)(int)uVar16 * 8;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_58[0] != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_58[0]);
                  }
                  *(UObject **)pFVar1 = pUVar10;
                }
              }
LAB_1494b0e80:
              uVar12 = (ulonglong)(uint)local_b8.ArrayNum;
              FVar17.Data = FVar17.Data + 0x10;
              uVar13 = (ulonglong)local_90;
            }
            local_res20 = local_res20 + 1;
            local_a8 = local_a8 + local_8c;
            local_88 = local_88 + 0x10;
            local_80 = local_80 + -1;
          } while (local_80 != 0);
          local_80 = 0;
          param_1 = (bool)local_res10;
        }
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
        if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        pUVar3 = this->Bindless_TextureCollection;
        puVar15 = &pUVar3->field_0x30;
        if ((TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *)puVar15 != &local_c8) {
          if (*(void **)puVar15 != (void *)0x0) {
            FMemory::Free(*(void **)puVar15);
          }
          *(FScriptContainerElement **)puVar15 = local_c8.AllocatorInstance.Data;
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)&pUVar3->field_0x38 = local_c8.ArrayNum;
          *(int *)&pUVar3->field_0x3c = local_c8.ArrayMax;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
        }
        UTextureCollection::UpdateResource((UTextureCollection *)this->Bindless_TextureCollection);
        UpdateBindlessMaterialInstance(this);
        if (param_1 != false) {
          UpdateAllCustomDatas(this);
        }
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateNumCustomDataFloats @ 1494b0f90

void __thiscall UWN_BindlessISMComponent::UpdateNumCustomDataFloats(UWN_BindlessISMComponent *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bindless_TextureCollectionBindings).ArrayNum;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001494b0fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0xbd0))(this,0);
    return;
  }
  iVar4 = 0;
  pFVar5 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x14;
  while( true ) {
    if ((this->Bindless_TextureCollectionBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FWN_BindlessISM_TextureCollectionBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    iVar3 = *(int *)(pFVar5 + 0x10);
    if (*(int *)(pFVar5 + 0x10) < iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    pFVar5 = pFVar5 + 0x14;
  }
                    /* WARNING: Could not recover jumptable at 0x0001494b1025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xbd0))(this,iVar4 + 1);
  return;
}

// execGetTextureCollectionParameterNames @ 1494b3050

void __cdecl
UWN_BindlessISMComponent::execGetTextureCollectionParameterNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetTextureCollectionParameterNames((UWN_BindlessISMComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetTextureParameterNames @ 1494b30d0

void __cdecl
UWN_BindlessISMComponent::execGetTextureParameterNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetTextureParameterNames((UWN_BindlessISMComponent *)param_1,&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

