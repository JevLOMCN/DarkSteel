// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// StaticClass @ 14907aa90

UClass * __cdecl UNiagaraDataChannelHandler_MapBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_MapBase",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_MapBase,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannelHandler_MapBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_MapBase>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton;
}

// UNiagaraDataChannelHandler_MapBase @ 1490b2880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler_MapBase * __thiscall
UNiagaraDataChannelHandler_MapBase::UNiagaraDataChannelHandler_MapBase
          (UNiagaraDataChannelHandler_MapBase *this,FVTableHelper *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_MapBase__6B_;
  this->CleanFreeEntriesTimer = 0.0;
  this->CurrentlyInitializingEntry = (FNDCMapEntry *)0x0;
  (this->EntryPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryPool).ArrayNum = 0;
  (this->EntryPool).ArrayMax = 0;
  *(undefined8 *)&this->ActiveEntries = 0;
  *(undefined8 *)&(this->ActiveEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveEntries).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x48 = 0;
  (this->FreeEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeEntries).ArrayNum = 0;
  (this->FreeEntries).ArrayMax = 0;
  *(undefined8 *)&this->SpawnedComponentsToActiveEntry = 0;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x34 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x48 = 0;
  (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UNiagaraDataChannelHandler_MapBase @ 1490b2960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler_MapBase * __thiscall
UNiagaraDataChannelHandler_MapBase::UNiagaraDataChannelHandler_MapBase
          (UNiagaraDataChannelHandler_MapBase *this,FObjectInitializer *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_MapBase__6B_;
  this->CleanFreeEntriesTimer = 0.0;
  this->CurrentlyInitializingEntry = (FNDCMapEntry *)0x0;
  (this->EntryPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryPool).ArrayNum = 0;
  (this->EntryPool).ArrayMax = 0;
  *(undefined8 *)&this->ActiveEntries = 0;
  *(undefined8 *)&(this->ActiveEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveEntries).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveEntries).field_0x48 = 0;
  (this->FreeEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeEntries).ArrayNum = 0;
  (this->FreeEntries).ArrayMax = 0;
  *(undefined8 *)&this->SpawnedComponentsToActiveEntry = 0;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x34 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpawnedComponentsToActiveEntry).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x48 = 0;
  (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UNiagaraDataChannelHandler_MapBase @ 1490b8700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_MapBase::~UNiagaraDataChannelHandler_MapBase
          (UNiagaraDataChannelHandler_MapBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_MapBase__6B_;
  *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpawnedComponentsToActiveEntry).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UNiagaraComponent>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpawnedComponentsToActiveEntry);
  pFVar2 = (this->FreeEntries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ActiveEntries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveEntries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNDCMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNDCMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNDCMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveEntries);
  DestructItems<FNDCMapEntry,int>
            ((FNDCMapEntry *)(this->EntryPool).AllocatorInstance.Data,(this->EntryPool).ArrayNum);
  pFVar2 = (this->EntryPool).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraDataChannelHandler::~UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this);
  return;
}

// BeginFrame @ 1490cddf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_MapBase::BeginFrame
          (UNiagaraDataChannelHandler_MapBase *this,float param_1)

