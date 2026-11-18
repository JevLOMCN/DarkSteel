// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146f13c70

UClass * __cdecl UEnvQueryContext_BlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_BlueprintBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_BlueprintBase>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton;
}

// UEnvQueryContext_BlueprintBase @ 146f2a3e0

UEnvQueryContext_BlueprintBase * __thiscall
UEnvQueryContext_BlueprintBase::UEnvQueryContext_BlueprintBase
          (UEnvQueryContext_BlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryContext_BlueprintBase__6B_;
  return this;
}

// UEnvQueryContext_BlueprintBase @ 146f2a410

UEnvQueryContext_BlueprintBase * __thiscall
UEnvQueryContext_BlueprintBase::UEnvQueryContext_BlueprintBase
          (UEnvQueryContext_BlueprintBase *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UFunction *pUVar7;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->CallMode = InvalidCallMode;
  this->_padding_ = (longlong)&___7UEnvQueryContext_BlueprintBase__6B_;
  pUVar5 = GetPrivateStaticClass();
  pFVar6 = ::FName::FName(&local_res8,0x12,L"ProvideSingleActor",FNAME_Add);
  pUVar7 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar6,IncludeSuper);
  pUVar1 = (UClass *)pUVar7->_padding_;
  pFVar6 = ::FName::FName(&local_res8,0x15,L"ProvideSingleLocation",FNAME_Add);
  pUVar7 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar6,IncludeSuper);
  pUVar2 = (UClass *)pUVar7->_padding_;
  pFVar6 = ::FName::FName(&local_res8,0x10,L"ProvideActorsSet",FNAME_Add);
  pUVar7 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar6,IncludeSuper);
  pUVar3 = (UClass *)pUVar7->_padding_;
  pFVar6 = ::FName::FName(&local_res8,0x13,L"ProvideLocationsSet",FNAME_Add);
  pUVar7 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar6,IncludeSuper);
  pUVar4 = (UClass *)pUVar7->_padding_;
  if (pUVar1 != pUVar5) {
    this->CallMode = SingleActor;
  }
  if (pUVar2 != pUVar5) {
    this->CallMode = SingleLocation;
  }
  if (pUVar3 != pUVar5) {
    this->CallMode = ActorSet;
  }
  if (pUVar4 != pUVar5) {
    this->CallMode = LocationSet;
  }
  return this;
}

// ~UEnvQueryContext_BlueprintBase @ 146f2e890

void __thiscall
UEnvQueryContext_BlueprintBase::~UEnvQueryContext_BlueprintBase
          (UEnvQueryContext_BlueprintBase *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146f57b60

UClass * __cdecl UEnvQueryContext_BlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryContext_BlueprintBase",
               &Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton,
               StaticRegisterNativesUEnvQueryContext_BlueprintBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvQueryContext_BlueprintBase>,
               InternalVTableHelperCtorCaller<UEnvQueryContext_BlueprintBase>,local_res8,
               UEnvQueryContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.InnerSingleton;
}

// GetWorld @ 146f5ace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UEnvQueryContext_BlueprintBase::GetWorld(UEnvQueryContext_BlueprintBase *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Contexts\\EnvQueryContext_BlueprintBase.cpp"
                       ,0x7f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UWorld *)(*pcVar3)();
      return pUVar5;
    }
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar6 = UEnvQueryManager::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000146f5ad4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar5 = (UWorld *)(**(code **)(*plVar2 + 0x180))(plVar2);
      return pUVar5;
    }
  }
  return (UWorld *)0x0;
}

