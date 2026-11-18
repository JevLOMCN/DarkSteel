// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 7

// StaticClass @ 14cf2bd30

UClass * __cdecl AAROriginActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAROriginActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AROriginActor",
               &Z_Registration_Info_UClass_AAROriginActor.InnerSingleton,
               StaticRegisterNativesAAROriginActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAROriginActor>,
               InternalVTableHelperCtorCaller<AAROriginActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAROriginActor.InnerSingleton;
}

// AAROriginActor @ 14cf40350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAROriginActor * __thiscall
AAROriginActor::AAROriginActor(AAROriginActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AAROriginActor__6B_;
  return this;
}

// AAROriginActor @ 14cf40380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAROriginActor * __thiscall
AAROriginActor::AAROriginActor(AAROriginActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->field_0x32 = this->field_0x32 & 0xfd;
  this->field_0x5a = this->field_0x5a & 0xfe;
  this->field_0x5b = this->field_0x5b & 0xf7;
  *(undefined ***)this = &___7AAROriginActor__6B_;
  AActor::SetReplicatingMovement((AActor *)this,false);
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~AAROriginActor @ 14cf43ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AAROriginActor::~AAROriginActor(AAROriginActor *this)

{
  *(undefined ***)this = &___7AAROriginActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetOriginActor @ 14cf53180

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

AAROriginActor * __cdecl AAROriginActor::GetOriginActor(void)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  UEngine *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  AAROriginActor *pAVar8;
  AActor *pAVar9;
  AActor *pAVar10;
  FActorSpawnParameters *pFVar11;
  FString *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  UWorld *this;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  UClass *local_120;
  TActorIteratorBase<TActorIterator<AAROriginActor>_> local_118;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  pUVar5 = GEngine;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  this = (UWorld *)0x0;
  pFVar14 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  iVar3 = (GEngine->WorldList).Array.ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pUVar5->WorldList).Array.ArrayNum != iVar3) {
      local_128[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_128);
    }
    if (pFVar14 == pFVar1) break;
    cVar2 = **(char **)pFVar14;
    if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
      this = *(UWorld **)(*(char **)pFVar14 + 0x2c0);
    }
    pFVar14 = pFVar14 + 8;
  }
  if (this == (UWorld *)0x0) {
    pAVar10 = (AActor *)0x0;
  }
  else {
    pAVar10 = (AActor *)0x0;
    pUVar7 = StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    local_118.Flags = OnlyActiveLevels|SkipPendingKill;
    local_118.State.bIsSet = false;
    local_120 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FActorIteratorState::FActorIteratorState
              (&local_118.State.TypedValue,this,(TSubclassOf<AActor>)&local_120);
    local_118.State.bIsSet = true;
    do {
      TActorIteratorBase<TActorIterator<AAROriginActor>_>::operator++(&local_118);
      if ((local_118.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pAVar8 = (AAROriginActor *)(*pcVar4)();
        return pAVar8;
      }
      if (local_118.State.TypedValue.ReachedEnd != false) goto LAB_14cf53362;
      if ((local_118.State.bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pAVar8 = (AAROriginActor *)(*pcVar4)();
        return pAVar8;
      }
      pAVar9 = FActorIteratorState::GetActorChecked(&local_118.State.TypedValue);
      pAVar8 = CastChecked<AAROriginActor,AActor>(pAVar9);
    } while ((pAVar8 == (AAROriginActor *)0x0) || ((*(uint *)&pAVar8->field_0x8 >> 0x1e & 1) != 0));
    if ((local_118.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pAVar8 = (AAROriginActor *)(*pcVar4)();
      return pAVar8;
    }
    pAVar10 = FActorIteratorState::GetActorChecked(&local_118.State.TypedValue);
    pAVar10 = (AActor *)CastChecked<AAROriginActor,AActor>(pAVar10);
LAB_14cf53362:
    if (local_118.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_118.State.TypedValue.CurrentWorld,
                 local_118.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_118.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    if (pAVar10 == (AActor *)0x0) {
      pFVar11 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
      pUVar7 = StaticClass();
      pAVar10 = UWorld::SpawnActor(this,pUVar7,&UE::Math::TVector<double>::ZeroVector,
                                   &UE::Math::TRotator<double>::ZeroRotator,pFVar11);
      if (pAVar10 == (AActor *)0x0) {
        pAVar10 = (AActor *)0x0;
      }
      else {
        pUVar7 = StaticClass();
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(pAVar10->_padding_ + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          pFVar12 = GetTypeName<AAROriginActor>(&local_b8);
          pwVar15 = L"";
          if ((pFVar12->Data).ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
          pFVar12 = GetFullNameForCastLogError<AActor>(&local_a8,pAVar10);
          if ((pFVar12->Data).ArrayNum != 0) {
            pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar15,pwVar16);
        }
      }
      if (local_98._64_8_ != 0) {
        plVar13 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  return (AAROriginActor *)pAVar10;
}

// GetPrivateStaticClass @ 14cf53920

UClass * __cdecl AAROriginActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAROriginActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AROriginActor",
               &Z_Registration_Info_UClass_AAROriginActor.InnerSingleton,
               StaticRegisterNativesAAROriginActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AAROriginActor>,
               InternalVTableHelperCtorCaller<AAROriginActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAROriginActor.InnerSingleton;
}

// StaticRegisterNativesAAROriginActor @ 14cf60cf0

void __cdecl AAROriginActor::StaticRegisterNativesAAROriginActor(void)

{
  return;
}