{
  TMap<FNDCMapKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TObjectPtr<UNiagaraComponent_const_>_u_0 *pTVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  TObjectPtr<UNiagaraComponent_const_>_u_0 TVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  UPackage *pUVar15;
  UWorld *pUVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  TObjectPtr<UNiagaraComponent_const_>_u_0 *pTVar21;
  FInstancedStruct *this_00;
  float fVar22;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res10 [8];
  undefined4 local_res18;
  TObjectPtr<UNiagaraComponent_const_>_u_0 local_res20;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  longlong local_a8;
  FScriptContainerElement *local_a0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_60;
  
  UNiagaraDataChannelHandler::BeginFrame((UNiagaraDataChannelHandler *)this,param_1);
  pTVar1 = &this->ActiveEntries;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_b0 = '\0';
  cStack_af = '\0';
  stack0xffffffffffffff28 = local_88._16_16_;
  auStack_e0._0_8_ = local_88._8_8_;
  local_c8 = local_68;
  pTStack_c0 = pTStack_60;
  uVar17 = local_88._24_8_ >> 0x20;
  local_b8 = (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      uVar18 = *(uint *)((longlong)(int)uVar17 * 0x60 + 0x50 + *(longlong *)local_88._0_8_);
      uVar13 = 0;
      if ((int)uVar18 < (this->EntryPool).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (this->EntryPool).AllocatorInstance.Data;
      lVar20 = (longlong)(int)uVar18 * 0x10;
      plVar7 = *(longlong **)(pFVar6 + lVar20 + 8);
      lVar19 = *(longlong *)(pFVar6 + lVar20);
      local_a8 = lVar20;
      local_a0 = pFVar6;
      if ((plVar7 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Memory != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd1,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((lVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd2,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar15 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar15,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1490cdf8a;
LAB_1490cdfae:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                            ,0xd3,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
LAB_1490cdf8a:
        iVar14 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_
        ;
        if ((*(int *)(lVar19 + 0x38) < iVar14) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar14 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_1490cdfae;
      }
      cVar12 = (**(code **)(*plVar7 + 0x20))
                         (plVar7,param_1,this->_padding_,
                          (longlong)(int)uStack_cc * 0x60 + *(longlong *)local_88._0_8_);
      if (cVar12 == '\0') {
        lVar19 = *(longlong *)(pFVar6 + lVar20 + 8);
        lVar20 = *(longlong *)(pFVar6 + lVar20);
        if ((lVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Memory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd1,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((lVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Struct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd2,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar15 = Z_Construct_UPackage__Script_Niagara();
          Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar15,
                               L"NDCMapEntryBase");
          if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
              (UScriptStruct *)0x0) goto LAB_1490ce092;
LAB_1490ce0b6:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd3,L"");
          if (bVar11) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
LAB_1490ce092:
          iVar14 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->
                        _padding_;
          if ((*(int *)(lVar20 + 0x38) < iVar14) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar14 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (!bVar11) goto LAB_1490ce0b6;
        }
        pTVar21 = *(TObjectPtr<UNiagaraComponent_const_>_u_0 **)(lVar19 + 0x10);
        iVar14 = *(int *)(lVar19 + 0x18);
        pTVar4 = pTVar21 + iVar14;
        while( true ) {
          if (*(int *)(lVar19 + 0x18) != iVar14) {
            local_res10[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pTVar21 == pTVar4) break;
          TVar8 = (TObjectPtr<UNiagaraComponent_const_>_u_0)pTVar21->DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (TVar8.DebugPtr != (UNiagaraComponent *)0x0) goto LAB_1490ce128;
          }
          else if (TVar8.DebugPtr != (UNiagaraComponent *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
LAB_1490ce128:
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
            }
            local_res20 = TVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
            }
            if (*(int *)&(this->SpawnedComponentsToActiveEntry).field_0x8 !=
                *(int *)&(this->SpawnedComponentsToActiveEntry).field_0x34) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
              }
              uVar18 = ((uint)((ulonglong)TVar8.DebugPtr >> 0x14) & 0xffff ^
                       (uint)((ulonglong)TVar8.DebugPtr >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
              ::RemoveImpl<TObjectPtr<UNiagaraComponent_const_>_>
                        ((TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                          *)&this->SpawnedComponentsToActiveEntry,uVar18 >> 0x10 ^ uVar18,
                         (TObjectPtr<UNiagaraComponent_const_> *)&local_res20.ObjectPtr);
            }
          }
          pTVar21 = pTVar21 + 1;
        }
        plVar7 = *(longlong **)(local_a0 + local_a8 + 8);
        lVar19 = *(longlong *)(local_a0 + local_a8);
        if ((plVar7 == (longlong *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Memory != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd1,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((lVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Struct != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                                ,0xd2,L""), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar15 = Z_Construct_UPackage__Script_Niagara();
          Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar15,
                               L"NDCMapEntryBase");
          if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
              (UScriptStruct *)0x0) goto LAB_1490ce24a;
LAB_1490ce26e:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd3,L"");
          if (bVar11) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
LAB_1490ce24a:
          iVar14 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->
                        _padding_;
          if ((*(int *)(lVar19 + 0x38) < iVar14) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar14 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (!bVar11) goto LAB_1490ce26e;
        }
        lVar20 = (longlong)(int)uStack_cc;
        (**(code **)(*plVar7 + 0x10))(plVar7,*(longlong *)local_88._0_8_ + lVar20 * 0x60);
        iVar14 = (this->FreeEntries).ArrayNum;
        piVar2 = &(this->FreeEntries).ArrayMax;
        lVar19 = *(longlong *)local_88._0_8_;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->FreeEntries).AllocatorInstance,piVar2);
        }
        (this->FreeEntries).ArrayNum = iVar14 + 1;
        *(undefined4 *)((this->FreeEntries).AllocatorInstance.Data + (longlong)iVar14 * 4) =
             *(undefined4 *)(lVar19 + 0x50 + lVar20 * 0x60);
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_c0,uStack_cc);
        local_b0 = '\x01';
      }
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar17 = (ulonglong)uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if ((local_b0 != '\0') && (cStack_af != '\0')) {
      uVar18 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
      if (uVar18 < 4) {
        iVar14 = 1;
      }
      else {
        uVar17 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_res18 = (undefined4)lVar19;
        iVar14 = 1 << ((byte)lVar19 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_b8->HashSize < iVar14)) || (iVar14 < local_b8->HashSize)) {
        local_b8->HashSize = iVar14;
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash(local_b8);
      }
    }
  }
  fVar22 = param_1 + this->CleanFreeEntriesTimer;
  this->CleanFreeEntriesTimer = fVar22;
  if (NDCMapLocal::EntryPoolUnusedCleanTime <= fVar22) {
    this->CleanFreeEntriesTimer = 0.0;
    pUVar16 = FNiagaraWorldManager::GetWorld((FNiagaraWorldManager *)this->_padding_);
    pTVar3 = &this->FreeEntries;
    dVar5 = pUVar16->RealTimeSeconds;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_UNiagaraDataChannelHandler_MapBase::BeginFrame_::__l17::<lambda_1>_>_>
              ((int *)(pTVar3->AllocatorInstance).Data,(this->FreeEntries).ArrayNum,local_res10[0],
               (<lambda_1> *)local_res8);
    while (0 < (this->FreeEntries).ArrayNum) {
      uVar18 = *(uint *)(pTVar3->AllocatorInstance).Data;
      uVar13 = 0;
      if ((int)uVar18 < (this->EntryPool).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (this->EntryPool).AllocatorInstance.Data;
      plVar7 = *(longlong **)(pFVar6 + (longlong)(int)uVar18 * 0x10 + 8);
      lVar19 = *(longlong *)(pFVar6 + (longlong)(int)uVar18 * 0x10);
      if ((plVar7 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Memory != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd1,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((lVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Struct != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                              ,0xd2,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar15 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar15,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1490ce4df;
LAB_1490ce503:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                            ,0xd3,L"");
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
LAB_1490ce4df:
        iVar14 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_
        ;
        if ((*(int *)(lVar19 + 0x38) < iVar14) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar14 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_1490ce503;
      }
      if ((uVar18 != (this->EntryPool).ArrayNum - 1U) ||
         ((float)dVar5 - *(float *)(plVar7 + 6) < NDCMapLocal::EntryPoolUnusedCleanTime)) break;
      (**(code **)(*plVar7 + 0x18))(plVar7);
      if (((this->EntryPool).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (this->EntryPool).AllocatorInstance.Data;
      lVar19 = (longlong)(this->EntryPool).ArrayNum;
      local_98 = (TObjectPtr<UScriptStruct_const_>_u_0)
                 ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar6 + lVar19 * 0x10 + -0x10))->
                 DebugPtr;
      uVar9 = *(undefined8 *)(pFVar6 + lVar19 * 0x10 + -8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_98.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_98.DebugPtr);
      }
      *(undefined8 *)(pFVar6 + lVar19 * 0x10 + -0x10) = 0;
      *(undefined8 *)(pFVar6 + lVar19 * 0x10 + -8) = 0;
      uVar18 = (this->EntryPool).ArrayNum - 1;
      this_00 = (FInstancedStruct *)
                ((this->EntryPool).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
      local_90 = uVar9;
      FInstancedStruct::Reset(this_00);
      iVar14 = (this->EntryPool).ArrayNum + ~uVar18;
      if (iVar14 != 0) {
        memmove(this_00,this_00 + 1,(longlong)iVar14 << 4);
      }
      piVar2 = &(this->EntryPool).ArrayNum;
      *piVar2 = *piVar2 + -1;
      FInstancedStruct::Reset((FInstancedStruct *)&local_98.ObjectPtr);
      if (((this->FreeEntries).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      iVar14 = (this->FreeEntries).ArrayNum + -1;
      if (iVar14 != 0) {
        memmove(pFVar6,pFVar6 + 4,(longlong)iVar14 << 2);
      }
      iVar14 = (this->FreeEntries).ArrayNum + -1;
      (this->FreeEntries).ArrayNum = iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar3->AllocatorInstance,iVar14,&(this->FreeEntries).ArrayMax);
    }
    iVar14 = (this->FreeEntries).ArrayNum;
    piVar2 = &(this->FreeEntries).ArrayMax;
    if (*piVar2 != iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar14,&(this->FreeEntries).AllocatorInstance,iVar14,piVar2);
    }
    iVar14 = (this->EntryPool).ArrayNum;
    piVar2 = &(this->EntryPool).ArrayMax;
    if (*piVar2 != iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar14,&(this->EntryPool).AllocatorInstance,iVar14,piVar2);
    }
  }
  return;
}

// Cleanup @ 1490d3090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_MapBase::Cleanup(UNiagaraDataChannelHandler_MapBase *this)

{
  undefined1 *puVar1;
  TMap<FNDCMapKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>_> *this_00;
  int *piVar2;
  TMap<TObjectPtr<UNiagaraComponent>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>_>
  *this_01;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UPackage *pUVar9;
  ulonglong uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  UNiagaraDataChannelHandler::Cleanup((UNiagaraDataChannelHandler *)this);
  this_00 = &this->ActiveEntries;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)this_00);
  iVar11 = 0;
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar10 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      uVar13 = *(uint *)((longlong)(int)uVar10 * 0x60 + 0x50 + *local_68);
      uVar7 = 0;
      if ((int)uVar13 < (this->EntryPool).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->EntryPool).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x10;
      plVar3 = *(longlong **)(pFVar12 + 8);
      lVar4 = *(longlong *)pFVar12;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((lVar4 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar9 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar9,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1490d3230;
LAB_1490d3254:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
LAB_1490d3230:
        iVar8 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1490d3254;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,(longlong)(int)uStack_4c * 0x60 + *local_68);
      plVar3 = *(longlong **)(pFVar12 + 8);
      lVar4 = *(longlong *)pFVar12;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd1,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((lVar4 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar9 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar9,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1490d3328;
LAB_1490d334c:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
LAB_1490d3328:
        iVar8 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1490d334c;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar10 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar13 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar8 = 1;
      }
      else {
        uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_38->HashSize < iVar8)) || (iVar8 < local_38->HashSize)) {
        local_38->HashSize = iVar8;
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  do {
    if ((iVar11 < 0) || ((this->FreeEntries).ArrayNum <= iVar11)) {
      bVar6 = 1 < *(int *)&(this->ActiveEntries).field_0x48;
      if (!bVar6) {
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<FNDCMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNDCMapKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,0,*(int *)&(this->ActiveEntries).field_0x8);
      puVar1 = &(this->ActiveEntries).field_0xc;
      *(undefined4 *)&(this->ActiveEntries).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->ActiveEntries).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ActiveEntries).field_0x34 = 0;
      iVar11 = *(int *)&(this->ActiveEntries).field_0x2c;
      *(undefined4 *)&(this->ActiveEntries).field_0x28 = 0;
      if ((iVar11 < 0) || (0x80 < iVar11)) {
        *(undefined4 *)&(this->ActiveEntries).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveEntries).field_0x10,0);
      }
      if (bVar6) {
        *(undefined4 *)&(this->ActiveEntries).field_0x48 = 1;
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      piVar2 = &(this->FreeEntries).ArrayMax;
      (this->FreeEntries).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->FreeEntries).AllocatorInstance,0,piVar2);
      }
      DestructItems<FNDCMapEntry,int>
                ((FNDCMapEntry *)(this->EntryPool).AllocatorInstance.Data,(this->EntryPool).ArrayNum
                );
      piVar2 = &(this->EntryPool).ArrayMax;
      (this->EntryPool).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->EntryPool).AllocatorInstance,0,piVar2);
      }
      this_01 = &this->SpawnedComponentsToActiveEntry;
      bVar6 = 1 < *(int *)&(this->SpawnedComponentsToActiveEntry).field_0x48;
      if (!bVar6) {
        TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                          *)this_01);
      }
      puVar1 = &(this->SpawnedComponentsToActiveEntry).field_0xc;
      *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x34 = 0;
      iVar11 = *(int *)&(this->SpawnedComponentsToActiveEntry).field_0x2c;
      *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x28 = 0;
      if ((iVar11 < 0) || (0x80 < iVar11)) {
        *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->SpawnedComponentsToActiveEntry).field_0x10,0);
      }
      if (bVar6) {
        *(undefined4 *)&(this->SpawnedComponentsToActiveEntry).field_0x48 = 1;
        TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                  *)this_01);
      }
      (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = (UObject *)0x0;
      return;
    }
    if ((iVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar13 = *(uint *)((this->FreeEntries).AllocatorInstance.Data + (longlong)iVar11 * 4);
    uVar7 = 0;
    if ((int)uVar13 < (this->EntryPool).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = (this->EntryPool).AllocatorInstance.Data;
    plVar3 = *(longlong **)(pFVar12 + (longlong)(int)uVar13 * 0x10 + 8);
    lVar4 = *(longlong *)(pFVar12 + (longlong)(int)uVar13 * 0x10);
    if ((plVar3 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar4 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar9,
                           L"NDCMapEntryBase");
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_1490d355d;
LAB_1490d3581:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_1490d355d:
      iVar8 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_1490d3581;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    iVar11 = iVar11 + 1;
  } while( true );
}

// EndFrame @ 1490f0b30

void __thiscall
UNiagaraDataChannelHandler_MapBase::EndFrame(UNiagaraDataChannelHandler_MapBase *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPackage *pUVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)&this->ActiveEntries);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar9 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)&this->ActiveEntries;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      uVar10 = *(uint *)((longlong)(int)uVar9 * 0x60 + 0x50 + *local_58);
      uVar6 = 0;
      if ((int)uVar10 < (this->EntryPool).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar1 = (this->EntryPool).AllocatorInstance.Data;
      plVar2 = *(longlong **)(pFVar1 + (longlong)(int)uVar10 * 0x10 + 8);
      lVar3 = *(longlong *)(pFVar1 + (longlong)(int)uVar10 * 0x10);
      if ((plVar2 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((lVar3 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar8 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar8,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_1490f0cc0;
LAB_1490f0ce4:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
LAB_1490f0cc0:
        iVar7 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1490f0ce4;
      }
      (**(code **)(*plVar2 + 0x28))
                (plVar2,param_1,this->_padding_,(longlong)(int)uStack_3c * 0x60 + *local_58);
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar9 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
        local_28->HashSize = iVar7;
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

// FindData @ 1490f93c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler_MapBase::FindData
          (UNiagaraDataChannelHandler_MapBase *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__,
          FNDCAccessContextInst *param_1,ENiagaraResourceAccess param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNDCMapEntry *this_00;
  FNDCMapEntryBase *pFVar2;
  
  this_00 = (FNDCMapEntry *)(**(code **)(this->_padding_ + 0x2f8))(this,param_1);
  pFVar2 = FNDCMapEntry::Get<FNDCMapEntryBase>(this_00);
  __return_storage_ptr__->Object = (pFVar2->Data).Object;
  pTVar1 = (pFVar2->Data).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// FindOrAddEntry @ 1490f9740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDCMapEntry * __thiscall
UNiagaraDataChannelHandler_MapBase::FindOrAddEntry
          (UNiagaraDataChannelHandler_MapBase *this,FNDCAccessContextInst *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FWeakObjectPtr *pFVar3;
  TObjectPtr<UNiagaraComponent_const_>_u_0 TVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  ForElementType<unsigned_char> FVar7;
  undefined1 *puVar8;
  int iVar9;
  FNDCAccessContext_MapBase *pFVar10;
  UClass *pUVar11;
  FNDCMapEntryBase *pFVar12;
  FNDCMapEntry *pFVar13;
  undefined8 *puVar14;
  UObject *pUVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FWeakObjectPtr *this_00;
  ForElementType<unsigned_char> FVar20;
  uint *puVar21;
  FInstancedStruct *this_01;
  longlong lVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [4];
  undefined1 local_f4 [12];
  TObjectPtr<UNiagaraComponent_const_>_u_0 local_e8;
  FNDCMapKey *local_e0;
  FNDCMapKey *local_d8;
  FNDCAccessContextInst *local_d0;
  undefined1 *local_c8;
  UObject *local_c0;
  UObject **local_b8;
  FScriptContainerElement *local_b0;
  undefined1 local_a8 [16];
  FNDCMapKey local_98;
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_d0 = param_1;
  pFVar10 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
  uVar19 = 0;
  puVar1 = &pFVar10->field_0x38;
  *(undefined4 *)&pFVar10->field_0x40 = 0;
  local_c8 = puVar1;
  if (*(int *)&pFVar10->field_0x44 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)puVar1,0,(int *)&pFVar10->field_0x44);
  }
  uVar23 = 0;
  if (((pFVar10->field_0x8 & 1) != 0) &&
     (TVar4.ObjectPtr.field0_0x0 = *(FObjectPtr *)pFVar10,
     TVar4.DebugPtr != (UNiagaraComponent *)0x0)) {
    pUVar11 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)((TVar4.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar4.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar11->_padding_)) {
      if (this->CurrentlyInitializingEntry == (FNDCMapEntry *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        local_e8.ObjectPtr.field0_0x0 = TVar4.ObjectPtr.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        uVar18 = ((uint)((ulonglong)TVar4.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar4.DebugPtr >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        iVar9 = TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<UNiagaraComponent_const_>_>
                          ((TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                            *)&this->SpawnedComponentsToActiveEntry,uVar18 >> 0x10 ^ uVar18,
                           (TObjectPtr<UNiagaraComponent_const_> *)&local_e8.ObjectPtr);
        if (((iVar9 != -1) &&
            (lVar22 = *(longlong *)&this->SpawnedComponentsToActiveEntry + (longlong)iVar9 * 0x18,
            lVar22 != 0)) && (puVar21 = (uint *)(lVar22 + 8), puVar21 != (uint *)0x0)) {
          uVar18 = *puVar21;
          uVar16 = uVar23;
          if ((int)uVar18 < (this->EntryPool).ArrayNum) {
            uVar16 = ~uVar18 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FNDCMapEntry *)(*pcVar6)();
            return pFVar13;
          }
          pFVar12 = FNDCMapEntry::Get<FNDCMapEntryBase>
                              ((FNDCMapEntry *)
                               ((this->EntryPool).AllocatorInstance.Data +
                               (longlong)(int)uVar18 * 0x10));
          pFVar17 = (pFVar12->SpawnedComponents).AllocatorInstance.Data;
          pFVar24 = pFVar17 + (longlong)(pFVar12->SpawnedComponents).ArrayNum * 8;
          for (; pFVar17 != pFVar24; pFVar17 = pFVar17 + 8) {
            if (*(UNiagaraComponent **)pFVar17 == (UNiagaraComponent *)0x0) {
              bVar25 = TVar4.DebugPtr == (UNiagaraComponent *)0x0;
            }
            else {
              bVar25 = *(UNiagaraComponent **)pFVar17 == TVar4.DebugPtr;
            }
            if (bVar25) goto LAB_1490f9aae;
          }
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("EntryPool[*FoundEntryIdx].Get().SpawnedComponents.Contains(OwnerComp)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Map.cpp"
                              ,200,L"");
          if (bVar25) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FNDCMapEntry *)(*pcVar6)();
            return pFVar13;
          }
LAB_1490f9aae:
          uVar18 = *puVar21;
          if ((int)uVar18 < (this->EntryPool).ArrayNum) {
            uVar23 = ~uVar18 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FNDCMapEntry *)(*pcVar6)();
            return pFVar13;
          }
          return (FNDCMapEntry *)
                 ((this->EntryPool).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
        }
      }
      else {
        pFVar12 = FNDCMapEntry::Get<FNDCMapEntryBase>(this->CurrentlyInitializingEntry);
        pFVar17 = (pFVar12->SpawnedComponents).AllocatorInstance.Data;
        pFVar24 = pFVar17 + (longlong)(pFVar12->SpawnedComponents).ArrayNum * 8;
        for (; pFVar17 != pFVar24; pFVar17 = pFVar17 + 8) {
          if (*(UNiagaraComponent **)pFVar17 == (UNiagaraComponent *)0x0) {
            bVar25 = TVar4.DebugPtr == (UNiagaraComponent *)0x0;
          }
          else {
            bVar25 = *(UNiagaraComponent **)pFVar17 == TVar4.DebugPtr;
          }
          if (bVar25) {
            return this->CurrentlyInitializingEntry;
          }
        }
      }
    }
  }
  local_e0 = &local_98;
  local_98.KeyData.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_98.KeyData.ArrayNum = 0;
  local_98.KeyData.ArrayMax = 0x40;
  (**(code **)(this->_padding_ + 0x2f0))(this,param_1,&local_e0);
  FVar20 = local_98.KeyData.AllocatorInstance.SecondaryData;
  lVar22 = (longlong)local_98.KeyData.ArrayNum;
  FVar7 = (ForElementType<unsigned_char>)&local_98;
  uVar18 = uVar23;
  if (local_98.KeyData.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar7 = local_98.KeyData.AllocatorInstance.SecondaryData;
  }
  for (; lVar22 != 0; lVar22 = lVar22 + -1) {
    uVar18 = (uint)uVar19 ^
             (uint)uVar19 * 0x40 + (int)(uVar19 >> 2) + -0x61c88647 + (uint)*(byte *)FVar7;
    uVar19 = (ulonglong)uVar18;
    FVar7 = (ForElementType<unsigned_char>)((longlong)FVar7 + 1);
  }
  iVar9 = TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNDCMapKey>
                    ((TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
                      *)&this->ActiveEntries,uVar18,&local_98);
  if (((iVar9 == -1) ||
      (lVar22 = (longlong)iVar9 * 0x60 + *(longlong *)&this->ActiveEntries, lVar22 == 0)) ||
     (puVar21 = (uint *)(lVar22 + 0x50), puVar21 == (uint *)0x0)) {
    if ((this->FreeEntries).ArrayNum < 1) {
      uVar18 = (this->EntryPool).ArrayNum;
      puVar14 = (undefined8 *)(**(code **)(this->_padding_ + 0x2e8))(this,local_a8);
      piVar2 = &(this->EntryPool).ArrayMax;
      iVar9 = (this->EntryPool).ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->EntryPool).AllocatorInstance,piVar2);
      }
      (this->EntryPool).ArrayNum = iVar9 + 1;
      pUVar5 = (UScriptStruct *)*puVar14;
      this_01 = (FInstancedStruct *)
                ((this->EntryPool).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
      FInstancedStruct::FInstancedStruct(this_01);
      FInstancedStruct::InitializeAs(this_01,pUVar5,(uchar *)0x0);
    }
    else {
      uVar18 = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeEntries,Default);
    }
    if ((uVar18 == 0xffffffff) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewEntryIdx != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Map.cpp"
                            ,0xe6,L""), bVar25)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCMapEntry *)(*pcVar6)();
      return pFVar13;
    }
    if ((int)uVar18 < (this->EntryPool).ArrayNum) {
      uVar23 = ~uVar18 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCMapEntry *)(*pcVar6)();
      return pFVar13;
    }
    pFVar24 = (this->EntryPool).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
    local_b0 = pFVar24;
    if ((pFVar24 == (FScriptContainerElement *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("RetEntry",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Map.cpp"
                            ,0xe8,L""), bVar25)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCMapEntry *)(*pcVar6)();
      return pFVar13;
    }
    local_d8 = &local_98;
    TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FNDCMapKey_const_&>_>
              ((TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
                *)&this->ActiveEntries,(TKeyInitializer<FNDCMapKey_const_&> *)local_f4,
               (bool *)&local_d8);
    *(uint *)((longlong)(int)local_f4._0_4_ * 0x60 + 0x50 + *(longlong *)&this->ActiveEntries) =
         uVar18;
    this->CurrentlyInitializingEntry = (FNDCMapEntry *)pFVar24;
    pFVar12 = FNDCMapEntry::Get<FNDCMapEntryBase>((FNDCMapEntry *)pFVar24);
    (**(code **)(pFVar12->_padding_ + 8))(pFVar12,local_d0,this,&local_98);
    puVar8 = local_c8;
    this->CurrentlyInitializingEntry = (FNDCMapEntry *)0x0;
    this_00 = *(FWeakObjectPtr **)puVar1;
    iVar9 = *(int *)&pFVar10->field_0x40;
    pFVar3 = this_00 + iVar9;
    while( true ) {
      if (*(int *)(puVar8 + 8) != iVar9) {
        `TCheckedPointerIterator<FNDCSpawnedSystemRef,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      FVar20 = local_98.KeyData.AllocatorInstance.SecondaryData;
      pFVar24 = local_b0;
      if (this_00 == pFVar3) break;
      pUVar15 = FWeakObjectPtr::Get(this_00);
      if (pUVar15 != (UObject *)0x0) {
        local_c0 = pUVar15;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        local_b8 = &local_c0;
        TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<TObjectPtr<UNiagaraComponent>_&&>_>
                  ((TSet<TTuple<TObjectPtr<UNiagaraComponent>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraComponent>,int,0>,FDefaultSetAllocator>
                    *)&this->SpawnedComponentsToActiveEntry,
                   (TKeyInitializer<TObjectPtr<UNiagaraComponent>_&&> *)(local_f4 + 4),
                   (bool *)&local_b8);
        *(uint *)(*(longlong *)&this->SpawnedComponentsToActiveEntry + 8 +
                 (longlong)(int)local_f4._4_4_ * 0x18) = uVar18;
      }
      this_00 = this_00 + 1;
    }
  }
  else {
    uVar18 = *puVar21;
    if ((int)uVar18 < (this->EntryPool).ArrayNum) {
      uVar23 = ~uVar18 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar20 = local_98.KeyData.AllocatorInstance.SecondaryData, bVar25)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCMapEntry *)(*pcVar6)();
      return pFVar13;
    }
    pFVar24 = (this->EntryPool).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
  }
  if (FVar20 != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)FVar20);
  }
  return (FNDCMapEntry *)pFVar24;
}

// GenerateKey @ 1490fb1b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UNiagaraDataChannelHandler_MapBase::GenerateKey
          (UNiagaraDataChannelHandler_MapBase *this,FNDCAccessContextInst *param_1,
          FNDCMapKeyWriter *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ForElementType<unsigned_char> *pFVar3;
  FNDCAccessContext_MapBase *pFVar4;
  FNDCMapKey *pFVar5;
  
  pFVar4 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
  if ((*(longlong *)&pFVar4->field_0x30 != 0) &&
     ((*(uint *)(*(longlong *)&pFVar4->field_0x30 + 8) >> 0x1e & 1) == 0)) {
    pFVar3 = (ForElementType<unsigned_char> *)param_2->DestKey;
    iVar1 = *(int *)(pFVar3->InlineData + 0x48);
    uVar2 = *(undefined4 *)(*(longlong *)&pFVar4->field_0x30 + 0x18);
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
              (1,1,4,pFVar3,(int *)(pFVar3->InlineData + 0x48),(int *)(pFVar3->InlineData + 0x4c));
    pFVar5 = *(FNDCMapKey **)&(param_2->DestKey->KeyData).AllocatorInstance.SecondaryData.field_0x0;
    if (pFVar5 == (FNDCMapKey *)0x0) {
      pFVar5 = param_2->DestKey;
    }
    *(undefined4 *)((pFVar5->KeyData).AllocatorInstance.InlineData + iVar1) = uVar2;
  }
  return;
}

// GetMapEntryType @ 1491060c0

TNDCMapEntryType __thiscall
UNiagaraDataChannelHandler_MapBase::GetMapEntryType(UNiagaraDataChannelHandler_MapBase *this)

{
  UPackage *pUVar1;
  UScriptStruct *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel_Map.h"
             ,0xf8,L"Pure virtual not implemented (%s)");
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar1,
                         L"NDCMapEntryBase");
  }
  TNDCMapEntryType::TNDCMapEntryType
            ((TNDCMapEntryType *)in_RDX,
             Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton);
  return (TNDCMapEntryType)in_RDX;
}

// GetPrivateStaticClass @ 149108480

UClass * __cdecl UNiagaraDataChannelHandler_MapBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_MapBase",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_MapBase,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataChannelHandler_MapBase>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_MapBase>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_MapBase.InnerSingleton;
}

// GetSystemToSpawn @ 14910b140

UObject * __thiscall
UNiagaraDataChannelHandler_MapBase::GetSystemToSpawn
          (UNiagaraDataChannelHandler_MapBase *this,FNDCAccessContextInst *param_1)

{
  FNDCAccessContext_MapBase *pFVar1;
  
  pFVar1 = FNDCAccessContextInst::GetChecked<FNDCAccessContext_MapBase>(param_1);
  if ((pFVar1->field_0x28 & 2) != 0) {
    return *(UObject **)&pFVar1->field_0x30;
  }
  return (this->DefaultSystemToSpawn).field0_0x0.DebugPtr;
}

// GetWorld @ 149111cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UWorld * __thiscall
UNiagaraDataChannelHandler_MapBase::GetWorld(UNiagaraDataChannelHandler_MapBase *this)

{
  UWorld *pUVar1;
  
  pUVar1 = FNiagaraWorldManager::GetWorld((FNiagaraWorldManager *)this->_padding_);
  return pUVar1;
}

// Init @ 149114260

void __thiscall
UNiagaraDataChannelHandler_MapBase::Init
          (UNiagaraDataChannelHandler_MapBase *this,UNiagaraDataChannel *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  UNiagaraDataChannel *local_res8;
  undefined1 local_res10 [8];
  FString local_38;
  FString local_28;
  
  pwVar9 = L"";
  if (param_1 == (UNiagaraDataChannel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InChannel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelHandler.cpp"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  this->_padding_ = *plVar5;
  pUVar6 = UNiagaraDataChannel_MapBase::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar6->_padding_)) && (param_1 != (UNiagaraDataChannel *)0x0)) {
    pUVar2 = (UObject *)param_1[1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (this->DefaultSystemToSpawn).field0_0x0.DebugPtr = pUVar2;
    return;
  }
  pFVar7 = GetTypeName<UNiagaraDataChannel_MapBase>(&local_38);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UNiagaraDataChannel_const_>(&local_28,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar8);
}

// StaticRegisterNativesUNiagaraDataChannelHandler_MapBase @ 149139d10

void __cdecl
UNiagaraDataChannelHandler_MapBase::StaticRegisterNativesUNiagaraDataChannelHandler_MapBase(void)

{
  return;
}

// Tick @ 14913b3f0

void __thiscall
UNiagaraDataChannelHandler_MapBase::Tick
          (UNiagaraDataChannelHandler_MapBase *this,float param_1,ETickingGroup param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPackage *pUVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  *(ETickingGroup *)&this->_padding_ = param_2;
  TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>::
  TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)&this->ActiveEntries);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar9 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
              *)&this->ActiveEntries;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      uVar10 = *(uint *)((longlong)(int)uVar9 * 0x60 + 0x50 + *local_58);
      uVar6 = 0;
      if ((int)uVar10 < (this->EntryPool).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar1 = (this->EntryPool).AllocatorInstance.Data;
      plVar2 = *(longlong **)(pFVar1 + (longlong)(int)uVar10 * 0x10 + 8);
      lVar3 = *(longlong *)(pFVar1 + (longlong)(int)uVar10 * 0x10);
      if ((plVar2 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((lVar3 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Struct != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                             ,0xd2,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar8 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar8,
                             L"NDCMapEntryBase");
        if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton !=
            (UScriptStruct *)0x0) goto LAB_14913b590;
LAB_14913b5b4:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd3,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
LAB_14913b590:
        iVar7 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14913b5b4;
      }
      (**(code **)(*plVar2 + 0x30))
                (plVar2,param_1,param_2,this->_padding_,(longlong)(int)uStack_3c * 0x60 + *local_58)
      ;
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar9 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar7 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_28->HashSize < iVar7)) || (iVar7 < local_28->HashSize)) {
        local_28->HashSize = iVar7;
        TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  return;
}