// ProvideActorsSet @ 146f63430

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
UEnvQueryContext_BlueprintBase::ProvideActorsSet
          (UEnvQueryContext_BlueprintBase *this,UObject *param_1,AActor *param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  UFunction *pUVar4;
  longlong lVar5;
  UObject *local_28;
  AActor *local_20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28 = param_1;
  local_20 = param_2;
  if (&local_18 != param_3) {
    uVar2 = param_3->ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar2;
    if (uVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,0,&local_18.AllocatorInstance,uVar2,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar2 << 3);
    }
  }
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_28);
  _Src_00.Data = local_18.AllocatorInstance.Data;
  if (param_3 != &local_18) {
    iVar3 = local_18.ArrayNum;
    lVar5 = (longlong)local_18.ArrayNum;
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_18.ArrayNum,*piVar1,&param_3->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (iVar3 != 0) {
        memcpy((param_3->AllocatorInstance).Data,_Src_00.Data,lVar5 << 3);
      }
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ProvideContext @ 146f63590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UEnvQueryContext_BlueprintBase::ProvideContext
          (UEnvQueryContext_BlueprintBase *this,FEnvQueryInstance *param_1,
          FEnvQueryContextData *param_2)

{
  ECallMode EVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  double dVar7;
  FEnvQueryContextData *pFVar8;
  void *pvVar9;
  byte bVar10;
  bool bVar11;
  UClass *pUVar12;
  UFunction *pUVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  ulonglong uVar16;
  uint uVar17;
  UObject *pUVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  int iVar27;
  UObject *pUVar28;
  byte bVar29;
  FWeakObjectPtr *pFVar30;
  longlong lVar31;
  undefined4 uVar32;
  FWeakObjectPtr local_res10;
  FEnvQueryContextData *local_res18;
  UObject *local_res20;
  ForAnyElementType local_148;
  uint local_140;
  int local_13c;
  ForAnyElementType local_138;
  uint local_130;
  int local_12c;
  double local_128;
  UObject *local_120;
  UObject *local_118;
  void *local_110;
  undefined8 local_108;
  UObject *local_100;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  UObject *local_e0;
  UObject *local_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  UObject *local_b8;
  UObject *local_b0;
  AActor *local_a8;
  undefined8 uStack_88;
  UObject *pUVar26;
  
  local_res18 = param_2;
  local_e0 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if ((local_e0 != (UObject *)0x0) && (this->CallMode != InvalidCallMode)) {
    pUVar12 = Z_Construct_UClass_AActor_NoRegister();
    pUVar18 = (UObject *)0x0;
    iVar19 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&local_e0->field_0x10 + 0x38) < iVar19) ||
       (local_d8 = local_e0,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&local_e0->field_0x10 + 0x30) + (longlong)iVar19 * 8) !=
       &pUVar12->_padding_)) {
      local_d8 = pUVar18;
    }
    EVar1 = this->CallMode;
    if (EVar1 == SingleActor) {
      local_a8 = (AActor *)0x0;
      local_b8 = local_e0;
      local_b0 = local_d8;
      pUVar13 = UObject::FindFunctionChecked
                          ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_b8);
      if (local_a8 != (AActor *)0x0) {
        UEnvQueryItemType_Actor::SetContextHelper(param_2,local_a8);
      }
    }
    else if (EVar1 == SingleLocation) {
      local_d0 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
      dStack_c8 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
      local_c0 = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
      pUVar13 = UObject::FindFunctionChecked
                          ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation
                          );
      (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_e0);
      dVar15 = local_d0;
      if ((__real_c7efffffe0000000 < local_d0) && (local_d0 < __real_47efffffe0000000)) {
        uVar32 = SUB84(dStack_c8,0);
        uVar16 = (ulonglong)dStack_c8 >> 0x20;
        if ((__real_c7efffffe0000000 < dStack_c8) &&
           (((dStack_c8 < __real_47efffffe0000000 && (__real_c7efffffe0000000 < local_c0)) &&
            (local_c0 < __real_47efffffe0000000)))) {
          pUVar12 = UEnvQueryItemType_Point::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          (param_2->ValueType).Class.field0_0x0.DebugPtr = pUVar12;
          param_2->NumValues = 1;
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&param_2->RawData,0x20,Default);
          pFVar14 = (param_2->RawData).AllocatorInstance.Data;
          auVar3._8_4_ = uVar32;
          auVar3._0_8_ = dVar15;
          auVar3._12_4_ = (int)uVar16;
          *(undefined1 (*) [16])pFVar14 = auVar3;
          *(undefined4 *)&pFVar14[0x10].field_0x0 = (undefined4)local_c0;
          *(undefined4 *)(pFVar14 + 0x14) = local_c0._4_4_;
          *(undefined4 *)(pFVar14 + 0x18) = 0;
          *(undefined4 *)(pFVar14 + 0x1c) = 0;
        }
      }
    }
    else {
      if (EVar1 == ActorSet) {
        local_148.Data = (FScriptContainerElement *)0x0;
        local_13c = 0;
        local_f0 = (void *)0x0;
        local_e8 = 0;
        local_100 = local_e0;
        local_f8 = local_d8;
        pUVar13 = UObject::FindFunctionChecked
                            ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_100);
        pvVar9 = local_f0;
        iVar19 = (int)local_e8;
        lVar25 = (longlong)(int)local_e8;
        local_140 = (int)local_e8;
        if ((((int)local_e8 != 0) || (local_13c != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_e8,local_13c,&local_148,(int)local_e8,&local_13c), iVar19 != 0
           )) {
          memcpy(local_148.Data,pvVar9,lVar25 << 3);
        }
        if (local_f0 != (void *)0x0) {
          FMemory::Free(local_f0);
        }
        local_128 = 0.0;
        if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
            ((FScriptContainerElement *)&local_128 < local_148.Data + (longlong)local_13c * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6.Data = local_148.Data;
        lVar25 = (longlong)(int)local_140;
        uVar24 = 0;
        uVar23 = local_130;
        if (local_140 != 0) {
          bVar11 = *(double *)local_148.Data != local_128;
          dVar15 = local_128;
          pUVar26 = pUVar18;
          pUVar28 = pUVar18;
          do {
            uVar23 = (uint)pUVar26;
            uVar24 = uVar23;
            do {
              pUVar18 = (UObject *)&pUVar18->field_0x1;
              uVar24 = uVar24 + 1;
              pUVar26 = (UObject *)(ulonglong)uVar24;
              if (lVar25 <= (longlong)pUVar18) break;
            } while (bVar11 == (*(double *)(FVar6.Data + (longlong)pUVar18 * 8) != dVar15));
            if (bVar11 != false) {
              uVar17 = (uint)pUVar28;
              if (uVar17 != uVar23) {
                memmove(FVar6.Data + (longlong)(int)uVar17 * 8,
                        FVar6.Data + (longlong)(int)uVar23 * 8,(longlong)(int)(uVar24 - uVar23) << 3
                       );
                dVar15 = local_128;
              }
              pUVar28 = (UObject *)(ulonglong)(uVar17 + (uVar24 - uVar23));
            }
            bVar11 = (bool)(bVar11 ^ 1);
          } while ((longlong)pUVar18 < lVar25);
          local_140 = (uint)pUVar28;
          FVar6.Data = local_148.Data;
          uVar24 = local_140;
          uVar23 = local_130;
          if (local_140 != 0) {
            pUVar12 = UEnvQueryItemType_Actor::StaticClass();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            pFVar8 = local_res18;
            (local_res18->ValueType).Class.field0_0x0.DebugPtr = pUVar12;
            local_res18->NumValues = local_140;
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      (&local_res18->RawData,local_140 * 8,Default);
            uVar16 = (ulonglong)(int)local_140;
            if ((longlong)(pFVar8->RawData).ArrayNum != uVar16 << 3) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContextData.RawData.Num() == sizeof(FWeakObjectPtr) * MultipleActors.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Actor.cpp"
                                  ,0x51,L"Failed to allocate the appropriate amount of memory");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar16 = (ulonglong)local_140;
            }
            pFVar30 = (FWeakObjectPtr *)(pFVar8->RawData).AllocatorInstance.Data;
            uVar22 = 0;
            uVar21 = uVar22;
            FVar6.Data = local_148.Data;
            uVar24 = local_140;
            uVar23 = local_130;
            if (0 < (int)uVar16) {
              do {
                uVar17 = (uint)uVar21;
                uVar24 = 0;
                if ((int)uVar17 < (int)uVar16) {
                  uVar24 = ~uVar17 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pUVar18 = *(UObject **)(local_148.Data + uVar22);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar18 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar18);
                }
                local_res10.ObjectIndex = 0;
                local_res10.ObjectSerialNumber = 0;
                local_res20 = pUVar18;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar18 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar18);
                }
                FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
                *pFVar30 = local_res10;
                uVar22 = uVar22 + 8;
                uVar16 = (ulonglong)local_140;
                pFVar30 = pFVar30 + 1;
                uVar21 = (ulonglong)(uVar17 + 1);
                FVar6.Data = local_148.Data;
                uVar24 = local_140;
                uVar23 = local_130;
              } while ((int)(uVar17 + 1) < (int)local_140);
            }
          }
        }
      }
      else {
        if (EVar1 != LocationSet) {
          return;
        }
        local_138.Data = (FScriptContainerElement *)0x0;
        local_12c = 0;
        local_110 = (void *)0x0;
        local_108 = 0;
        local_120 = local_e0;
        local_118 = local_d8;
        pUVar13 = UObject::FindFunctionChecked
                            ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet
                            );
        (**(code **)(this->_padding_ + 0x260))(this,pUVar13,&local_120);
        pvVar9 = local_110;
        iVar19 = (int)local_108;
        lVar25 = (longlong)(int)local_108;
        local_130 = (int)local_108;
        if ((((int)local_108 != 0) || (local_12c != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,(int)local_108,local_12c,&local_138,(int)local_108,&local_12c),
           iVar19 != 0)) {
          memcpy(local_138.Data,pvVar9,lVar25 * 0x18);
        }
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
        FVar6.Data = local_138.Data;
        dVar7 = __real_c7efffffe0000000;
        dVar15 = __real_47efffffe0000000;
        uVar24 = local_140;
        uVar23 = 0;
        if (local_130 != 0) {
          if ((((*(double *)local_138.Data <= __real_c7efffffe0000000) ||
               (__real_47efffffe0000000 <= *(double *)local_138.Data)) ||
              ((*(double *)(local_138.Data + 8) <= __real_c7efffffe0000000 ||
               ((__real_47efffffe0000000 <= *(double *)(local_138.Data + 8) ||
                (*(double *)(local_138.Data + 0x10) <= __real_c7efffffe0000000)))))) ||
             (__real_47efffffe0000000 <= *(double *)(local_138.Data + 0x10))) {
            bVar29 = 0;
          }
          else {
            bVar29 = 1;
          }
          lVar31 = (longlong)(int)local_130;
          lVar25 = 0;
          iVar19 = 0;
          do {
            iVar20 = iVar19 + 1;
            lVar25 = lVar25 + 1;
            if (lVar25 < lVar31) {
              if (3 < lVar31 - lVar25) {
                pFVar14 = FVar6.Data + lVar25 * 0x18 + 0x28;
                do {
                  if (((((*(double *)(pFVar14 + -0x28) <= dVar7) ||
                        (dVar15 <= *(double *)(pFVar14 + -0x28))) ||
                       (*(double *)(pFVar14 + -0x20) <= dVar7)) ||
                      ((dVar15 <= *(double *)(pFVar14 + -0x20) ||
                       (*(double *)(pFVar14 + -0x18) <= dVar7)))) ||
                     (dVar15 <= *(double *)(pFVar14 + -0x18))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                  if (bVar29 != bVar10) goto LAB_146f63934;
                  if (((*(double *)(pFVar14 + -0x10) <= dVar7) ||
                      (dVar15 <= *(double *)(pFVar14 + -0x10))) ||
                     ((*(double *)(pFVar14 + -8) <= dVar7 ||
                      (((dVar15 <= *(double *)(pFVar14 + -8) || (*(double *)pFVar14 <= dVar7)) ||
                       (dVar15 <= *(double *)pFVar14)))))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                  if (bVar29 != bVar10) {
                    lVar25 = lVar25 + 1;
                    iVar20 = iVar20 + 1;
                    goto LAB_146f63934;
                  }
                  if ((((*(double *)(pFVar14 + 8) <= dVar7) || (dVar15 <= *(double *)(pFVar14 + 8)))
                      || ((*(double *)(pFVar14 + 0x10) <= dVar7 ||
                          ((dVar15 <= *(double *)(pFVar14 + 0x10) ||
                           (*(double *)(pFVar14 + 0x18) <= dVar7)))))) ||
                     (dVar15 <= *(double *)(pFVar14 + 0x18))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                  if (bVar29 != bVar10) {
                    lVar25 = lVar25 + 2;
                    iVar20 = iVar20 + 2;
                    goto LAB_146f63934;
                  }
                  if (((((*(double *)(pFVar14 + 0x20) <= dVar7) ||
                        (dVar15 <= *(double *)(pFVar14 + 0x20))) ||
                       (*(double *)(pFVar14 + 0x28) <= dVar7)) ||
                      ((dVar15 <= *(double *)(pFVar14 + 0x28) ||
                       (*(double *)(pFVar14 + 0x30) <= dVar7)))) ||
                     (dVar15 <= *(double *)(pFVar14 + 0x30))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                  if (bVar29 != bVar10) {
                    lVar25 = lVar25 + 3;
                    iVar20 = iVar20 + 3;
                    goto LAB_146f63934;
                  }
                  iVar20 = iVar20 + 4;
                  lVar25 = lVar25 + 4;
                  pFVar14 = pFVar14 + 0x60;
                } while (lVar25 < lVar31 + -3);
              }
              if (lVar25 < lVar31) {
                pFVar14 = FVar6.Data + lVar25 * 0x18 + 0x10;
                do {
                  if (((*(double *)(pFVar14 + -0x10) <= dVar7) ||
                      (dVar15 <= *(double *)(pFVar14 + -0x10))) ||
                     ((*(double *)(pFVar14 + -8) <= dVar7 ||
                      (((dVar15 <= *(double *)(pFVar14 + -8) || (*(double *)pFVar14 <= dVar7)) ||
                       (dVar15 <= *(double *)pFVar14)))))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                  if (bVar29 != bVar10) break;
                  iVar20 = iVar20 + 1;
                  lVar25 = lVar25 + 1;
                  pFVar14 = pFVar14 + 0x18;
                } while (lVar25 < lVar31);
              }
            }
LAB_146f63934:
            if (bVar29 != 0) {
              iVar27 = (int)pUVar18;
              if (iVar27 != iVar19) {
                memmove(FVar6.Data + (longlong)iVar27 * 0x18,FVar6.Data + (longlong)iVar19 * 0x18,
                        (longlong)(iVar20 - iVar19) * 0x18);
              }
              pUVar18 = (UObject *)(ulonglong)(uint)(iVar27 + (iVar20 - iVar19));
            }
            bVar29 = bVar29 ^ 1;
            iVar19 = iVar20;
          } while (lVar25 < lVar31);
          local_130 = (uint)pUVar18;
          FVar6.Data = local_138.Data;
          uVar24 = local_140;
          uVar23 = local_130;
          if (local_130 != 0) {
            pUVar12 = UEnvQueryItemType_Point::StaticClass();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar12);
            }
            pFVar8 = local_res18;
            (local_res18->ValueType).Class.field0_0x0.DebugPtr = pUVar12;
            local_res18->NumValues = local_130;
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      (&local_res18->RawData,local_130 << 5,Default);
            uVar16 = (ulonglong)(int)local_130;
            if ((longlong)(pFVar8->RawData).ArrayNum != uVar16 << 5) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContextData.RawData.Num() == sizeof(FNavLocation) * MultiplePoints.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\Items\\EnvQueryItemType_Point.cpp"
                                  ,0x3b,L"Failed to allocate the appropriate amount of memory");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar16 = (ulonglong)local_130;
            }
            pFVar14 = (pFVar8->RawData).AllocatorInstance.Data;
            uVar22 = 0;
            uVar21 = uVar22;
            FVar6.Data = local_138.Data;
            uVar24 = local_140;
            uVar23 = local_130;
            if (0 < (int)uVar16) {
              do {
                uVar17 = (uint)uVar22;
                uVar24 = 0;
                if ((int)uVar17 < (int)uVar16) {
                  uVar24 = ~uVar17 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar22 = (ulonglong)(uVar17 + 1);
                uStack_88 = 0;
                uVar5 = *(undefined8 *)(local_138.Data + uVar21 + 8);
                uVar32 = *(undefined4 *)(local_138.Data + uVar21 + 0x10);
                uVar4 = *(undefined4 *)(local_138.Data + uVar21 + 0x10 + 4);
                *(undefined8 *)pFVar14 = *(undefined8 *)(local_138.Data + uVar21);
                *(undefined8 *)(pFVar14 + 8) = uVar5;
                *(undefined4 *)(pFVar14 + 0x10) = uVar32;
                *(undefined4 *)(pFVar14 + 0x14) = uVar4;
                *(undefined4 *)(pFVar14 + 0x18) = 0;
                *(undefined4 *)(pFVar14 + 0x1c) = 0;
                uVar16 = (ulonglong)local_130;
                pFVar14 = pFVar14 + 0x20;
                uVar21 = uVar21 + 0x18;
                FVar6.Data = local_138.Data;
                uVar24 = local_140;
                uVar23 = local_130;
              } while ((int)(uVar17 + 1) < (int)local_130);
            }
          }
        }
      }
      local_130 = uVar23;
      local_140 = uVar24;
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
    }
  }
  return;
}

// ProvideLocationsSet @ 146f64210

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
UEnvQueryContext_BlueprintBase::ProvideLocationsSet
          (UEnvQueryContext_BlueprintBase *this,UObject *param_1,AActor *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  UFunction *pUVar4;
  longlong lVar5;
  UObject *local_28;
  AActor *local_20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28 = param_1;
  local_20 = param_2;
  if (&local_18 != param_3) {
    uVar2 = param_3->ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar2;
    if (uVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,0,&local_18.AllocatorInstance,uVar2,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar2 * 0x18);
    }
  }
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_28);
  _Src_00.Data = local_18.AllocatorInstance.Data;
  if (param_3 != &local_18) {
    iVar3 = local_18.ArrayNum;
    lVar5 = (longlong)local_18.ArrayNum;
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_18.ArrayNum,*piVar1,&param_3->AllocatorInstance,local_18.ArrayNum,
                 piVar1);
      if (iVar3 != 0) {
        memcpy((param_3->AllocatorInstance).Data,_Src_00.Data,lVar5 * 0x18);
      }
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ProvideSingleActor @ 146f64360

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
UEnvQueryContext_BlueprintBase::ProvideSingleActor
          (UEnvQueryContext_BlueprintBase *this,UObject *param_1,AActor *param_2,AActor **param_3)

{
  UFunction *pUVar1;
  UObject *local_28;
  AActor *local_20;
  AActor *local_18;
  
  local_18 = *param_3;
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  *param_3 = local_18;
  return;
}

// ProvideSingleLocation @ 146f643c0

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
UEnvQueryContext_BlueprintBase::ProvideSingleLocation
          (UEnvQueryContext_BlueprintBase *this,UObject *param_1,AActor *param_2,
          TVector<double> *param_3)

{
  UFunction *pUVar1;
  UObject *local_38;
  AActor *local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_3->field0_0x0)._s_0.X;
  dStack_20 = (param_3->field0_0x0)._s_0.Y;
  local_18 = (param_3->field0_0x0)._s_0.Z;
  local_38 = param_1;
  local_30 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_38);
  (param_3->field0_0x0)._s_0.X = local_28;
  (param_3->field0_0x0)._s_0.Y = dStack_20;
  (param_3->field0_0x0)._s_0.Z = local_18;
  return;
}

// StaticRegisterNativesUEnvQueryContext_BlueprintBase @ 146f76c50

void __cdecl
UEnvQueryContext_BlueprintBase::StaticRegisterNativesUEnvQueryContext_BlueprintBase(void)

{
  return;
}

