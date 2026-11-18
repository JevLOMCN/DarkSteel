// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 131

// SetValue<UBlackboardKeyType_Object> @ 146e7f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Object>
          (UBlackboardComponent *this,FKey param_1,UObject *param_2)

{
  longlong lVar1;
  int iVar2;
  UBlackboardKeyType *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FKey FVar7;
  uint uVar8;
  FBlackboardEntry *pFVar9;
  UClass *pUVar10;
  uchar *puVar11;
  UWorld *pUVar12;
  UBlackboardComponent *this_00;
  UBlackboardData *pUVar13;
  undefined6 extraout_var;
  UBlackboardKeyType_Object *pUVar14;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar15;
  UAISystemBase *pUVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  FName local_138;
  FBlackboardDataToComponentsIterator local_130;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar13 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar13 == (UBlackboardData *)0x0) ||
      (pFVar9 = UBlackboardData::GetKey(pUVar13,param_1), pFVar9 == (FBlackboardEntry *)0x0)) ||
     ((pFVar9->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar10 = Z_Construct_UClass_UBlackboardKeyType_Object_NoRegister();
  pUVar3 = (pFVar9->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar3->_padding_ != pUVar10) {
    return false;
  }
  lVar1 = pUVar3->bCreateKeyInstance * 4;
  puVar11 = GetKeyRawData(this,param_1);
  if (puVar11 + lVar1 == (uchar *)0x0) {
    return false;
  }
  pUVar14 = (UBlackboardKeyType_Object *)(pFVar9->KeyType).field0_0x0.DebugPtr;
  if ((*(byte *)((longlong)&pUVar14->_padding_ + 3) & 2) != 0) {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_148 = (ulonglong)param_1.Key, local_140 = (longlong)iVar2,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar14 = *(UBlackboardKeyType_Object **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  bVar5 = UBlackboardKeyType_Object::SetValue(pUVar14,puVar11 + lVar1,param_2);
  if (((!bVar5) ||
      (NotifyObservers(this,param_1),
      ((this->BlackboardAsset).field0_0x0.DebugPtr)->bHasSynchronizedKeys == 0)) ||
     (bVar5 = IsKeyInstanceSynced(this,param_1), !bVar5)) {
    return true;
  }
  pUVar12 = (UWorld *)this->_padding_;
  if (((pUVar12 != (UWorld *)0x0) ||
      (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar12 != (UWorld *)0x0)) &&
     (pUVar16 = (pUVar12->AISystem).field0_0x0.DebugPtr, pUVar16 != (UAISystemBase *)0x0)) {
    pUVar10 = UAISystem::StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar10->_padding_)) goto LAB_146e7f670;
  }
  pUVar16 = (UAISystemBase *)0x0;
LAB_146e7f670:
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (&local_130,
             (TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
              *)&pUVar16[3]._padding_,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar18 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
    do {
      uVar17 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar19 = (uint)uVar18;
      if ((int)uVar19 <= local_130.CurrentIteratorIndex) {
LAB_146e7f958:
        if (local_130.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_130.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_130.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_130.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar8 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar19) {
        uVar8 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar8 == 0) {
        local_140 = (ulonglong)(int)uVar19;
        local_148 = uVar17;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar19 = local_130.Iterators.ArrayNum;
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FVar15 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar15 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar15 + 0x10) + uVar17 * 0x18) == -1) goto LAB_146e7f958;
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar8 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar19) {
        uVar8 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar8 == 0) {
        local_140 = (ulonglong)(int)uVar19;
        local_148 = uVar18;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FVar15 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar15 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar15 + uVar18 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar15 + 0x10) + uVar18 * 0x18) *
                                     0x18 + 8));
      if ((this_00 != (UBlackboardComponent *)0x0) &&
         (bVar5 = ShouldSyncWithBlackboard(this,this_00), bVar5)) {
        pUVar13 = GetBlackboardAsset(this_00);
        if (pUVar13 == (UBlackboardData *)0x0) {
          local_138.ComparisonIndex.Value._2_2_ = 0xffff;
        }
        else {
          FVar7 = UBlackboardData::GetKeyID(pUVar13,&local_138);
          FVar7.Key = *(ushort *)CONCAT62(extraout_var,FVar7.Key);
          if (FVar7.Key != 0xffff) {
            pUVar14 = (UBlackboardKeyType_Object *)(pFVar9->KeyType).field0_0x0.DebugPtr;
            if ((*(byte *)((longlong)&pUVar14->_padding_ + 3) & 2) != 0) {
              iVar2 = (this_00->KeyInstances).ArrayNum;
              if ((iVar2 <= (int)(uint)FVar7.Key) &&
                 (local_148 = (ulonglong)FVar7.Key, local_140 = (longlong)iVar2,
                 bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              pUVar14 = *(UBlackboardKeyType_Object **)
                         ((this_00->KeyInstances).AllocatorInstance.Data + (ulonglong)FVar7.Key * 8)
              ;
            }
            puVar11 = GetKeyRawData(this_00,FVar7);
            UBlackboardKeyType_Object::SetValue(pUVar14,puVar11 + lVar1,param_2);
            NotifyObservers(this_00,FVar7);
          }
        }
      }
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar19 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar19 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_148 = uVar18, local_140 = (longlong)local_130.Iterators.ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FVar15 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar15 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar15 + uVar18 * 0x18));
      uVar17 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar18 = (ulonglong)local_130.Iterators.ArrayNum;
      uVar19 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar19 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar19 == 0) {
        local_148 = uVar17;
        local_140 = uVar18;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar18 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
      }
      FVar15 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar15 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar15 + 0x10) + uVar17 * 0x18) != -1) ||
            ((int)uVar18 + -1 <= local_130.CurrentIteratorIndex));
    local_130.CurrentIteratorIndex = local_130.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_130);
  } while( true );
}

// GetKeyRawData @ 146e8e1e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar * __thiscall UBlackboardComponent::GetKeyRawData(UBlackboardComponent *this,FKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (((this->ValueMemory).ArrayNum != 0) &&
     ((int)(uint)param_1.Key < (this->ValueOffsets).ArrayNum)) {
    if ((this->ValueOffsets).ArrayNum <= (int)(uint)param_1.Key) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar3 = (uchar *)(*pcVar1)();
        return puVar3;
      }
    }
    return (uchar *)((this->ValueMemory).AllocatorInstance.Data +
                    *(ushort *)
                     ((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)param_1.Key * 2));
  }
  return (uchar *)0x0;
}

// StaticClass @ 146eac790

UClass * __cdecl UBlackboardComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardComponent",
               &Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton,
               StaticRegisterNativesUBlackboardComponent,0x1c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardComponent>,
               InternalVTableHelperCtorCaller<UBlackboardComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton;
}

// GetValue<UBlackboardKeyType_Bool> @ 146eb4c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  bool bVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    bVar1 = GetValue<UBlackboardKeyType_Bool>(this,local_res8);
    return bVar1;
  }
  bVar1 = GetValue<UBlackboardKeyType_Bool>(this,(FKey)0xffff);
  return bVar1;
}

// GetValue<UBlackboardKeyType_Bool> @ 146eb4c80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(UBlackboardComponent *this,FKey param_1)

{
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  uchar *puVar8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar6 = UBlackboardData::GetKey(this_00,param_1), pFVar6 != (FBlackboardEntry *)0x0)) &&
      (pUVar1 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar1 != (UBlackboardKeyType *)0x0)) &&
     (pUVar2 = (UClass *)pUVar1->_padding_, pUVar7 = UBlackboardKeyType_Bool::StaticClass(),
     pUVar2 == pUVar7)) {
    if (((pUVar1->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    puVar8 = GetKeyRawData(this,param_1);
    if (puVar8 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4)
        != (uchar *)0x0) {
      return puVar8[-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4
                   ] != '\0';
    }
    return false;
  }
  return false;
}

// GetValue<UBlackboardKeyType_Class> @ 146eb4ed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  UClass *pUVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    pUVar1 = GetValue<UBlackboardKeyType_Class>(this,local_res8);
    return pUVar1;
  }
  pUVar1 = GetValue<UBlackboardKeyType_Class>(this,(FKey)0xffff);
  return pUVar1;
}

// GetValue<UBlackboardKeyType_Class> @ 146eb4f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  code *pcVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  uchar *puVar8;
  FWeakObjectPtr local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar5 = UBlackboardData::GetKey(this_00,param_1), pFVar5 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar5->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar7 = (UClass *)pUVar2->_padding_, pUVar6 = UBlackboardKeyType_Class::StaticClass(),
     pUVar7 == pUVar6)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UClass *)(*pcVar3)();
      return pUVar7;
    }
    puVar8 = GetKeyRawData(this,param_1);
    if ((FWeakObjectPtr *)
        (puVar8 + (-(uint)(((pFVar5->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4)
        ) != (FWeakObjectPtr *)0x0) {
      local_res8 = *(FWeakObjectPtr *)
                    (puVar8 + (-(uint)(((pFVar5->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance
                                      != '\0') & 4));
      pUVar7 = (UClass *)FWeakObjectPtr::Get(&local_res8);
      return pUVar7;
    }
  }
  return (UClass *)0x0;
}

// GetValue<UBlackboardKeyType_Enum> @ 146eb5160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  uchar uVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    uVar1 = GetValue<UBlackboardKeyType_Enum>(this,local_res8);
    return uVar1;
  }
  uVar1 = GetValue<UBlackboardKeyType_Enum>(this,(FKey)0xffff);
  return uVar1;
}

// GetValue<UBlackboardKeyType_Enum> @ 146eb51b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  uchar uVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  uchar *puVar9;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar7 = UBlackboardData::GetKey(this_00,param_1), pFVar7 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar8 = UBlackboardKeyType_Enum::StaticClass(),
     pUVar3 == pUVar8)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    puVar9 = GetKeyRawData(this,param_1);
    if (puVar9 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4)
        != (uchar *)0x0) {
      return puVar9[-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4
                   ];
    }
    return '\0';
  }
  return '\0';
}

// GetValue<UBlackboardKeyType_Float> @ 146eb53f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  float fVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    fVar1 = GetValue<UBlackboardKeyType_Float>(this,local_res8);
    return fVar1;
  }
  fVar1 = GetValue<UBlackboardKeyType_Float>(this,(FKey)0xffff);
  return fVar1;
}

// GetValue<UBlackboardKeyType_Float> @ 146eb5440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  uchar *puVar8;
  float fVar9;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar6 = UBlackboardData::GetKey(this_00,param_1), pFVar6 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar7 = UBlackboardKeyType_Float::StaticClass(),
     pUVar3 == pUVar7)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      fVar9 = (float)(*pcVar4)();
      return fVar9;
    }
    puVar8 = GetKeyRawData(this,param_1);
    if ((float *)(puVar8 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                   '\0') & 4)) != (float *)0x0) {
      return *(float *)(puVar8 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->
                                          bCreateKeyInstance != '\0') & 4));
    }
  }
  return 0.0;
}

// GetValue<UBlackboardKeyType_Int> @ 146eb5680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  int iVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    iVar1 = GetValue<UBlackboardKeyType_Int>(this,local_res8);
    return iVar1;
  }
  iVar1 = GetValue<UBlackboardKeyType_Int>(this,(FKey)0xffff);
  return iVar1;
}

// GetValue<UBlackboardKeyType_Int> @ 146eb56d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  uchar *puVar9;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar7 = UBlackboardData::GetKey(this_00,param_1), pFVar7 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar8 = UBlackboardKeyType_Int::StaticClass(),
     pUVar3 == pUVar8)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    puVar9 = GetKeyRawData(this,param_1);
    if ((int *)(puVar9 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                 '\0') & 4)) != (int *)0x0) {
      return *(int *)(puVar9 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance
                                       != '\0') & 4));
    }
  }
  return 0;
}

// GetValue<UBlackboardKeyType_Name> @ 146eb58a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Name>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  EKeyLookupMode in_R8D;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,in_R8D);
  }
  GetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)param_1);
  return (FName)param_1;
}

// GetValue<UBlackboardKeyType_Name> @ 146eb5900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Name>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  FName FVar8;
  uchar *puVar9;
  undefined6 in_register_00000012;
  FName FVar10;
  FKey in_R8W;
  
  FVar10._2_6_ = in_register_00000012;
  FVar10.ComparisonIndex.Value._0_2_ = param_1.Key;
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  FVar8 = UBlackboardKeyType_Name::InvalidValue;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar6 = UBlackboardData::GetKey(this_00,in_R8W),
       FVar8 = UBlackboardKeyType_Name::InvalidValue, pFVar6 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar7 = UBlackboardKeyType_Name::StaticClass(),
     FVar8 = UBlackboardKeyType_Name::InvalidValue, pUVar3 == pUVar7)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)in_R8W.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      FVar8 = (FName)(*pcVar4)();
      return FVar8;
    }
    puVar9 = GetKeyRawData(this,in_R8W);
    FVar8 = UBlackboardKeyType_Name::InvalidValue;
    if ((FName *)(puVar9 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                   '\0') & 4)) != (FName *)0x0) {
      FVar8 = *(FName *)(puVar9 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->
                                           bCreateKeyInstance != '\0') & 4));
    }
  }
  *(FName *)FVar10 = FVar8;
  return FVar10;
}

// GetValue<UBlackboardKeyType_Object> @ 146eb5b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  UObject *pUVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    pUVar1 = GetValue<UBlackboardKeyType_Object>(this,local_res8);
    return pUVar1;
  }
  pUVar1 = GetValue<UBlackboardKeyType_Object>(this,(FKey)0xffff);
  return pUVar1;
}

// GetValue<UBlackboardKeyType_Object> @ 146eb5ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(UBlackboardComponent *this,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  uchar *puVar9;
  FWeakObjectPtr local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar6 = UBlackboardData::GetKey(this_00,param_1), pFVar6 != (FBlackboardEntry *)0x0)) &&
      (pUVar2 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar7 = UBlackboardKeyType_Object::StaticClass(),
     pUVar3 == pUVar7)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UObject *)(*pcVar4)();
      return pUVar8;
    }
    puVar9 = GetKeyRawData(this,param_1);
    if ((FWeakObjectPtr *)
        (puVar9 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4)
        ) != (FWeakObjectPtr *)0x0) {
      local_res8 = *(FWeakObjectPtr *)
                    (puVar9 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance
                                      != '\0') & 4));
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      return pUVar8;
    }
  }
  return (UObject *)0x0;
}

// GetValue<UBlackboardKeyType_Rotator> @ 146eb5d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>
          (UBlackboardComponent *this,TRotator<double> *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_Rotator>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Rotator> @ 146eb5de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>
          (UBlackboardComponent *this,TRotator<double> *__return_storage_ptr__,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBlackboardEntry *pFVar6;
  UClass *pUVar7;
  TRotator<double> *pTVar8;
  uchar *puVar9;
  double dVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  local_48 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._0_4_;
  uStack_44 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._4_4_;
  uStack_40 = UBlackboardKeyType_Rotator::InvalidValue.Yaw._0_4_;
  uStack_3c = UBlackboardKeyType_Rotator::InvalidValue.Yaw._4_4_;
  dVar10 = UBlackboardKeyType_Rotator::InvalidValue.Roll;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar6 = UBlackboardData::GetKey(this_00,param_1),
       local_48 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._0_4_,
       uStack_44 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._4_4_,
       uStack_40 = UBlackboardKeyType_Rotator::InvalidValue.Yaw._0_4_,
       uStack_3c = UBlackboardKeyType_Rotator::InvalidValue.Yaw._4_4_,
       dVar10 = UBlackboardKeyType_Rotator::InvalidValue.Roll, pFVar6 != (FBlackboardEntry *)0x0))
      && (pUVar2 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) &&
     (pUVar3 = (UClass *)pUVar2->_padding_, pUVar7 = UBlackboardKeyType_Rotator::StaticClass(),
     local_48 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._0_4_,
     uStack_44 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._4_4_,
     uStack_40 = UBlackboardKeyType_Rotator::InvalidValue.Yaw._0_4_,
     uStack_3c = UBlackboardKeyType_Rotator::InvalidValue.Yaw._4_4_,
     dVar10 = UBlackboardKeyType_Rotator::InvalidValue.Roll, pUVar3 == pUVar7)) {
    if (((pUVar2->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TRotator<double> *)(*pcVar4)();
      return pTVar8;
    }
    puVar9 = GetKeyRawData(this,param_1);
    puVar9 = puVar9 + (-(uint)(((pFVar6->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0')
                      & 4);
    local_48 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._0_4_;
    uStack_44 = UBlackboardKeyType_Rotator::InvalidValue.Pitch._4_4_;
    uStack_40 = UBlackboardKeyType_Rotator::InvalidValue.Yaw._0_4_;
    uStack_3c = UBlackboardKeyType_Rotator::InvalidValue.Yaw._4_4_;
    dVar10 = UBlackboardKeyType_Rotator::InvalidValue.Roll;
    if (puVar9 != (uchar *)0x0) {
      local_48 = (undefined4)*(undefined8 *)puVar9;
      uStack_44 = (undefined4)((ulonglong)*(undefined8 *)puVar9 >> 0x20);
      uStack_40 = (undefined4)*(undefined8 *)(puVar9 + 8);
      uStack_3c = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 8) >> 0x20);
      dVar10 = *(double *)(puVar9 + 0x10);
    }
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = local_48;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = uStack_44;
  *(undefined4 *)&__return_storage_ptr__->Yaw = uStack_40;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = uStack_3c;
  __return_storage_ptr__->Roll = dVar10;
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_String> @ 146eb6030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_String>
          (UBlackboardComponent *this,FString *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_String>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_String> @ 146eb6090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_String>
          (UBlackboardComponent *this,FString *__return_storage_ptr__,FKey param_1)

{
  int *piVar1;
  undefined1 uVar2;
  UBlackboardData *this_00;
  void *_Src;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  FBlackboardEntry *pFVar7;
  UClass *pUVar8;
  FString *pFVar9;
  uchar *puVar10;
  longlong lVar11;
  UBlackboardKeyType *pUVar12;
  FString local_38;
  FString local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((this_00 != (UBlackboardData *)0x0) &&
      (pFVar7 = UBlackboardData::GetKey(this_00,param_1), pFVar7 != (FBlackboardEntry *)0x0)) &&
     ((pFVar7->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
    pUVar8 = UBlackboardKeyType_String::StaticClass();
    pUVar12 = (pFVar7->KeyType).field0_0x0.DebugPtr;
    if ((UClass *)pUVar12->_padding_ == pUVar8) {
      if (pUVar12->bCreateKeyInstance != '\0') {
        if (((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar3)();
          return pFVar9;
        }
        pUVar12 = *(UBlackboardKeyType **)
                   ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
      }
      puVar10 = GetKeyRawData(this,param_1);
      FVar4 = UBlackboardKeyType_String::InvalidValue.Data.AllocatorInstance;
      if (puVar10 + (-(uint)(((pFVar7->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &
                    4) != (uchar *)0x0) {
        local_38.Data.ArrayNum = (int)pUVar12[1]._padding_;
        lVar11 = (longlong)local_38.Data.ArrayNum;
        _Src = (void *)pUVar12[1]._padding_;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_38.Data.ArrayNum == 0) {
          local_38.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,
                     local_38.Data.ArrayNum,&local_38.Data.ArrayMax);
          memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
        }
        ::FString::FString(__return_storage_ptr__,&local_38);
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      lVar11 = (longlong)UBlackboardKeyType_String::InvalidValue.Data.ArrayNum;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = UBlackboardKeyType_String::InvalidValue.Data.ArrayNum;
      if (UBlackboardKeyType_String::InvalidValue.Data.ArrayNum == 0) {
        local_28.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,UBlackboardKeyType_String::InvalidValue.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_28,
                   UBlackboardKeyType_String::InvalidValue.Data.ArrayNum,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,FVar4.Data,lVar11 * 2);
      }
      ::FString::FString(__return_storage_ptr__,&local_28);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = UBlackboardKeyType_String::InvalidValue.Data.ArrayNum;
  FVar4 = UBlackboardKeyType_String::InvalidValue.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar11 = (longlong)UBlackboardKeyType_String::InvalidValue.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = UBlackboardKeyType_String::InvalidValue.Data.ArrayNum;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)__return_storage_ptr__,iVar5,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar4.Data,lVar11 * 2);
  }
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Struct> @ 146eb62e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Struct>
          (UBlackboardComponent *this,FConstStructView *__return_storage_ptr__,FKey param_1)

{
  undefined1 uVar1;
  UBlackboardData *this_00;
  code *pcVar2;
  bool bVar3;
  FBlackboardEntry *pFVar4;
  UClass *pUVar5;
  FConstStructView *pFVar6;
  uchar *puVar7;
  UBlackboardKeyType *pUVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    pFVar4 = UBlackboardData::GetKey(this_00,param_1);
    if ((pFVar4 != (FBlackboardEntry *)0x0) &&
       ((pFVar4->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
      pUVar5 = UBlackboardKeyType_Struct::StaticClass();
      pUVar8 = (pFVar4->KeyType).field0_0x0.DebugPtr;
      if ((UClass *)pUVar8->_padding_ == pUVar5) {
        if (pUVar8->bCreateKeyInstance != '\0') {
          if ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FConstStructView *)(*pcVar2)();
              return pFVar6;
            }
          }
          pUVar8 = *(UBlackboardKeyType **)
                    ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
        }
        puVar7 = GetKeyRawData(this,param_1);
        puVar7 = puVar7 + (-(uint)(((pFVar4->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance !=
                                  '\0') & 4);
        if (puVar7 == (uchar *)0x0) {
          local_18 = UBlackboardKeyType_Struct::InvalidValue.ScriptStruct._0_4_;
          uStack_14 = UBlackboardKeyType_Struct::InvalidValue.ScriptStruct._4_4_;
          puVar7 = UBlackboardKeyType_Struct::InvalidValue.StructMemory;
          local_28 = local_18;
          uStack_24 = uStack_14;
        }
        else if (pUVar8->bIsInstanced == 0) {
          local_28 = (undefined4)pUVar8[1]._padding_;
          uStack_24 = (undefined4)((ulonglong)pUVar8[1]._padding_ >> 0x20);
        }
        else {
          puVar7 = (uchar *)pUVar8[1]._padding_;
          local_28 = (undefined4)pUVar8[1]._padding_;
          uStack_24 = (undefined4)((ulonglong)pUVar8[1]._padding_ >> 0x20);
        }
        goto LAB_146eb6412;
      }
    }
  }
  local_28 = UBlackboardKeyType_Struct::InvalidValue.ScriptStruct._0_4_;
  uStack_24 = UBlackboardKeyType_Struct::InvalidValue.ScriptStruct._4_4_;
  puVar7 = UBlackboardKeyType_Struct::InvalidValue.StructMemory;
LAB_146eb6412:
  *(undefined4 *)&__return_storage_ptr__->ScriptStruct = local_28;
  *(undefined4 *)((longlong)&__return_storage_ptr__->ScriptStruct + 4) = uStack_24;
  __return_storage_ptr__->StructMemory = puVar7;
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Vector> @ 146eb6530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
          (UBlackboardComponent *this,TVector<double> *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_Vector>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// GetValue<UBlackboardKeyType_Vector> @ 146eb6590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
          (UBlackboardComponent *this,TVector<double> *__return_storage_ptr__,FKey param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 uVar3;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar4;
  UClass *pUVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  FBlackboardEntry *pFVar10;
  UClass *pUVar11;
  TVector<double> *pTVar12;
  uchar *puVar13;
  double *pdVar14;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       (pFVar10 = UBlackboardData::GetKey(this_00,param_1), pFVar10 != (FBlackboardEntry *)0x0)) &&
      (pUVar4 = (pFVar10->KeyType).field0_0x0.DebugPtr, pUVar4 != (UBlackboardKeyType *)0x0)) &&
     (pUVar5 = (UClass *)pUVar4->_padding_, pUVar11 = UBlackboardKeyType_Vector::StaticClass(),
     pUVar5 == pUVar11)) {
    if (((pUVar4->bCreateKeyInstance != '\0') &&
        ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar6)();
      return pTVar12;
    }
    puVar13 = GetKeyRawData(this,param_1);
    pdVar1 = (double *)
             (puVar13 +
             (-(uint)(((pFVar10->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') & 4));
    if (pdVar1 == (double *)0x0) {
      pdVar14 = &local_30;
      local_30 = UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.X;
      dStack_28 = UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.Y;
      local_20 = UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.Z;
    }
    else {
      pdVar14 = &local_48;
      local_48 = *pdVar1;
      dStack_40 = pdVar1[1];
      local_38 = pdVar1[2];
    }
    dVar7 = pdVar14[1];
    dVar2 = pdVar14[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar14;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    return __return_storage_ptr__;
  }
  uVar8 = UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UBlackboardKeyType_Vector::InvalidValue.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// SetValue<UBlackboardKeyType_Bool> @ 146ebfe20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>
          (UBlackboardComponent *this,FName *param_1,bool param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Bool>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Bool> @ 146ebfe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>
          (UBlackboardComponent *this,FKey param_1,bool param_2)

{
  longlong lVar1;
  uchar uVar2;
  int iVar3;
  UBlackboardData *pUVar4;
  UBlackboardKeyType *pUVar5;
  code *pcVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar4 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar4,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Bool::StaticClass();
  pUVar5 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar5->_padding_ != pUVar13) {
    return false;
  }
  lVar1 = pUVar5->bCreateKeyInstance * 4;
  puVar14 = GetKeyRawData(this,param_1);
  puVar14 = puVar14 + lVar1;
  if (puVar14 == (uchar *)0x0) {
    return false;
  }
  if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
      (iVar3 = (this->KeyInstances).ArrayNum, iVar3 <= (int)(uint)param_1.Key)) &&
     (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar3,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar2 = *puVar14;
  *puVar14 = param_2;
  if ((bool)uVar2 == param_2) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar4->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar4 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar4,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec0009;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec0009:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_120.CurrentIteratorIndex) {
LAB_146ec02c0:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_120.Iterators.ArrayNum;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec02c0;
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar4 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar4,(FName *)&local_128,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar3 = (this_00->KeyInstances).ArrayNum, iVar3 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar3,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          puVar14[lVar1] = param_2;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_138 = uVar19, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_138 = uVar18;
        local_130 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// SetValue<UBlackboardKeyType_Class> @ 146ec0320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Class>
          (UBlackboardComponent *this,FName *param_1,UClass *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Class>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Class> @ 146ec0380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Class>
          (UBlackboardComponent *this,FKey param_1,UClass *param_2)

{
  longlong lVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UBlackboardKeyType *pUVar4;
  code *pcVar5;
  FKey FVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  FBlackboardEntry *pFVar11;
  UClass *pUVar12;
  uchar *puVar13;
  FBlackboardEntry *pFVar14;
  UWorld *pUVar15;
  UBlackboardComponent *this_00;
  UBlackboardKeyType_Class *pUVar16;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  FKey local_138;
  FBlackboardDataToComponentsIterator local_130;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar3 == (UBlackboardData *)0x0) ||
      (pFVar11 = UBlackboardData::GetKey(pUVar3,param_1), pFVar11 == (FBlackboardEntry *)0x0)) ||
     ((pFVar11->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar12 = UBlackboardKeyType_Class::StaticClass();
  pUVar4 = (pFVar11->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar4->_padding_ != pUVar12) {
    return false;
  }
  lVar1 = pUVar4->bCreateKeyInstance * 4;
  puVar13 = GetKeyRawData(this,param_1);
  if (puVar13 + lVar1 == (uchar *)0x0) {
    return false;
  }
  pUVar16 = (UBlackboardKeyType_Class *)(pFVar11->KeyType).field0_0x0.DebugPtr;
  if ((*(byte *)((longlong)&pUVar16->_padding_ + 3) & 2) != 0) {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_148 = (ulonglong)param_1.Key, local_140 = (longlong)iVar2,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pUVar16 = *(UBlackboardKeyType_Class **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  bVar7 = UBlackboardKeyType_Class::SetValue(pUVar16,puVar13 + lVar1,param_2);
  if (!bVar7) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar3 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar14 = UBlackboardData::GetKey(pUVar3,param_1);
  bVar9 = 0;
  if (pFVar14 != (FBlackboardEntry *)0x0) {
    bVar9 = pFVar14->bInstanceSynced;
  }
  if (bVar9 == 0) {
    return true;
  }
  pUVar15 = (UWorld *)this->_padding_;
  if (((pUVar15 != (UWorld *)0x0) ||
      (pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar15 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar15->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar12 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar12->_padding_)) goto LAB_146ec0511;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec0511:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_130,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_130.CurrentIteratorIndex) {
LAB_146ec07e0:
        if (local_130.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_130.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_130.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_130.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar10 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar10 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar10 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar18;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_130.Iterators.ArrayNum;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec07e0;
      uVar19 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar10 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar10 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar10 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar7 = ShouldSyncWithBlackboard(this,this_00), bVar7)) &&
         (pUVar3 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar3 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar3,(FName *)&local_138,(EKeyLookupMode)pFVar11);
        FVar6.Key = local_138.Key;
        uVar19 = (ulonglong)local_138.Key;
        if (local_138.Key != 0xffff) {
          pUVar16 = (UBlackboardKeyType_Class *)(pFVar11->KeyType).field0_0x0.DebugPtr;
          if ((*(byte *)((longlong)&pUVar16->_padding_ + 3) & 2) != 0) {
            iVar2 = (this_00->KeyInstances).ArrayNum;
            if ((iVar2 <= (int)(uint)local_138.Key) &&
               (local_148 = uVar19, local_140 = (longlong)iVar2,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            pUVar16 = *(UBlackboardKeyType_Class **)
                       ((this_00->KeyInstances).AllocatorInstance.Data + uVar19 * 8);
          }
          puVar13 = GetKeyRawData(this_00,FVar6);
          UBlackboardKeyType_Class::SetValue(pUVar16,puVar13 + lVar1,param_2);
          NotifyObservers(this_00,FVar6);
        }
      }
      uVar19 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_148 = uVar19, local_140 = (longlong)local_130.Iterators.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_130.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_148 = uVar18;
        local_140 = uVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar19 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_130.CurrentIteratorIndex));
    local_130.CurrentIteratorIndex = local_130.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_130);
  } while( true );
}

// SetValue<UBlackboardKeyType_Enum> @ 146ec0830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>
          (UBlackboardComponent *this,FName *param_1,uchar param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Enum>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Enum> @ 146ec0890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>
          (UBlackboardComponent *this,FKey param_1,uchar param_2)

{
  longlong lVar1;
  uchar uVar2;
  int iVar3;
  UBlackboardData *pUVar4;
  UBlackboardKeyType *pUVar5;
  code *pcVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar4 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar4,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Enum::StaticClass();
  pUVar5 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar5->_padding_ != pUVar13) {
    return false;
  }
  lVar1 = pUVar5->bCreateKeyInstance * 4;
  puVar14 = GetKeyRawData(this,param_1);
  puVar14 = puVar14 + lVar1;
  if (puVar14 == (uchar *)0x0) {
    return false;
  }
  if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
      (iVar3 = (this->KeyInstances).ArrayNum, iVar3 <= (int)(uint)param_1.Key)) &&
     (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar3,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar2 = *puVar14;
  *puVar14 = param_2;
  if (uVar2 == param_2) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar4->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar4 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar4,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec0a19;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec0a19:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_120.CurrentIteratorIndex) {
LAB_146ec0cd0:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_120.Iterators.ArrayNum;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec0cd0;
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar4 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar4,(FName *)&local_128,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar3 = (this_00->KeyInstances).ArrayNum, iVar3 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar3,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          puVar14[lVar1] = param_2;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_138 = uVar19, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_138 = uVar18;
        local_130 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// SetValue<UBlackboardKeyType_Float> @ 146ec0d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Float>
          (UBlackboardComponent *this,FName *param_1,float param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8 [4];
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8[0].ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Float>(this,local_res8[0].ComparisonIndex.Value._0_2_,param_2)
  ;
  return bVar1;
}

// SetValue<UBlackboardKeyType_Float> @ 146ec0d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Float>
          (UBlackboardComponent *this,FKey param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  UBlackboardData *pUVar4;
  UBlackboardKeyType *pUVar5;
  code *pcVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  FKey local_138;
  FBlackboardDataToComponentsIterator local_130;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar4 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar4,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Float::StaticClass();
  pUVar5 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar5->_padding_ != pUVar13) {
    return false;
  }
  uVar21 = pUVar5->bCreateKeyInstance;
  puVar14 = GetKeyRawData(this,param_1);
  pfVar1 = (float *)(puVar14 + uVar21 * 4);
  if (pfVar1 == (float *)0x0) {
    return false;
  }
  if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
      (iVar3 = (this->KeyInstances).ArrayNum, iVar3 <= (int)(uint)param_1.Key)) &&
     (local_148 = (ulonglong)param_1.Key, local_140 = (longlong)iVar3,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  fVar2 = *pfVar1;
  *pfVar1 = param_2;
  if (fVar2 == param_2) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar4->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar4 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar4,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec0f15;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec0f15:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_130,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_130.CurrentIteratorIndex) {
LAB_146ec11d2:
        if (local_130.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_130.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_130.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_130.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_130.Iterators.ArrayNum;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec11d2;
      uVar19 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar4 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar4,(FName *)&local_138,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_138.Key;
        if (local_138.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar3 = (this_00->KeyInstances).ArrayNum, iVar3 <= (int)(uint)local_138.Key)) &&
             (local_148 = (ulonglong)local_138.Key, local_140 = (longlong)iVar3,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          *(float *)(puVar14 + uVar21 * 4) = param_2;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar19 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_148 = uVar19, local_140 = (longlong)local_130.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_130.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_148 = uVar18;
        local_140 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar19 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_130.CurrentIteratorIndex));
    local_130.CurrentIteratorIndex = local_130.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_130);
  } while( true );
}

// SetValue<UBlackboardKeyType_Int> @ 146ec1230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Int>
          (UBlackboardComponent *this,FName *param_1,int param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Int>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Int> @ 146ec1290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Int>
          (UBlackboardComponent *this,FKey param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  UBlackboardData *pUVar4;
  UBlackboardKeyType *pUVar5;
  code *pcVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar4 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar4,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Int::StaticClass();
  pUVar5 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar5->_padding_ != pUVar13) {
    return false;
  }
  lVar2 = pUVar5->bCreateKeyInstance * 4;
  puVar14 = GetKeyRawData(this,param_1);
  piVar1 = (int *)(puVar14 + lVar2);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
      (iVar3 = (this->KeyInstances).ArrayNum, iVar3 <= (int)(uint)param_1.Key)) &&
     (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar3,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar3 = *piVar1;
  *piVar1 = param_2;
  if (iVar3 == param_2) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar4->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar4 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar4,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec1417;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec1417:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_120.CurrentIteratorIndex) {
LAB_146ec16d0:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar18;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_120.Iterators.ArrayNum;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec16d0;
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar20) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar20;
        local_138 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar4 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar4,(FName *)&local_128,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar3 = (this_00->KeyInstances).ArrayNum, iVar3 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar3,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          *(int *)(puVar14 + lVar2) = param_2;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_138 = uVar19, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar20 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_138 = uVar18;
        local_130 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar19 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// SetValue<UBlackboardKeyType_Name> @ 146ec1730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Name>
          (UBlackboardComponent *this,FName *param_1,FName param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Name>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Name> @ 146ec1790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Name>
          (UBlackboardComponent *this,FKey param_1,FName param_2)

{
  FName *pFVar1;
  longlong lVar2;
  int iVar3;
  UBlackboardData *pUVar4;
  UBlackboardKeyType *pUVar5;
  FName FVar6;
  code *pcVar7;
  FKey FVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  FBlackboardEntry *pFVar13;
  UClass *pUVar14;
  uchar *puVar15;
  FBlackboardEntry *pFVar16;
  UWorld *pUVar17;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar18;
  UAISystem *this_01;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar4 == (UBlackboardData *)0x0) ||
      (pFVar13 = UBlackboardData::GetKey(pUVar4,param_1), pFVar13 == (FBlackboardEntry *)0x0)) ||
     ((pFVar13->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar14 = UBlackboardKeyType_Name::StaticClass();
  pUVar5 = (pFVar13->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar5->_padding_ != pUVar14) {
    return false;
  }
  lVar2 = pUVar5->bCreateKeyInstance * 4;
  puVar15 = GetKeyRawData(this,param_1);
  pFVar1 = (FName *)(puVar15 + lVar2);
  if (pFVar1 == (FName *)0x0) {
    return false;
  }
  if (((((pFVar13->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
      (iVar3 = (this->KeyInstances).ArrayNum, iVar3 <= (int)(uint)param_1.Key)) &&
     (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  FVar6 = *pFVar1;
  *pFVar1 = param_2;
  if (FVar6 == param_2) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar4 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar4->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar4 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar16 = UBlackboardData::GetKey(pUVar4,param_1);
  bVar11 = 0;
  if (pFVar16 != (FBlackboardEntry *)0x0) {
    bVar11 = pFVar16->bInstanceSynced;
  }
  if (bVar11 == 0) {
    return true;
  }
  pUVar17 = (UWorld *)this->_padding_;
  if (((pUVar17 != (UWorld *)0x0) ||
      (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar17 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar17->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar14 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar3 = (int)pUVar14->_padding_;
    if ((iVar3 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar14->_padding_)) goto LAB_146ec1918;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec1918:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = (uint)uVar20;
      if ((int)uVar21 <= local_120.CurrentIteratorIndex) {
LAB_146ec1bd0:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar12 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar12 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar12 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar19;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar21 = local_120.Iterators.ArrayNum;
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) == -1) goto LAB_146ec1bd0;
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar12 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar12 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar12 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar20;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar18 + uVar20 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar20 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar9 = ShouldSyncWithBlackboard(this,this_00), bVar9)) &&
         (pUVar4 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar4,(FName *)&local_128,(EKeyLookupMode)pFVar13);
        FVar8.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar13->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar3 = (this_00->KeyInstances).ArrayNum, iVar3 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar3,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          puVar15 = GetKeyRawData(this_00,FVar8);
          *(FName *)(puVar15 + lVar2) = param_2;
          NotifyObservers(this_00,FVar8);
        }
      }
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_138 = uVar20, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar18 + uVar20 * 0x18));
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar21 == 0) {
        local_138 = uVar19;
        local_130 = uVar20;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) != -1) ||
            ((int)uVar20 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// SetValue<UBlackboardKeyType_Object> @ 146ec1c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Object>
          (UBlackboardComponent *this,FName *param_1,UObject *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = SetValue<UBlackboardKeyType_Object>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Rotator> @ 146ec1c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>
          (UBlackboardComponent *this,FName *param_1,TRotator<double> *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  TRotator<double> local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  local_28.Pitch = param_2->Pitch;
  local_28.Yaw = param_2->Yaw;
  local_28.Roll = param_2->Roll;
  bVar1 = SetValue<UBlackboardKeyType_Rotator>
                    (this,local_res8.ComparisonIndex.Value._0_2_,&local_28);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Rotator> @ 146ec1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>
          (UBlackboardComponent *this,FKey param_1,TRotator<double> *param_2)

{
  double dVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UBlackboardKeyType *pUVar4;
  code *pcVar5;
  double dVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  UBlackboardKeyType_Rotator *pUVar17;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar18;
  UAISystem *this_01;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar3 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar3,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Rotator::StaticClass();
  pUVar4 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar4->_padding_ != pUVar13) {
    return false;
  }
  uVar22 = pUVar4->bCreateKeyInstance;
  puVar14 = GetKeyRawData(this,param_1);
  if (puVar14 + uVar22 * 4 == (uchar *)0x0) {
    return false;
  }
  pUVar17 = (UBlackboardKeyType_Rotator *)(pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((*(byte *)((longlong)&pUVar17->_padding_ + 3) & 2) != 0) {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar2,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pUVar17 = *(UBlackboardKeyType_Rotator **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  bVar8 = UBlackboardKeyType_Rotator::SetValue(pUVar17,puVar14 + uVar22 * 4,param_2);
  if (!bVar8) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar3 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar3,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar13->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec1e90;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec1e90:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = (uint)uVar20;
      if ((int)uVar21 <= local_120.CurrentIteratorIndex) {
LAB_146ec2158:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar21 = local_120.Iterators.ArrayNum;
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) == -1) goto LAB_146ec2158;
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar20;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar18 + uVar20 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar20 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar3 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar3 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar3,(FName *)&local_128,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar2 = (this_00->KeyInstances).ArrayNum, iVar2 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar2,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          dVar6 = param_2->Yaw;
          dVar1 = param_2->Roll;
          *(double *)(puVar14 + uVar22 * 4) = param_2->Pitch;
          *(double *)((longlong)(puVar14 + uVar22 * 4) + 8) = dVar6;
          *(double *)(puVar14 + uVar22 * 4 + 0x10) = dVar1;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_138 = uVar20, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar18 + uVar20 * 0x18));
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar21 == 0) {
        local_138 = uVar19;
        local_130 = uVar20;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) != -1) ||
            ((int)uVar20 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// SetValue<UBlackboardKeyType_String> @ 146ec21b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_String>
          (UBlackboardComponent *this,FName *param_1,FString *param_2)

{
  UBlackboardData *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_18;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  pFVar3 = ::FString::FString(&local_18,param_2);
  bVar2 = SetValue<UBlackboardKeyType_String>(this,local_res8.ComparisonIndex.Value._0_2_,pFVar3);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// SetValue<UBlackboardKeyType_String> @ 146ec2240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_String>
          (UBlackboardComponent *this,FKey param_1,FString *param_2)

{
  int iVar1;
  UBlackboardData *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FKey FVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  FBlackboardEntry *pFVar10;
  UClass *pUVar11;
  uchar *puVar12;
  FBlackboardEntry *pFVar13;
  UWorld *pUVar14;
  UBlackboardComponent *this_00;
  UBlackboardKeyType_String *pUVar15;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar16;
  UAISystem *this_01;
  ulonglong uVar17;
  ulonglong uVar18;
  UBlackboardKeyType *pUVar19;
  uint uVar20;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  ulonglong local_140;
  FKey local_138;
  FBlackboardDataToComponentsIterator local_130;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar2 == (UBlackboardData *)0x0) ||
      (pFVar10 = UBlackboardData::GetKey(pUVar2,param_1), pFVar10 == (FBlackboardEntry *)0x0)) ||
     ((pFVar10->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
LAB_146ec26d6:
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return false;
  }
  pUVar11 = UBlackboardKeyType_String::StaticClass();
  pUVar19 = (pFVar10->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar19->_padding_ != pUVar11) goto LAB_146ec26d6;
  puVar12 = GetKeyRawData(this,param_1);
  if (puVar12 + pUVar19->bCreateKeyInstance * 4 == (uchar *)0x0) goto LAB_146ec26d6;
  pUVar15 = (UBlackboardKeyType_String *)(pFVar10->KeyType).field0_0x0.DebugPtr;
  if ((*(byte *)((longlong)&pUVar15->_padding_ + 3) & 2) != 0) {
    iVar1 = (this->KeyInstances).ArrayNum;
    if ((iVar1 <= (int)(uint)param_1.Key) &&
       (local_148 = (ulonglong)param_1.Key, local_140 = (longlong)iVar1,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pUVar15 = *(UBlackboardKeyType_String **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  bVar6 = UBlackboardKeyType_String::SetValue
                    (pUVar15,puVar12 + pUVar19->bCreateKeyInstance * 4,param_2);
  if (!bVar6) {
LAB_146ec26c4:
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((pUVar2->bHasSynchronizedKeys == 0) || (pUVar2 == (UBlackboardData *)0x0)) goto LAB_146ec26c4;
  pFVar13 = UBlackboardData::GetKey(pUVar2,param_1);
  bVar8 = 0;
  if (pFVar13 != (FBlackboardEntry *)0x0) {
    bVar8 = pFVar13->bInstanceSynced;
  }
  if (bVar8 == 0) goto LAB_146ec26c4;
  pUVar14 = (UWorld *)this->_padding_;
  if (((pUVar14 != (UWorld *)0x0) ||
      (pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar14 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar14->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar11 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar11->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar11->_padding_)) goto LAB_146ec23c7;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec23c7:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_130,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar18 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
    do {
      uVar17 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = (uint)uVar18;
      if ((int)uVar20 <= local_130.CurrentIteratorIndex) {
LAB_146ec2698:
        if (local_130.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_130.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_130.IteratorKeysForReference.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.IteratorKeysForReference.AllocatorInstance.Data);
        }
        goto LAB_146ec26c4;
      }
      uVar9 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar9 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar9 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar17;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_130.Iterators.ArrayNum;
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar16 + 0x10) + uVar17 * 0x18) == -1) goto LAB_146ec2698;
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar9 = 0;
      if (local_130.CurrentIteratorIndex < (int)uVar20) {
        uVar9 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar9 == 0) {
        local_140 = (ulonglong)(int)uVar20;
        local_148 = uVar18;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar16 + uVar18 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar16 + 0x10) + uVar18 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar6 = ShouldSyncWithBlackboard(this,this_00), bVar6)) &&
         (pUVar2 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar2 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar2,(FName *)&local_138,(EKeyLookupMode)pFVar10);
        FVar5.Key = local_138.Key;
        uVar18 = (ulonglong)local_138.Key;
        if (local_138.Key != 0xffff) {
          pUVar19 = (pFVar10->KeyType).field0_0x0.DebugPtr;
          if (pUVar19->bCreateKeyInstance != '\0') {
            iVar1 = (this_00->KeyInstances).ArrayNum;
            if ((iVar1 <= (int)(uint)local_138.Key) &&
               (local_148 = uVar18, local_140 = (longlong)iVar1,
               bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            pUVar19 = *(UBlackboardKeyType **)
                       ((this_00->KeyInstances).AllocatorInstance.Data + uVar18 * 8);
          }
          GetKeyRawData(this_00,FVar5);
          ::FString::operator=((FString *)(pUVar19 + 1),param_2);
          NotifyObservers(this_00,FVar5);
        }
      }
      uVar18 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_148 = uVar18, local_140 = (longlong)local_130.Iterators.ArrayNum,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar16 + uVar18 * 0x18));
      uVar17 = (ulonglong)local_130.CurrentIteratorIndex;
      uVar18 = (ulonglong)local_130.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_130.CurrentIteratorIndex < local_130.Iterators.ArrayNum) {
        uVar20 = (uint)~local_130.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_148 = uVar17;
        local_140 = uVar18;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        uVar18 = (ulonglong)(uint)local_130.Iterators.ArrayNum;
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_130.Iterators;
      if (local_130.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_130.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar16 + 0x10) + uVar17 * 0x18) != -1) ||
            ((int)uVar18 + -1 <= local_130.CurrentIteratorIndex));
    local_130.CurrentIteratorIndex = local_130.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_130);
  } while( true );
}

// SetValue<UBlackboardKeyType_Struct> @ 146ec2710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Struct>
          (UBlackboardComponent *this,FKey param_1,FConstStructView *param_2)

{
  longlong lVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  FKey FVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  FBlackboardEntry *pFVar11;
  UClass *pUVar12;
  uchar *puVar13;
  FBlackboardEntry *pFVar14;
  UWorld *pUVar15;
  UBlackboardComponent *this_00;
  UBlackboardKeyType *pUVar16;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar17;
  UAISystem *this_01;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  ulonglong local_180;
  FKey local_178;
  FConstStructView local_168;
  FConstStructView local_158;
  UScriptStruct *local_148;
  uchar *puStack_140;
  UScriptStruct *local_138;
  uchar *puStack_130;
  FBlackboardDataToComponentsIterator local_128;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar3 == (UBlackboardData *)0x0) ||
      (pFVar11 = UBlackboardData::GetKey(pUVar3,param_1), pFVar11 == (FBlackboardEntry *)0x0)) ||
     ((pFVar11->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar12 = UBlackboardKeyType_Struct::StaticClass();
  pUVar16 = (pFVar11->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar16->_padding_ != pUVar12) {
    return false;
  }
  lVar1 = pUVar16->bCreateKeyInstance * 4;
  puVar13 = GetKeyRawData(this,param_1);
  if (puVar13 + lVar1 == (uchar *)0x0) {
    return false;
  }
  pUVar16 = (pFVar11->KeyType).field0_0x0.DebugPtr;
  if (pUVar16->bCreateKeyInstance != '\0') {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_188 = (ulonglong)param_1.Key, local_180 = (longlong)iVar2,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pUVar16 = *(UBlackboardKeyType **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  local_148 = param_2->ScriptStruct;
  puStack_140 = param_2->StructMemory;
  if (pUVar16->bIsInstanced == 0) {
    pUVar4 = (UScriptStruct *)pUVar16[1]._padding_;
    if (pUVar4 == (UScriptStruct *)0x0) {
      return true;
    }
    if (local_148 != pUVar4) {
      return true;
    }
    UScriptStruct::CopyScriptStruct(pUVar4,puVar13 + lVar1,puStack_140,1);
  }
  else {
    if (local_148 != (UScriptStruct *)pUVar16[1]._padding_) {
      return true;
    }
    local_168.ScriptStruct = local_148;
    local_168.StructMemory = puStack_140;
    FInstancedStruct::operator=((FInstancedStruct *)&pUVar16[1]._padding_,&local_168);
  }
  NotifyObservers(this,param_1);
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((pUVar3->bHasSynchronizedKeys == 0) || (pUVar3 == (UBlackboardData *)0x0)) {
    return true;
  }
  pFVar14 = UBlackboardData::GetKey(pUVar3,param_1);
  bVar9 = 0;
  if (pFVar14 != (FBlackboardEntry *)0x0) {
    bVar9 = pFVar14->bInstanceSynced;
  }
  if (bVar9 == 0) {
    return true;
  }
  pUVar15 = (UWorld *)this->_padding_;
  if (((pUVar15 != (UWorld *)0x0) ||
      (pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar15 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar15->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar12 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar12->_padding_)) goto LAB_146ec28ed;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec28ed:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_128,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar19 = (ulonglong)(uint)local_128.Iterators.ArrayNum;
    do {
      uVar18 = (ulonglong)local_128.CurrentIteratorIndex;
      uVar20 = (uint)uVar19;
      if ((int)uVar20 <= local_128.CurrentIteratorIndex) {
LAB_146ec2c04:
        if (local_128.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_128.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_128.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_128.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar10 = 0;
      if (local_128.CurrentIteratorIndex < (int)uVar20) {
        uVar10 = (uint)~local_128.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar10 == 0) {
        local_180 = (ulonglong)(int)uVar20;
        local_188 = uVar18;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar20 = local_128.Iterators.ArrayNum;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_128.Iterators;
      if (local_128.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_128.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) == -1) goto LAB_146ec2c04;
      uVar19 = (ulonglong)local_128.CurrentIteratorIndex;
      uVar10 = 0;
      if (local_128.CurrentIteratorIndex < (int)uVar20) {
        uVar10 = (uint)~local_128.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar10 == 0) {
        local_180 = (ulonglong)(int)uVar20;
        local_188 = uVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_128.Iterators;
      if (local_128.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_128.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar17 + uVar19 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar19 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar7 = ShouldSyncWithBlackboard(this,this_00), bVar7)) &&
         (pUVar3 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar3 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar3,(FName *)&local_178,(EKeyLookupMode)pFVar11);
        FVar6.Key = local_178.Key;
        uVar19 = (ulonglong)local_178.Key;
        if (local_178.Key != 0xffff) {
          pUVar16 = (pFVar11->KeyType).field0_0x0.DebugPtr;
          if (pUVar16->bCreateKeyInstance != '\0') {
            iVar2 = (this_00->KeyInstances).ArrayNum;
            if ((iVar2 <= (int)(uint)local_178.Key) &&
               (local_188 = uVar19, local_180 = (longlong)iVar2,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            pUVar16 = *(UBlackboardKeyType **)
                       ((this_00->KeyInstances).AllocatorInstance.Data + uVar19 * 8);
          }
          puVar13 = GetKeyRawData(this_00,FVar6);
          local_138 = param_2->ScriptStruct;
          puStack_130 = param_2->StructMemory;
          if (pUVar16->bIsInstanced == 0) {
            pUVar4 = (UScriptStruct *)pUVar16[1]._padding_;
            if ((pUVar4 != (UScriptStruct *)0x0) && (local_138 == pUVar4)) {
              UScriptStruct::CopyScriptStruct(pUVar4,puVar13 + lVar1,puStack_130,1);
            }
          }
          else if (local_138 == (UScriptStruct *)pUVar16[1]._padding_) {
            local_158.ScriptStruct = local_138;
            local_158.StructMemory = puStack_130;
            FInstancedStruct::operator=((FInstancedStruct *)&pUVar16[1]._padding_,&local_158);
          }
          NotifyObservers(this_00,FVar6);
        }
      }
      uVar19 = (ulonglong)local_128.CurrentIteratorIndex;
      uVar20 = 0;
      if (local_128.CurrentIteratorIndex < local_128.Iterators.ArrayNum) {
        uVar20 = (uint)~local_128.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_188 = uVar19, local_180 = (longlong)local_128.Iterators.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_128.Iterators;
      if (local_128.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_128.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar17 + uVar19 * 0x18));
      uVar18 = (ulonglong)local_128.CurrentIteratorIndex;
      uVar19 = (ulonglong)local_128.Iterators.ArrayNum;
      uVar20 = 0;
      if (local_128.CurrentIteratorIndex < local_128.Iterators.ArrayNum) {
        uVar20 = (uint)~local_128.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar20 == 0) {
        local_188 = uVar18;
        local_180 = uVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar19 = (ulonglong)(uint)local_128.Iterators.ArrayNum;
      }
      FVar17 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_128.Iterators;
      if (local_128.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar17 = local_128.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar17 + 0x10) + uVar18 * 0x18) != -1) ||
            ((int)uVar19 + -1 <= local_128.CurrentIteratorIndex));
    local_128.CurrentIteratorIndex = local_128.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_128);
  } while( true );
}

// SetValue<UBlackboardKeyType_Vector> @ 146ec2c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
          (UBlackboardComponent *this,FName *param_1,TVector<double> *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  bVar1 = SetValue<UBlackboardKeyType_Vector>
                    (this,local_res8.ComparisonIndex.Value._0_2_,(TVector<double> *)&local_28._s_0);
  return bVar1;
}

// SetValue<UBlackboardKeyType_Vector> @ 146ec2cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
          (UBlackboardComponent *this,FKey param_1,TVector<double> *param_2)

{
  double dVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  UBlackboardKeyType *pUVar4;
  code *pcVar5;
  double dVar6;
  FKey FVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  FBlackboardEntry *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  FBlackboardEntry *pFVar15;
  UWorld *pUVar16;
  UBlackboardComponent *this_00;
  UBlackboardKeyType_Vector *pUVar17;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar18;
  UAISystem *this_01;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  FKey local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar3 == (UBlackboardData *)0x0) ||
      (pFVar12 = UBlackboardData::GetKey(pUVar3,param_1), pFVar12 == (FBlackboardEntry *)0x0)) ||
     ((pFVar12->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0)) {
    return false;
  }
  pUVar13 = UBlackboardKeyType_Vector::StaticClass();
  pUVar4 = (pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((UClass *)pUVar4->_padding_ != pUVar13) {
    return false;
  }
  uVar22 = pUVar4->bCreateKeyInstance;
  puVar14 = GetKeyRawData(this,param_1);
  if (puVar14 + uVar22 * 4 == (uchar *)0x0) {
    return false;
  }
  pUVar17 = (UBlackboardKeyType_Vector *)(pFVar12->KeyType).field0_0x0.DebugPtr;
  if ((*(byte *)((longlong)&pUVar17->_padding_ + 3) & 2) != 0) {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_138 = (ulonglong)param_1.Key, local_130 = (longlong)iVar2,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pUVar17 = *(UBlackboardKeyType_Vector **)
               ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
  }
  bVar8 = UBlackboardKeyType_Vector::SetValue(pUVar17,puVar14 + uVar22 * 4,param_2);
  if (!bVar8) {
    return true;
  }
  NotifyObservers(this,param_1);
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3->bHasSynchronizedKeys == 0) {
    return true;
  }
  if (pUVar3 == (UBlackboardData *)0x0) {
    return true;
  }
  pFVar15 = UBlackboardData::GetKey(pUVar3,param_1);
  bVar10 = 0;
  if (pFVar15 != (FBlackboardEntry *)0x0) {
    bVar10 = pFVar15->bInstanceSynced;
  }
  if (bVar10 == 0) {
    return true;
  }
  pUVar16 = (UWorld *)this->_padding_;
  if (((pUVar16 != (UWorld *)0x0) ||
      (pUVar16 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar16 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar16->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar13->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar13->_padding_)) goto LAB_146ec2e60;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ec2e60:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
  do {
    uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
    do {
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = (uint)uVar20;
      if ((int)uVar21 <= local_120.CurrentIteratorIndex) {
LAB_146ec3128:
        if (local_120.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_120.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
        return true;
      }
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar19;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar21 = local_120.Iterators.ArrayNum;
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) == -1) goto LAB_146ec3128;
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < (int)uVar21) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar11 == 0) {
        local_130 = (ulonglong)(int)uVar21;
        local_138 = uVar20;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar18 + uVar20 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar20 * 0x18) *
                                     0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar8 = ShouldSyncWithBlackboard(this,this_00), bVar8)) &&
         (pUVar3 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar3 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar3,(FName *)&local_128,(EKeyLookupMode)pFVar12);
        FVar7.Key = local_128.Key;
        if (local_128.Key != 0xffff) {
          if (((((pFVar12->KeyType).field0_0x0.DebugPtr)->bCreateKeyInstance != '\0') &&
              (iVar2 = (this_00->KeyInstances).ArrayNum, iVar2 <= (int)(uint)local_128.Key)) &&
             (local_138 = (ulonglong)local_128.Key, local_130 = (longlong)iVar2,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          puVar14 = GetKeyRawData(this_00,FVar7);
          dVar6 = (param_2->field0_0x0)._s_0.Y;
          dVar1 = (param_2->field0_0x0)._s_0.Z;
          *(double *)(puVar14 + uVar22 * 4) = (param_2->field0_0x0)._s_0.X;
          *(double *)((longlong)(puVar14 + uVar22 * 4) + 8) = dVar6;
          *(double *)(puVar14 + uVar22 * 4 + 0x10) = dVar1;
          NotifyObservers(this_00,FVar7);
        }
      }
      uVar20 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (local_138 = uVar20, local_130 = (longlong)local_120.Iterators.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar18 + uVar20 * 0x18));
      uVar19 = (ulonglong)local_120.CurrentIteratorIndex;
      uVar20 = (ulonglong)local_120.Iterators.ArrayNum;
      uVar21 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar21 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar21 == 0) {
        local_138 = uVar19;
        local_130 = uVar20;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar20 = (ulonglong)(uint)local_120.Iterators.ArrayNum;
      }
      FVar18 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar18 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar18 + 0x10) + uVar19 * 0x18) != -1) ||
            ((int)uVar20 + -1 <= local_120.CurrentIteratorIndex));
    local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_120);
  } while( true );
}

// UBlackboardComponent @ 146ecb980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardComponent * __thiscall
UBlackboardComponent::UBlackboardComponent(UBlackboardComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->BrainComp).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->DefaultBlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->BlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->ValueMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueMemory).ArrayNum = 0;
  (this->ValueMemory).ArrayMax = 0;
  (this->ValueOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueOffsets).ArrayNum = 0;
  (this->ValueOffsets).ArrayMax = 0;
  (this->KeyInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyInstances).ArrayNum = 0;
  (this->KeyInstances).ArrayMax = 0;
  this->NotifyObserversRecursionCount = 0;
  this->ObserversToRemoveCount = 0;
  *(undefined8 *)&this->Observers = 0;
  *(undefined8 *)&(this->Observers).field_0x8 = 0;
  *(undefined8 *)&(this->Observers).field_0x20 = 0;
  *(undefined4 *)&(this->Observers).field_0x28 = 0;
  *(undefined4 *)&(this->Observers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Observers).field_0x34 = 0;
  *(undefined4 *)&(this->Observers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Observers).field_0x40 = 0;
  *(undefined4 *)&(this->Observers).field_0x48 = 0;
  *(undefined8 *)&this->ObserverHandles = 0;
  *(undefined8 *)&(this->ObserverHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObserverHandles).field_0x34 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObserverHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x48 = 0;
  (this->QueuedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedUpdates).ArrayNum = 0;
  (this->QueuedUpdates).ArrayMax = 0;
  return this;
}

// UBlackboardComponent @ 146ecbaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardComponent * __thiscall
UBlackboardComponent::UBlackboardComponent(UBlackboardComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->BrainComp).field0_0x0.DebugPtr = (UBrainComponent *)0x0;
  (this->DefaultBlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->BlackboardAsset).field0_0x0.DebugPtr = (UBlackboardData *)0x0;
  (this->ValueMemory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueMemory).ArrayNum = 0;
  (this->ValueMemory).ArrayMax = 0;
  (this->ValueOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueOffsets).ArrayNum = 0;
  (this->ValueOffsets).ArrayMax = 0;
  (this->KeyInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyInstances).ArrayNum = 0;
  (this->KeyInstances).ArrayMax = 0;
  *(undefined8 *)&this->Observers = 0;
  *(undefined8 *)&(this->Observers).field_0x8 = 0;
  *(undefined8 *)&(this->Observers).field_0x20 = 0;
  this->NotifyObserversRecursionCount = 0;
  this->ObserversToRemoveCount = 0;
  *(undefined4 *)&(this->Observers).field_0x28 = 0;
  *(undefined4 *)&(this->Observers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Observers).field_0x34 = 0;
  *(undefined4 *)&(this->Observers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Observers).field_0x40 = 0;
  *(undefined4 *)&(this->Observers).field_0x48 = 0;
  *(undefined8 *)&this->ObserverHandles = 0;
  *(undefined8 *)&(this->ObserverHandles).field_0x8 = 0;
  *(undefined8 *)&(this->ObserverHandles).field_0x20 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x28 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObserverHandles).field_0x34 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObserverHandles).field_0x40 = 0;
  *(undefined4 *)&(this->ObserverHandles).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->bPausedNotifies = 0;
  this->bSynchronizedKeyPopulated = 0;
  (this->QueuedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedUpdates).ArrayNum = 0;
  (this->QueuedUpdates).ArrayMax = 0;
  return this;
}

// ~UBlackboardComponent @ 146ecdbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::~UBlackboardComponent(UBlackboardComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->QueuedUpdates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ObserverHandles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ObserverHandles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObserverHandles);
  *(undefined4 *)&(this->Observers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Observers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Observers);
  pFVar1 = (this->KeyInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValueOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ValueMemory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CacheBrainComponent @ 146ed4080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::CacheBrainComponent(UBlackboardComponent *this,UBrainComponent *param_1)

{
  UBrainComponent *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->BrainComp).field0_0x0.DebugPtr;
  if (pUVar1 == (UBrainComponent *)0x0) {
    bVar2 = param_1 == (UBrainComponent *)0x0;
  }
  else {
    bVar2 = pUVar1 == param_1;
  }
  if (!bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBrainComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BrainComp).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// ClearValue @ 146ed67e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::ClearValue(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    ClearValue(this,local_res8);
    return;
  }
  ClearValue(this,(FKey)0xffff);
  return;
}

// ClearValue @ 146ed6830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::ClearValue(UBlackboardComponent *this,FKey param_1)

{
  undefined1 *puVar1;
  int iVar2;
  UBlackboardData *pUVar3;
  TObjectPtr<UBlackboardKeyType> TVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  FKey FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  FBlackboardEntry *pFVar14;
  uchar *puVar15;
  UBlackboardKeyType *pUVar16;
  FBlackboardEntry *pFVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  UBlackboardComponent *this_00;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar20;
  UAISystem *this_01;
  TObjectPtr<UBlackboardKeyType>_u_0 *pTVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_168 [32];
  uchar *local_148;
  ulonglong local_140;
  FKey local_138;
  UBlackboardKeyType *local_130;
  ulonglong local_128;
  uchar *local_120;
  FBlackboardDataToComponentsIterator local_118;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (((this->BlackboardAsset).field0_0x0.DebugPtr == (UBlackboardData *)0x0) &&
     (bVar10 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                         ("BlackboardAsset != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                          ,0x2ff), !bVar10)) {
    return;
  }
  pFVar14 = UBlackboardData::GetKey((this->BlackboardAsset).field0_0x0.DebugPtr,param_1);
  puVar15 = GetKeyRawData(this,param_1);
  if (puVar15 == (uchar *)0x0) {
    return;
  }
  pUVar16 = (pFVar14->KeyType).field0_0x0.DebugPtr;
  if (pUVar16->bCreateKeyInstance == '\0') {
    cVar11 = (**(code **)(pUVar16->_padding_ + 0x310))();
  }
  else {
    pUVar16 = UBlackboardKeyType::GetKeyInstance(pUVar16,this,puVar15);
    cVar11 = (**(code **)(pUVar16->_padding_ + 0x310))(pUVar16,this,puVar15 + 4);
  }
  if (cVar11 != '\0') {
    return;
  }
  pUVar16 = (pFVar14->KeyType).field0_0x0.DebugPtr;
  if (pUVar16->bCreateKeyInstance == '\0') {
    (**(code **)(pUVar16->_padding_ + 0x308))();
  }
  else {
    pUVar16 = UBlackboardKeyType::GetKeyInstance(pUVar16,this,puVar15);
    (**(code **)(pUVar16->_padding_ + 0x308))(pUVar16,this,puVar15 + 4);
  }
  NotifyObservers(this,param_1);
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar3->bHasSynchronizedKeys == 0) {
    return;
  }
  if (pUVar3 == (UBlackboardData *)0x0) {
    return;
  }
  pFVar17 = UBlackboardData::GetKey(pUVar3,param_1);
  bVar12 = 0;
  if (pFVar17 != (FBlackboardEntry *)0x0) {
    bVar12 = pFVar17->bInstanceSynced;
  }
  if (bVar12 == 0) {
    return;
  }
  local_130 = (pFVar14->KeyType).field0_0x0.DebugPtr;
  if (local_130->bCreateKeyInstance != '\0') {
    iVar2 = (this->KeyInstances).ArrayNum;
    if ((iVar2 <= (int)(uint)param_1.Key) &&
       (local_148 = (uchar *)(ulonglong)param_1.Key, local_140 = (longlong)iVar2,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_130 = *(UBlackboardKeyType **)
                 ((this->KeyInstances).AllocatorInstance.Data + (longlong)(ulonglong)param_1.Key * 8
                 );
  }
  local_120 = puVar15 + (-(uint)(local_130->bCreateKeyInstance != '\0') & 4);
  pUVar18 = (UWorld *)this->_padding_;
  if (((pUVar18 != (UWorld *)0x0) ||
      (pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
      pUVar18 != (UWorld *)0x0)) &&
     (this_01 = (UAISystem *)(pUVar18->AISystem).field0_0x0.DebugPtr, this_01 != (UAISystem *)0x0))
  {
    pUVar19 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar2 = (int)pUVar19->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar19->_padding_)) goto LAB_146ed6a4c;
  }
  this_01 = (UAISystem *)0x0;
LAB_146ed6a4c:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_118,(this->BlackboardAsset).field0_0x0.DebugPtr);
  local_128 = (ulonglong)(-(uint)(local_130->bCreateKeyInstance != '\0') & 4);
  do {
    uVar23 = (ulonglong)(uint)local_118.Iterators.ArrayNum;
    do {
      puVar15 = (uchar *)(longlong)local_118.CurrentIteratorIndex;
      uVar22 = (uint)uVar23;
      if ((int)uVar22 <= local_118.CurrentIteratorIndex) {
LAB_146ed6d5d:
        if (local_118.Iterators.AllocatorInstance.SecondaryData !=
            (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
             )0x0) {
          FMemory::Free((void *)local_118.Iterators.AllocatorInstance.SecondaryData);
        }
        if (local_118.IteratorKeysForReference.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_118.IteratorKeysForReference.AllocatorInstance.Data);
        return;
      }
      uVar13 = 0;
      if (local_118.CurrentIteratorIndex < (int)uVar22) {
        uVar13 = (uint)~local_118.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar13 == 0) {
        local_140 = (ulonglong)(int)uVar22;
        local_148 = puVar15;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar22 = local_118.Iterators.ArrayNum;
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar20 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_118.Iterators;
      if (local_118.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar20 = local_118.Iterators.AllocatorInstance.SecondaryData;
      }
      if (*(int *)((uchar *)((longlong)FVar20 + 0x10) + (longlong)puVar15 * 0x18) == -1)
      goto LAB_146ed6d5d;
      puVar15 = (uchar *)(longlong)local_118.CurrentIteratorIndex;
      uVar13 = 0;
      if (local_118.CurrentIteratorIndex < (int)uVar22) {
        uVar13 = (uint)~local_118.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar13 == 0) {
        local_140 = (ulonglong)(int)uVar22;
        local_148 = puVar15;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar20 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_118.Iterators;
      if (local_118.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar20 = local_118.Iterators.AllocatorInstance.SecondaryData;
      }
      this_00 = (UBlackboardComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (**(longlong **)((longlong)FVar20 + (longlong)puVar15 * 0x18) +
                                     (longlong)
                                     *(int *)((uchar *)((longlong)FVar20 + 0x10) +
                                             (longlong)puVar15 * 0x18) * 0x18 + 8));
      if (((this_00 != (UBlackboardComponent *)0x0) &&
          (bVar10 = ShouldSyncWithBlackboard(this,this_00), bVar10)) &&
         (pUVar3 = (this_00->BlackboardAsset).field0_0x0.DebugPtr, pUVar3 != (UBlackboardData *)0x0)
         ) {
        UBlackboardData::InternalGetKeyID(pUVar3,(FName *)&local_138,(EKeyLookupMode)pFVar14);
        FVar9.Key = local_138.Key;
        puVar15 = (uchar *)(ulonglong)local_138.Key;
        if (local_138.Key != 0xffff) {
          UBlackboardData::GetKey((this_00->BlackboardAsset).field0_0x0.DebugPtr,local_138);
          if (local_130->bCreateKeyInstance == '\0') {
            pTVar21 = &(pFVar14->KeyType).field0_0x0;
          }
          else {
            iVar2 = (this_00->KeyInstances).ArrayNum;
            if ((iVar2 <= (int)(uint)FVar9.Key) &&
               (local_148 = puVar15, local_140 = (longlong)iVar2,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar21 = (TObjectPtr<UBlackboardKeyType>_u_0 *)
                      ((this_00->KeyInstances).AllocatorInstance.Data + (longlong)puVar15 * 8);
          }
          TVar4.field0_0x0 = (TObjectPtr<UBlackboardKeyType>_u_0)pTVar21->DebugPtr;
          puVar15 = GetKeyRawData(this_00,FVar9);
          local_148 = local_120;
          (**(code **)(*(longlong *)TVar4.field0_0x0 + 0x2e0))
                    (TVar4.field0_0x0,this_00,puVar15 + local_128,local_130);
          NotifyObservers(this_00,FVar9);
        }
      }
      puVar15 = (uchar *)(longlong)local_118.CurrentIteratorIndex;
      uVar22 = 0;
      if (local_118.CurrentIteratorIndex < local_118.Iterators.ArrayNum) {
        uVar22 = (uint)~local_118.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (local_148 = puVar15, local_140 = (longlong)local_118.Iterators.ArrayNum,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar20 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_118.Iterators;
      if (local_118.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar20 = local_118.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++
                ((TBaseKeyIterator<1> *)((longlong)FVar20 + (longlong)puVar15 * 0x18));
      puVar15 = (uchar *)(longlong)local_118.CurrentIteratorIndex;
      uVar23 = (ulonglong)local_118.Iterators.ArrayNum;
      uVar22 = 0;
      if (local_118.CurrentIteratorIndex < local_118.Iterators.ArrayNum) {
        uVar22 = (uint)~local_118.CurrentIteratorIndex >> 0x1f;
      }
      if (uVar22 == 0) {
        local_148 = puVar15;
        local_140 = uVar23;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar23 = (ulonglong)(uint)local_118.Iterators.ArrayNum;
      }
      FVar20 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_118.Iterators;
      if (local_118.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar20 = local_118.Iterators.AllocatorInstance.SecondaryData;
      }
    } while ((*(int *)((uchar *)((longlong)FVar20 + 0x10) + (longlong)puVar15 * 0x18) != -1) ||
            ((int)uVar23 + -1 <= local_118.CurrentIteratorIndex));
    local_118.CurrentIteratorIndex = local_118.CurrentIteratorIndex + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(&local_118);
  } while( true );
}

// CompareKeyValues @ 146ed74a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBlackboardComponent::CompareKeyValues
          (UBlackboardComponent *this,TSubclassOf<UBlackboardKeyType> param_1,FKey param_2,
          FKey param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  Type TVar8;
  uchar *puVar9;
  uchar *puVar10;
  UClass *pUVar11;
  UBlackboardKeyType *pUVar12;
  uint uVar13;
  
  uVar6 = (ulonglong)param_2.Key;
  uVar13 = (uint)param_2.Key;
  if ((this->KeyInstances).ArrayNum <= (int)uVar13) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      TVar8 = (*pcVar5)();
      return TVar8;
    }
  }
  lVar2 = *(longlong *)((this->KeyInstances).AllocatorInstance.Data + uVar6 * 8);
  puVar9 = GetKeyRawData(this,param_2);
  if ((this->KeyInstances).ArrayNum <= (int)(uint)param_3.Key) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      TVar8 = (*pcVar5)();
      return TVar8;
    }
  }
  lVar3 = *(longlong *)((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_3.Key * 8);
  puVar10 = GetKeyRawData(this,param_3);
  if ((this->KeyInstances).ArrayNum <= (int)uVar13) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      TVar8 = (*pcVar5)();
      return TVar8;
    }
  }
  if (*(longlong *)((this->KeyInstances).AllocatorInstance.Data + uVar6 * 8) != 0) {
    if ((this->KeyInstances).ArrayNum <= (int)uVar13) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar8 = (*pcVar5)();
        return TVar8;
      }
    }
    pUVar12 = *(UBlackboardKeyType **)((this->KeyInstances).AllocatorInstance.Data + uVar6 * 8);
    goto LAB_146ed7673;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
LAB_146ed7669:
    pUVar11 = (UClass *)0x0;
  }
  else {
    pUVar11 = UBlackboardKeyType::StaticClass();
    if (pUVar11 == (UClass *)0x0) goto LAB_146ed7669;
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_146ed7669;
    pUVar11 = *(UClass **)param_1.Class.field0_0x0;
  }
  pUVar12 = UClass::GetDefaultObject<UBlackboardKeyType>(pUVar11);
LAB_146ed7673:
  pcVar5 = *(code **)(pUVar12->_padding_ + 0x2d8);
  if ((this->KeyInstances).ArrayNum <= (int)(uint)param_3.Key) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      TVar8 = (*pcVar5)();
      return TVar8;
    }
  }
  TVar8 = (*pcVar5)(pUVar12,this,puVar9 + (-(uint)(lVar2 != 0) & 4),
                    *(undefined8 *)
                     ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_3.Key * 8),
                    puVar10 + (-(uint)(lVar3 != 0) & 4));
  return TVar8;
}

// CopyKeyValue @ 146ed7fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::CopyKeyValue(UBlackboardComponent *this,FKey param_1,FKey param_2)

{
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  FBlackboardEntry *pFVar6;
  FBlackboardEntry *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  longlong lVar10;
  UBlackboardKeyType *pUVar11;
  TObjectPtr<UBlackboardKeyType>_u_0 *pTVar12;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((this_00 != (UBlackboardData *)0x0) && ((this->ValueMemory).ArrayNum != 0)) {
    pFVar6 = UBlackboardData::GetKey(this_00,param_1);
    pFVar7 = UBlackboardData::GetKey(this_00,param_2);
    if ((pFVar6 != (FBlackboardEntry *)0x0) &&
       ((pFVar7 != (FBlackboardEntry *)0x0 &&
        (pUVar11 = (pFVar6->KeyType).field0_0x0.DebugPtr, pUVar11 != (UBlackboardKeyType *)0x0)))) {
      pTVar12 = &(pFVar7->KeyType).field0_0x0;
      pUVar1 = (pFVar7->KeyType).field0_0x0.DebugPtr;
      if ((pUVar1 != (UBlackboardKeyType *)0x0) && (pUVar11->_padding_ == pUVar1->_padding_)) {
        bVar3 = pUVar11->bCreateKeyInstance;
        lVar10 = (ulonglong)bVar3 * 4;
        puVar8 = GetKeyRawData(this,param_1);
        puVar9 = GetKeyRawData(this,param_2);
        if (bVar3 == 0) {
          pUVar11 = (pFVar6->KeyType).field0_0x0.DebugPtr;
        }
        else {
          if ((this->KeyInstances).ArrayNum <= (int)(uint)param_1.Key) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          pUVar11 = *(UBlackboardKeyType **)
                     ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_1.Key * 8);
          if ((this->KeyInstances).ArrayNum <= (int)(uint)param_2.Key) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          pTVar12 = (TObjectPtr<UBlackboardKeyType>_u_0 *)
                    ((this->KeyInstances).AllocatorInstance.Data + (ulonglong)param_2.Key * 8);
        }
        (**(code **)(pTVar12->DebugPtr->_padding_ + 0x2e0))
                  (pTVar12->DebugPtr,this,puVar9 + lVar10,pUVar11,puVar8 + lVar10);
        return true;
      }
    }
  }
  return false;
}

// DescribeKeyValue @ 146ed9ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::DescribeKeyValue
          (UBlackboardComponent *this,FString *__return_storage_ptr__,FName *param_1,Type param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  DescribeKeyValue(this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return __return_storage_ptr__;
}

// DescribeKeyValue @ 146ed9d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::DescribeKeyValue
          (UBlackboardComponent *this,FString *__return_storage_ptr__,FKey param_1,Type param_2)

{
  UBlackboardData *this_00;
  TObjectPtr<UBlackboardKeyType> this_01;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  FName FVar4;
  uchar *puVar5;
  UBlackboardKeyType *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  int iVar11;
  FName local_res8;
  FName local_res10;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((this_00 != (UBlackboardData *)0x0) &&
     (FVar4 = (FName)UBlackboardData::GetKey(this_00,param_1), FVar4 != (FName)0x0)) {
    local_res8 = FVar4;
    puVar5 = GetKeyRawData(this,param_1);
    this_01.field0_0x0 =
         (TObjectPtr<UBlackboardKeyType>_u_0)
         ((TObjectPtr<UBlackboardKeyType>_u_0 *)((longlong)FVar4 + 8))->DebugPtr;
    if ((this_01.field0_0x0 == (UBlackboardKeyType *)0x0) || (puVar5 == (uchar *)0x0)) {
      FVar9.Data = (FScriptContainerElement *)L"empty";
    }
    else {
      if ((*(byte *)((longlong)this_01.field0_0x0 + 0x2b) & 2) == 0) {
        (**(code **)(*(longlong *)this_01.field0_0x0 + 0x330))
                  (this_01.field0_0x0,&local_88,this,puVar5);
      }
      else {
        pUVar6 = UBlackboardKeyType::GetKeyInstance
                           ((UBlackboardKeyType *)this_01.field0_0x0,this,puVar5);
        (**(code **)(pUVar6->_padding_ + 0x330))(pUVar6,&local_88,this,puVar5 + 4);
      }
      bVar3 = true;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    ::FString::FString(&local_78,(wchar_t *)FVar9.Data);
    if ((bVar3) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (param_2 == OnlyValue) {
      iVar11 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AssignRange
                (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar11);
    }
    else {
      if (param_2 == KeyWithValue) {
        ::FName::ToString((FName *)local_res8,&local_48);
        ::FString::PrintfImpl(&local_b8,L"%s: %s");
        if (__return_storage_ptr__ != &local_b8) {
          pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_b8.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_b8.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_b8.Data.ArrayMax;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        }
      }
      else {
        pUVar7 = UBlackboardKeyType::StaticClass();
        local_res10 = (FName)pUVar7->_padding_;
        ::FName::ToString(&local_res10,&local_58);
        pFVar8 = ::FString::AppendChar(&local_58,L'_');
        ::FString::FString(&local_68,pFVar8);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar4 = local_res8;
        if (((TObjectPtr<UBlackboardKeyType>_u_0 *)((longlong)local_res8 + 8))->DebugPtr ==
            (UBlackboardKeyType *)0x0) {
          bVar2 = false;
          bVar3 = true;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          pFVar8 = &local_58;
          FVar9.Data = (FScriptContainerElement *)0x0;
        }
        else {
          lVar10 = *(longlong *)
                    ((longlong)
                     ((TObjectPtr<UBlackboardKeyType>_u_0 *)((longlong)local_res8 + 8))->DebugPtr +
                    0x10);
          bVar2 = true;
          bVar3 = false;
          if (lVar10 == 0) {
            ::FString::FString(&local_98,L"None");
            pFVar8 = &local_98;
            FVar9.Data = local_98.Data.AllocatorInstance.Data;
          }
          else {
            local_res8 = *(FName *)(lVar10 + 0x18);
            ::FName::ToString(&local_res8,&local_98);
            pFVar8 = &local_98;
            FVar9.Data = local_98.Data.AllocatorInstance.Data;
          }
        }
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.AllocatorInstance.Data = FVar9.Data;
        local_88.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_88.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
        if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((bVar2) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar9.Data = local_68.Data.AllocatorInstance.Data;
        }
        iVar11 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar11 = 0;
        }
        bVar3 = ::FString::StartsWith(&local_88,(wchar_t *)FVar9.Data,iVar11,IgnoreCase);
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
        if (bVar3) {
          iVar11 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          pFVar8 = ::FString::RightChop(&local_88,&local_58,iVar11);
          bVar2 = true;
          bVar3 = false;
        }
        else {
          lVar10 = (longlong)local_88.Data.ArrayNum;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = local_88.Data.ArrayNum;
          if (local_88.Data.ArrayNum == 0) {
            local_98.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                       local_88.Data.ArrayNum,&local_98.Data.ArrayMax);
            memcpy(local_98.Data.AllocatorInstance.Data,FVar9.Data,lVar10 * 2);
          }
          pFVar8 = &local_98;
          bVar2 = false;
          bVar3 = true;
        }
        ::FString::FString(&local_48,pFVar8);
        if ((bVar3) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        ::FName::ToString((FName *)FVar4,&local_58);
        ::FString::PrintfImpl(&local_a8,L"%s [%s]: %s");
        if (__return_storage_ptr__ != &local_a8) {
          pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_a8.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_a8.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_a8.Data.ArrayMax;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// DescribeSelfToVisLog @ 146edd5d0

/* WARNING: Removing unreachable block (ram,0x000146edda55) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::DescribeSelfToVisLog(UBlackboardComponent *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  UBlackboardData *pUVar2;
  FName this_00;
  FVisualLogStatusCategory *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UBlackboardKeyType *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FName *this_01;
  undefined1 local_res8 [8];
  FVisualLogEntry *local_res10;
  uint local_res18;
  longlong local_res20;
  FString local_f8;
  FVisualLogStatusCategory local_e8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  wchar_t *local_80;
  int local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  local_res18 = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_res10 = param_1;
  ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_e8.Category);
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  local_e8.UniqueId = -1;
  local_e8.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Children.ArrayNum = 0;
  local_e8.Children.ArrayMax = 0;
  if (pUVar2 == (UBlackboardData *)0x0) {
    ::FString::FString(&local_90,L"None");
  }
  else {
    local_70 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_70,&local_90);
  }
  ::FString::PrintfImpl(&local_a0,L"Blackboard (asset: %s)");
  if (local_e8.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Category.Data.AllocatorInstance.Data);
  }
  local_e8.Category.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
  local_e8.Category.Data.ArrayNum = local_a0.Data.ArrayNum;
  local_e8.Category.Data.ArrayMax = local_a0.Data.ArrayMax;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if ((this->ValueMemory).ArrayNum != 0) {
    for (pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr; pUVar2 != (UBlackboardData *)0x0;
        pUVar2 = (pUVar2->Parent).field0_0x0.DebugPtr) {
      uVar14 = 0;
      if (0 < (pUVar2->Keys).ArrayNum) {
        local_res20 = 0;
        do {
          lVar12 = local_res20;
          uVar10 = 0;
          if ((int)uVar14 < (pUVar2->Keys).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          this_01 = (FName *)((pUVar2->Keys).AllocatorInstance.Data + lVar12);
          uVar10 = (pUVar2->FirstKeyID).Key + uVar14;
          uVar13 = uVar10 & 0xffff;
          if (((uVar10 != uVar13) || ((int)uVar10 < 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((short)uVar10 == -1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FBlackboard::FKey(OffsetKey) != FBlackboard::InvalidKey",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                                 ,0x26c,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((uVar10 != uVar13) || ((int)uVar10 < 0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((this->ValueMemory).ArrayNum == 0) || ((this->ValueOffsets).ArrayNum <= (int)uVar13))
          {
            pFVar11 = (FScriptContainerElement *)0x0;
          }
          else {
            if (((this->ValueOffsets).ArrayNum <= (int)uVar13) &&
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
            pFVar11 = (this->ValueMemory).AllocatorInstance.Data +
                      *(ushort *)
                       ((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)uVar13 * 2);
          }
          this_00 = this_01[1];
          if (this_00 == (FName)0x0) {
            pwVar9 = L"empty";
            uVar10 = local_res18;
          }
          else {
            uVar10 = local_res18 | 1;
            local_res18 = uVar10;
            if ((*(byte *)((longlong)this_00 + 0x2b) & 2) == 0) {
              (**(code **)(*(longlong *)this_00 + 0x330))(this_00,&local_80,this);
            }
            else {
              pUVar7 = UBlackboardKeyType::GetKeyInstance
                                 ((UBlackboardKeyType *)this_00,this,(uchar *)pFVar11);
              (**(code **)(pUVar7->_padding_ + 0x330))(pUVar7,&local_80,this);
            }
            pwVar9 = L"";
            if (local_78 != 0) {
              pwVar9 = local_80;
            }
          }
          ::FString::FString(&local_68,pwVar9);
          if (((uVar10 & 1) != 0) && (local_res18 = uVar10 & 0xfffffffe, local_80 != (wchar_t *)0x0)
             ) {
            FMemory::Free(local_80);
          }
          pFVar8 = ::FName::ToString(this_01,&local_58);
          local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.Data.ArrayNum = (pFVar8->Data).ArrayNum;
          lVar12 = (longlong)local_b0.Data.ArrayNum;
          pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
          if (local_b0.Data.ArrayNum == 0) {
            local_b0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,
                       local_b0.Data.ArrayNum,&local_b0.Data.ArrayMax);
            memcpy(local_b0.Data.AllocatorInstance.Data,pFVar11,lVar12 * 2);
          }
          pFVar8 = ::FString::AppendChar(&local_b0,L'|');
          ::FString::ConcatFF(&local_f8,pFVar8,&local_68);
          if (((local_e8.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               local_e8.Data.AllocatorInstance.Data + (longlong)local_e8.Data.ArrayMax * 0x10)) &&
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
          iVar6 = local_e8.Data.ArrayNum;
          if (local_e8.Data.ArrayNum == local_e8.Data.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)&local_e8,&local_e8.Data.ArrayMax);
          }
          local_e8.Data.ArrayNum = iVar6 + 1;
          lVar12 = (longlong)iVar6;
          *(undefined8 *)(local_e8.Data.AllocatorInstance.Data + lVar12 * 0x10) = 0;
          *(FScriptContainerElement **)(local_e8.Data.AllocatorInstance.Data + lVar12 * 0x10) =
               local_f8.Data.AllocatorInstance.Data;
          *(int *)(local_e8.Data.AllocatorInstance.Data + lVar12 * 0x10 + 8) =
               local_f8.Data.ArrayNum;
          *(int *)(local_e8.Data.AllocatorInstance.Data + lVar12 * 0x10 + 0xc) =
               local_f8.Data.ArrayMax;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          uVar14 = uVar14 + 1;
          local_res20 = local_res20 + 0x18;
        } while ((int)uVar14 < (pUVar2->Keys).ArrayNum);
      }
      param_1 = local_res10;
    }
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_e8.Data.AllocatorInstance.Data,local_e8.Data.ArrayNum,
               local_res10._0_1_,(TLess<void> *)local_res8);
  }
  pFVar3 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
  if (((pFVar3 <= &local_e8) && (&local_e8 < pFVar3 + (param_1->Status).ArrayMax)) &&
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
  iVar6 = (param_1->Status).ArrayNum;
  piVar1 = &(param_1->Status).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(param_1->Status).AllocatorInstance,piVar1);
  }
  (param_1->Status).ArrayNum = iVar6 + 1;
  FVisualLogStatusCategory::FVisualLogStatusCategory
            ((FVisualLogStatusCategory *)
             ((param_1->Status).AllocatorInstance.Data + (longlong)iVar6 * 0x38),&local_e8);
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)local_e8.Children.AllocatorInstance.Data,
             local_e8.Children.ArrayNum);
  if ((FVisualLogStatusCategory *)local_e8.Children.AllocatorInstance.Data !=
      (FVisualLogStatusCategory *)0x0) {
    FMemory::Free(local_e8.Children.AllocatorInstance.Data);
  }
  if (local_e8.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Category.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e8.Data.AllocatorInstance.Data,local_e8.Data.ArrayNum)
  ;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// DestroyValues @ 146ede680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::DestroyValues(UBlackboardComponent *this)

{
  UBlackboardData *pUVar1;
  code *pcVar2;
  bool bVar3;
  UBlackboardKeyType *pUVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  do {
    if (pUVar1 == (UBlackboardData *)0x0) {
      (this->ValueOffsets).ArrayNum = 0;
      if ((this->ValueOffsets).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,&(this->ValueOffsets).AllocatorInstance,0,&(this->ValueOffsets).ArrayMax);
      }
      (this->ValueMemory).ArrayNum = 0;
      if ((this->ValueMemory).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->ValueMemory).AllocatorInstance,0,&(this->ValueMemory).ArrayMax);
      }
      return;
    }
    uVar9 = 0;
    if (0 < (pUVar1->Keys).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (pUVar1->Keys).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar4 = *(UBlackboardKeyType **)((pUVar1->Keys).AllocatorInstance.Data + lVar8 + 8);
        if (pUVar4 != (UBlackboardKeyType *)0x0) {
          uVar5 = (pUVar1->FirstKeyID).Key + uVar9;
          uVar7 = uVar5 & 0xffff;
          if (((uVar5 != uVar7) || ((int)uVar5 < 0)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((short)uVar5 == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("FBlackboard::FKey(OffsetKey) != FBlackboard::InvalidKey",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                                 ,0xd7,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((uVar5 != uVar7) || ((int)uVar5 < 0)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((this->ValueMemory).ArrayNum == 0) || ((this->ValueOffsets).ArrayNum <= (int)uVar7))
          {
            pFVar6 = (FScriptContainerElement *)0x0;
          }
          else {
            if (((this->ValueOffsets).ArrayNum <= (int)uVar7) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar6 = (this->ValueMemory).AllocatorInstance.Data +
                     *(ushort *)((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)uVar7 * 2)
            ;
          }
          if (pUVar4->bCreateKeyInstance == '\0') {
            (**(code **)(pUVar4->_padding_ + 0x2f0))();
          }
          else {
            pUVar4 = UBlackboardKeyType::GetKeyInstance(pUVar4,this,(uchar *)pFVar6);
            (**(code **)(pUVar4->_padding_ + 0x2f0))(pUVar4,this);
          }
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x18;
      } while ((int)uVar9 < (pUVar1->Keys).ArrayNum);
    }
    pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr;
  } while( true );
}

// GetBlackboardAsset @ 146ee3ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardData * __thiscall UBlackboardComponent::GetBlackboardAsset(UBlackboardComponent *this)

{
  return (this->BlackboardAsset).field0_0x0.DebugPtr;
}

// GetBrainComponent @ 146ee4850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrainComponent * __thiscall UBlackboardComponent::GetBrainComponent(UBlackboardComponent *this)

{
  return (this->BrainComp).field0_0x0.DebugPtr;
}

// GetDebugInfoString @ 146ee5010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::GetDebugInfoString
          (UBlackboardComponent *this,FString *__return_storage_ptr__,Type param_1)

{
  UBlackboardData *pUVar1;
  code *pcVar2;
  Type TVar3;
  bool bVar4;
  FKey FVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FBlackboardEntry *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  ForAnyElementType FVar15;
  FName FVar16;
  int iVar17;
  FName FVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FString *local_res10;
  Type local_res18;
  undefined1 local_res20 [8];
  FName local_b8;
  FName local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TArray<FBlackboard::FKey,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  if (pUVar1 == (UBlackboardData *)0x0) {
    ::FString::FString(&local_88,L"None");
  }
  else {
    local_b8 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_b8,&local_88);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"Blackboard (asset: %s)\n");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  TVar3 = local_res18;
  pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  uVar19 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  do {
    if (pUVar1 == (UBlackboardData *)0x0) {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_a8.Data,(int)local_a0,(FIdentityFunctor)(undefined1)local_res18,
                 (TLess<void> *)local_res8);
      FVar18.ComparisonIndex.Value = 0;
      FVar18.Number = 0;
      FVar14 = FVar18;
      FVar16 = FVar18;
      if (0 < (int)local_a0) {
        do {
          ::FString::AppendChars(__return_storage_ptr__,L"  ",2);
          FVar13 = FVar14.ComparisonIndex.Value;
          uVar19 = 0;
          if ((int)FVar13.Value < (int)local_a0) {
            uVar19 = ~FVar13.Value >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FString *)(*pcVar2)();
            return pFVar7;
          }
          uVar19 = *(int *)(local_a8.Data + (longlong)FVar16 + 8) - 1;
          if (*(int *)(local_a8.Data + (longlong)FVar16 + 8) == 0) {
            uVar19 = 0;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,*(wchar_t **)(local_a8.Data + (longlong)FVar16),uVar19);
          ::FString::AppendChar(__return_storage_ptr__,L'\n');
          FVar14.ComparisonIndex.Value = FVar13.Value + 1;
          FVar14.Number = 0;
          FVar16 = (FName)((longlong)FVar16 + 0x10);
        } while ((int)FVar14.ComparisonIndex.Value < (int)local_a0);
      }
      if ((param_1 == Full) &&
         ((this->BlackboardAsset).field0_0x0.DebugPtr != (UBlackboardData *)0x0)) {
        ::FString::AppendChars(__return_storage_ptr__,L"Observed Keys:\n",0xf);
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
        if (*(int *)&(this->Observers).field_0x8 - *(int *)&(this->Observers).field_0x34 < 1) {
          ::FString::AppendChars(__return_storage_ptr__,L"  NONE\n",7);
        }
        else {
          TMapBase<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
          ::GetKeys<TSizedDefaultAllocator<32>_>
                    ((TMapBase<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
                      *)&this->Observers,&local_98);
          iVar6 = local_98.ArrayNum;
          uVar11 = (ulonglong)local_98.ArrayNum;
          pFVar8 = local_98.AllocatorInstance.Data + uVar11 * 2;
          FVar15.Data = local_98.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar11 != iVar6) {
              `TCheckedPointerIterator<FBlackboard::FKey,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if (FVar15.Data == pFVar8) break;
            pFVar9 = UBlackboardData::GetKey
                               ((this->BlackboardAsset).field0_0x0.DebugPtr,
                                (FKey)*(ushort *)FVar15.Data);
            local_b0 = FVar18;
            if (pFVar9 != (FBlackboardEntry *)0x0) {
              local_b0 = pFVar9->EntryName;
            }
            ::FName::ToString(&local_b0,&local_58);
            ::FString::PrintfImpl(&local_78,L"  %s:\n");
            iVar17 = local_78.Data.ArrayNum + -1;
            if (local_78.Data.ArrayNum == 0) {
              iVar17 = 0;
            }
            ::FString::AppendChars
                      (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar17
                      );
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            uVar11 = local_98._8_8_ & 0xffffffff;
            FVar15.Data = FVar15.Data + 2;
          }
        }
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
      }
      DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      return __return_storage_ptr__;
    }
    iVar6 = (pUVar1->Keys).ArrayNum;
    if (0 < iVar6) {
      uVar12 = uVar19;
      do {
        FVar5.Key = (short)-uVar19 + (short)uVar19 + (short)uVar12;
        if (((uVar12 != FVar5.Key) || ((int)uVar12 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
        if ((FVar5.Key == 0xffff) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FBlackboard::FKey(OffsetKey) != FBlackboard::InvalidKey",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                               ,0x210,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
        if (((uVar12 != FVar5.Key) || ((int)uVar12 < 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
        pFVar8 = (FScriptContainerElement *)DescribeKeyValue(this,&local_68,FVar5,TVar3);
        if (((local_a8.Data <= pFVar8) && (pFVar8 < local_a8.Data + (longlong)local_a0._4_4_ * 0x10)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
        iVar6 = (int)local_a0;
        if ((int)local_a0 == local_a0._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar6 + 1);
        pFVar10 = local_a8.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)pFVar10 = *(undefined8 *)pFVar8;
        *(undefined8 *)pFVar8 = 0;
        *(int *)(pFVar10 + 8) = *(int *)(pFVar8 + 8);
        *(int *)(pFVar10 + 0xc) = *(int *)(pFVar8 + 0xc);
        *(undefined8 *)(pFVar8 + 8) = 0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        iVar6 = (pUVar1->Keys).ArrayNum;
        uVar12 = uVar12 + 1;
      } while ((int)(-uVar19 + uVar12) < iVar6);
    }
    pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr;
    uVar19 = uVar19 + iVar6;
    __return_storage_ptr__ = local_res10;
    param_1 = local_res18;
  } while( true );
}

// GetKeyID @ 146ee5bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FKey __thiscall UBlackboardComponent::GetKeyID(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  EKeyLookupMode in_R8D;
  FName local_res8 [4];
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,local_res8,in_R8D);
    *(undefined2 *)&(param_1->ComparisonIndex).Value =
         (undefined2)local_res8[0].ComparisonIndex.Value;
    return (FKey)(ushort)param_1;
  }
  *(undefined2 *)&(param_1->ComparisonIndex).Value = 0xffff;
  return (FKey)(ushort)param_1;
}

// GetKeyName @ 146ee5e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall UBlackboardComponent::GetKeyName(UBlackboardComponent *this,FKey param_1)

{
  UBlackboardData *this_00;
  FBlackboardEntry *pFVar1;
  undefined6 in_register_00000012;
  FName FVar2;
  FKey in_R8W;
  
  FVar2._2_6_ = in_register_00000012;
  FVar2.ComparisonIndex.Value._0_2_ = param_1.Key;
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    *(FName *)FVar2 = (FName)0x0;
    return FVar2;
  }
  pFVar1 = UBlackboardData::GetKey(this_00,in_R8W);
  if (pFVar1 != (FBlackboardEntry *)0x0) {
    *(FName *)FVar2 = pFVar1->EntryName;
    return FVar2;
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// GetKeyRawData @ 146ee5ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar * __thiscall UBlackboardComponent::GetKeyRawData(UBlackboardComponent *this,FKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (((this->ValueMemory).ArrayNum != 0) &&
     ((int)(uint)param_1.Key < (this->ValueOffsets).ArrayNum)) {
    if ((this->ValueOffsets).ArrayNum <= (int)(uint)param_1.Key) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar3 = (uchar *)(*pcVar1)();
        return puVar3;
      }
    }
    return (uchar *)((this->ValueMemory).AllocatorInstance.Data +
                    *(ushort *)
                     ((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)param_1.Key * 2));
  }
  return (uchar *)0x0;
}

// GetKeyType @ 146ee5f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSubclassOf<UBlackboardKeyType> __thiscall
UBlackboardComponent::GetKeyType(UBlackboardComponent *this,FKey param_1)

{
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar1;
  FBlackboardEntry *pFVar2;
  undefined6 in_register_00000012;
  TObjectPtr<UClass> TVar3;
  UObject *pUVar4;
  FKey in_R8W;
  
  TVar3.field0_0x0._2_6_ = in_register_00000012;
  TVar3.field0_0x0._0_2_ = param_1.Key;
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    pUVar4 = (UObject *)0x0;
  }
  else {
    pFVar2 = UBlackboardData::GetKey(this_00,in_R8W);
    if ((pFVar2 == (FBlackboardEntry *)0x0) ||
       (pUVar1 = (pFVar2->KeyType).field0_0x0.DebugPtr, pUVar1 == (UBlackboardKeyType *)0x0)) {
      pUVar4 = (UObject *)0x0;
    }
    else {
      pUVar4 = (UObject *)pUVar1->_padding_;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
  }
  *(UObject **)TVar3.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  return (TSubclassOf<UBlackboardKeyType>)TVar3.field0_0x0;
}

// GetLocationFromEntry @ 146ee61a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetLocationFromEntry
          (UBlackboardComponent *this,FName *param_1,TVector<double> *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = GetLocationFromEntry(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// GetLocationFromEntry @ 146ee6200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetLocationFromEntry
          (UBlackboardComponent *this,FKey param_1,TVector<double> *param_2)

{
  UBlackboardData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FBlackboardEntry *pFVar4;
  UBlackboardKeyType *pUVar5;
  FScriptContainerElement *pFVar6;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       ((int)(uint)param_1.Key < (this->ValueOffsets).ArrayNum)) &&
      (pFVar4 = UBlackboardData::GetKey(this_00,param_1), pFVar4 != (FBlackboardEntry *)0x0)) &&
     ((pFVar4->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
    if (((this->ValueOffsets).ArrayNum <= (int)(uint)param_1.Key) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar5 = (pFVar4->KeyType).field0_0x0.DebugPtr;
    pFVar6 = (this->ValueMemory).AllocatorInstance.Data +
             *(ushort *)((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)param_1.Key * 2);
    if (pUVar5->bCreateKeyInstance != '\0') {
      pUVar5 = UBlackboardKeyType::GetKeyInstance(pUVar5,this,(uchar *)pFVar6);
      uVar3 = (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5,this,pFVar6 + 4,param_2);
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(pUVar5->_padding_ + 0x2f8))();
    return (bool)uVar3;
  }
  return false;
}

// GetNumKeys @ 146ee6a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall UBlackboardComponent::GetNumKeys(UBlackboardComponent *this)

{
  UBlackboardData *pUVar1;
  
  pUVar1 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UBlackboardData *)0x0) {
    return (uint)(pUVar1->FirstKeyID).Key + (pUVar1->Keys).ArrayNum;
  }
  return 0;
}

// GetPrivateStaticClass @ 146ee9b90

UClass * __cdecl UBlackboardComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardComponent",
               &Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton,
               StaticRegisterNativesUBlackboardComponent,0x1c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardComponent>,
               InternalVTableHelperCtorCaller<UBlackboardComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardComponent.InnerSingleton;
}

// GetRotationFromEntry @ 146eea9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetRotationFromEntry
          (UBlackboardComponent *this,FName *param_1,TRotator<double> *param_2)

{
  UBlackboardData *this_00;
  bool bVar1;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  bVar1 = GetRotationFromEntry(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return bVar1;
}

// GetRotationFromEntry @ 146eeaa50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::GetRotationFromEntry
          (UBlackboardComponent *this,FKey param_1,TRotator<double> *param_2)

{
  UBlackboardData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FBlackboardEntry *pFVar4;
  UBlackboardKeyType *pUVar5;
  FScriptContainerElement *pFVar6;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((((this_00 != (UBlackboardData *)0x0) &&
       ((int)(uint)param_1.Key < (this->ValueOffsets).ArrayNum)) &&
      (pFVar4 = UBlackboardData::GetKey(this_00,param_1), pFVar4 != (FBlackboardEntry *)0x0)) &&
     ((pFVar4->KeyType).field0_0x0.DebugPtr != (UBlackboardKeyType *)0x0)) {
    if (((this->ValueOffsets).ArrayNum <= (int)(uint)param_1.Key) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar5 = (pFVar4->KeyType).field0_0x0.DebugPtr;
    pFVar6 = (this->ValueMemory).AllocatorInstance.Data +
             *(ushort *)((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)param_1.Key * 2);
    if (pUVar5->bCreateKeyInstance != '\0') {
      pUVar5 = UBlackboardKeyType::GetKeyInstance(pUVar5,this,(uchar *)pFVar6);
      uVar3 = (**(code **)(pUVar5->_padding_ + 0x300))(pUVar5,this,pFVar6 + 4,param_2);
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(pUVar5->_padding_ + 0x300))();
    return (bool)uVar3;
  }
  return false;
}

// GetValueAsBool @ 146eefed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBlackboardComponent::GetValueAsBool(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  bool bVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    bVar1 = GetValue<UBlackboardKeyType_Bool>(this,local_res8);
    return bVar1;
  }
  bVar1 = GetValue<UBlackboardKeyType_Bool>(this,(FKey)0xffff);
  return bVar1;
}

// GetValueAsClass @ 146eeff20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall UBlackboardComponent::GetValueAsClass(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  UClass *pUVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    pUVar1 = GetValue<UBlackboardKeyType_Class>(this,local_res8);
    return pUVar1;
  }
  pUVar1 = GetValue<UBlackboardKeyType_Class>(this,(FKey)0xffff);
  return pUVar1;
}

// GetValueAsEnum @ 146eeff70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall UBlackboardComponent::GetValueAsEnum(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  uchar uVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    uVar1 = GetValue<UBlackboardKeyType_Enum>(this,local_res8);
    return uVar1;
  }
  uVar1 = GetValue<UBlackboardKeyType_Enum>(this,(FKey)0xffff);
  return uVar1;
}

// GetValueAsFloat @ 146eeffc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall UBlackboardComponent::GetValueAsFloat(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  float fVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    fVar1 = GetValue<UBlackboardKeyType_Float>(this,local_res8);
    return fVar1;
  }
  fVar1 = GetValue<UBlackboardKeyType_Float>(this,(FKey)0xffff);
  return fVar1;
}

// GetValueAsInt @ 146ef0010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall UBlackboardComponent::GetValueAsInt(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  int iVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    iVar1 = GetValue<UBlackboardKeyType_Int>(this,local_res8);
    return iVar1;
  }
  iVar1 = GetValue<UBlackboardKeyType_Int>(this,(FKey)0xffff);
  return iVar1;
}

// GetValueAsName @ 146ef0060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall UBlackboardComponent::GetValueAsName(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  EKeyLookupMode in_R8D;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,in_R8D);
  }
  GetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)param_1);
  return (FName)param_1;
}

// GetValueAsObject @ 146ef00c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
UBlackboardComponent::GetValueAsObject(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  UObject *pUVar1;
  FKey local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(EKeyLookupMode)param_1);
    pUVar1 = GetValue<UBlackboardKeyType_Object>(this,local_res8);
    return pUVar1;
  }
  pUVar1 = GetValue<UBlackboardKeyType_Object>(this,(FKey)0xffff);
  return pUVar1;
}

// GetValueAsRotator @ 146ef0110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
UBlackboardComponent::GetValueAsRotator
          (UBlackboardComponent *this,TRotator<double> *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_Rotator>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// GetValueAsString @ 146ef0170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBlackboardComponent::GetValueAsString
          (UBlackboardComponent *this,FString *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_String>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// GetValueAsVector @ 146ef01d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
UBlackboardComponent::GetValueAsVector
          (UBlackboardComponent *this,TVector<double> *__return_storage_ptr__,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_Vector>
            (this,__return_storage_ptr__,local_res8.ComparisonIndex.Value._0_2_);
  return __return_storage_ptr__;
}

// InitializeBlackboard @ 146ef1030

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::InitializeBlackboard(UBlackboardComponent *this,UBlackboardData *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UBlackboardKeyType>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  ushort uVar4;
  FKey FVar5;
  UBlackboardData *pUVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 uVar10;
  int iVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  FBlackboardEntry *pFVar14;
  uint *puVar15;
  TObjectPtr<UBlackboardKeyType>_u_0 TVar16;
  ulonglong uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  UAISystem *this_00;
  ulonglong uVar21;
  TObjectPtr<UBlackboardKeyType>_u_0 *pTVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  bool bVar26;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  FName local_res18;
  int *local_res20;
  FBlackboardInitializationData local_98 [2];
  int *local_90;
  FName local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  FString local_70;
  UBlackboardComponent *local_60;
  ForAnyElementType *local_58;
  
  pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar6 == (UBlackboardData *)0x0) {
    bVar26 = param_1 == (UBlackboardData *)0x0;
  }
  else {
    bVar26 = pUVar6 == param_1;
  }
  if (bVar26) {
    return true;
  }
  pUVar12 = (UWorld *)this->_padding_;
  if ((pUVar12 == (UWorld *)0x0) &&
     (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar12 == (UWorld *)0x0)) {
    return false;
  }
  this_00 = (UAISystem *)(pUVar12->AISystem).field0_0x0.DebugPtr;
  if (this_00 != (UAISystem *)0x0) {
    pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar13->_padding_)) goto LAB_146ef10d3;
  }
  this_00 = (UAISystem *)0x0;
LAB_146ef10d3:
  if (this_00 == (UAISystem *)0x0) {
    return false;
  }
  pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((pUVar6 != (UBlackboardData *)0x0) && (pUVar6->bHasSynchronizedKeys != 0)) {
    UAISystem::UnregisterBlackboardComponent(this_00,pUVar6,this);
    DestroyValues(this);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20 = &(this->ValueMemory).ArrayMax;
  (this->BlackboardAsset).field0_0x0.DebugPtr = param_1;
  local_90 = &(this->ValueMemory).ArrayNum;
  *local_90 = 0;
  if (*local_res20 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ValueMemory).AllocatorInstance,0,local_res20);
  }
  pTVar1 = &this->ValueOffsets;
  piVar3 = &(this->ValueOffsets).ArrayMax;
  (this->ValueOffsets).ArrayNum = 0;
  if ((this->ValueOffsets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  this->bSynchronizedKeyPopulated = 0;
  bVar26 = UBlackboardData::IsValid(pUVar6);
  if (!bVar26) {
    if ((byte)LogBlackboard._0_1_ < 2) {
      return false;
    }
    pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar6 == (UBlackboardData *)0x0) {
      ::FString::FString(&local_70,L"None");
    }
    else {
      local_88 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_88,&local_70);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlackboard);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
      return false;
    }
    return false;
  }
  pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (pUVar6 != (UBlackboardData *)0x0) {
    InitializeParentChain(this,(pUVar6->Parent).field0_0x0.DebugPtr);
    UBlackboardData::UpdateKeyIDs(pUVar6);
  }
  pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  uVar20 = (uint)(pUVar6->FirstKeyID).Key + (pUVar6->Keys).ArrayNum;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (0 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,2,uVar20,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,uVar20,&pTVar1->AllocatorInstance,&(this->ValueOffsets).ArrayNum,piVar3);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 2,0,(longlong)(int)uVar20 * 2);
  for (pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr; pUVar6 != (UBlackboardData *)0x0;
      pUVar6 = (pUVar6->Parent).field0_0x0.DebugPtr) {
    uVar20 = 0;
    if (0 < (pUVar6->Keys).ArrayNum) {
      lVar25 = 0;
      do {
        uVar24 = 0;
        if ((int)uVar20 < (pUVar6->Keys).ArrayNum) {
          uVar24 = ~uVar20 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar10 = (*pcVar9)();
          return (bool)uVar10;
        }
        plVar7 = *(longlong **)((pUVar6->Keys).AllocatorInstance.Data + lVar25 + 8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x2b0))(plVar7,this);
          uVar19 = (ushort)(*(byte *)((longlong)plVar7 + 0x2b) >> 1 & 1) * 4 + (short)plVar7[5];
          uVar24 = (pUVar6->FirstKeyID).Key + uVar20;
          if (((uVar24 != (uVar24 & 0xffff)) || ((int)uVar24 < 0)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          if (((ushort)uVar24 == 0xffff) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FBlackboard::FKey(OffsetKey) != FBlackboard::InvalidKey",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                                  ,0x9f,L""), bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          if (((uVar24 != (uVar24 & 0xffff)) || ((int)uVar24 < 0)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          if (2 < uVar19) {
            uVar19 = uVar19 + 3 & 0xfffc;
          }
          local_98[0].DataSize = uVar19;
          local_98[0].KeyID.Key = (ushort)uVar24;
          if (((local_80.Data <= local_98) &&
              (local_98 <
               (FBlackboardInitializationData *)(local_80.Data + (longlong)local_78._4_4_ * 4))) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          iVar11 = (int)local_78;
          if ((int)local_78 == local_78._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x204,&local_80,(int *)((longlong)&local_78 + 4));
          }
          local_78 = CONCAT44(local_78._4_4_,iVar11 + 1);
          *(FBlackboardInitializationData *)(local_80.Data + (longlong)iVar11 * 4) = local_98[0];
        }
        uVar20 = uVar20 + 1;
        lVar25 = lVar25 + 0x18;
      } while ((int)uVar20 < (pUVar6->Keys).ArrayNum);
    }
  }
  uVar21 = 0;
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FBlackboardInitializationData,int,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>
            ((FBlackboardInitializationData *)local_80.Data,(int)local_78,local_res8,
             (FMemorySort *)local_res10);
  uVar17 = local_78 & 0xffffffff;
  uVar19 = 0;
  uVar23 = uVar21;
  if (0 < (int)local_78) {
    do {
      uVar24 = (uint)uVar21;
      uVar20 = 0;
      if ((int)uVar24 < (int)uVar17) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar9 = (code *)swi(3);
        uVar10 = (*pcVar9)();
        return (bool)uVar10;
      }
      uVar4 = *(ushort *)(local_80.Data + uVar23);
      if (((this->ValueOffsets).ArrayNum <= (int)(uint)uVar4) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar9 = (code *)swi(3);
        uVar10 = (*pcVar9)();
        return (bool)uVar10;
      }
      *(ushort *)((this->ValueOffsets).AllocatorInstance.Data + (ulonglong)uVar4 * 2) = uVar19;
      uVar17 = (ulonglong)(int)local_78;
      uVar20 = 0;
      if ((int)uVar24 < (int)local_78) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar9 = (code *)swi(3);
          uVar10 = (*pcVar9)();
          return (bool)uVar10;
        }
        uVar17 = local_78 & 0xffffffff;
      }
      uVar21 = (ulonglong)(uVar24 + 1);
      uVar19 = uVar19 + *(short *)(local_80.Data + uVar23 + 2);
      uVar23 = uVar23 + 4;
    } while ((int)(uVar24 + 1) < (int)uVar17);
  }
  uVar17 = 0;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,(uint)uVar19,&(this->ValueMemory).AllocatorInstance,local_90,local_res20);
  memset((this->ValueMemory).AllocatorInstance.Data + iVar11,0,(ulonglong)(uint)uVar19);
  lVar25 = (longlong)(int)local_78;
  pTVar2 = &this->KeyInstances;
  piVar3 = &(this->KeyInstances).ArrayNum;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,(int)local_78,&pTVar2->AllocatorInstance,piVar3,
                      &(this->KeyInstances).ArrayMax);
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8,0,lVar25 << 3);
  uVar23 = uVar17;
  if (0 < (int)local_78) {
    do {
      pUVar6 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      uVar24 = (uint)uVar17;
      uVar20 = 0;
      if ((int)uVar24 < (int)local_78) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar9 = (code *)swi(3);
        uVar10 = (*pcVar9)();
        return (bool)uVar10;
      }
      FVar5.Key = *(ushort *)(local_80.Data + uVar23);
      if (FVar5.Key == 0xffff) {
LAB_146ef1761:
        pTVar22 = (TObjectPtr<UBlackboardKeyType>_u_0 *)&DAT_00000008;
LAB_146ef1765:
        local_58 = &local_80;
        local_60 = this;
        bVar26 = `UBlackboardComponent::InitializeBlackboard'::__l33::<lambda_1>::operator()
                           (&local_60);
        if (bVar26) goto LAB_146ef1782;
      }
      else {
        uVar19 = (pUVar6->FirstKeyID).Key;
        if (FVar5.Key < uVar19) {
          pUVar6 = (pUVar6->Parent).field0_0x0.DebugPtr;
          if (pUVar6 == (UBlackboardData *)0x0) goto LAB_146ef1761;
          pFVar14 = UBlackboardData::GetKey(pUVar6,FVar5);
        }
        else {
          uVar18 = (uint)FVar5.Key - (uint)uVar19;
          uVar20 = 0;
          if ((int)uVar18 < (pUVar6->Keys).ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          pFVar14 = (FBlackboardEntry *)
                    ((pUVar6->Keys).AllocatorInstance.Data +
                    ((ulonglong)(uint)FVar5.Key - (ulonglong)(uint)uVar19) * 0x18);
        }
        if (pFVar14 == (FBlackboardEntry *)0x0) goto LAB_146ef1761;
        pTVar22 = &(pFVar14->KeyType).field0_0x0;
        if ((pFVar14->KeyType).field0_0x0.DebugPtr == (UBlackboardKeyType *)0x0) goto LAB_146ef1765;
LAB_146ef1782:
        TVar16 = (TObjectPtr<UBlackboardKeyType>_u_0)pTVar22->DebugPtr;
        uVar20 = 0;
        if ((int)uVar24 < (int)local_78) {
          uVar20 = ~uVar24 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar9 = (code *)swi(3);
          uVar10 = (*pcVar9)();
          return (bool)uVar10;
        }
        FVar5.Key = *(ushort *)(local_80.Data + uVar23);
        puVar15 = (uint *)GetKeyRawData(this,FVar5);
        if ((*(byte *)((longlong)TVar16 + 0x2b) & 2) != 0) {
          local_res18.ComparisonIndex.Value = 0;
          local_res18.Number = 0;
          pUVar13 = UBlackboardKeyType::StaticClass();
          TVar16.DebugPtr =
               (UBlackboardKeyType *)
               DuplicateObject_Internal(pUVar13,(UObject *)TVar16,(UObject *)this,local_res18);
          TVar16->bIsInstanced = '\x01';
          *puVar15 = (uint)FVar5.Key;
          if ((*piVar3 <= (int)(uint)FVar5.Key) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar9 = (code *)swi(3);
            uVar10 = (*pcVar9)();
            return (bool)uVar10;
          }
          pFVar8 = (pTVar2->AllocatorInstance).Data;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
          }
          ((TObjectPtr<UBlackboardKeyType>_u_0 *)(pFVar8 + (ulonglong)FVar5.Key * 8))->DebugPtr =
               (UBlackboardKeyType *)TVar16;
          puVar15 = puVar15 + 1;
        }
        (**(code **)((TVar16.DebugPtr)->_padding_ + 0x2e8))(TVar16.DebugPtr,this,puVar15);
      }
      uVar17 = (ulonglong)(uVar24 + 1);
      uVar23 = uVar23 + 4;
    } while ((int)(uVar24 + 1) < (int)local_78);
  }
  if (((this->BlackboardAsset).field0_0x0.DebugPtr)->bHasSynchronizedKeys != 0) {
    PopulateSynchronizedKeys(this);
  }
  if ((FBlackboardInitializationData *)local_80.Data != (FBlackboardInitializationData *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return true;
}

// InitializeComponent @ 146ef1990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::InitializeComponent(UBlackboardComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  UBlackboardData *pUVar3;
  UBlackboardData *pUVar4;
  UBrainComponent *this_00;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x738);
    local_res8 = (FName)Z_Construct_UClass_UBrainComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    this_00 = (UBrainComponent *)(*pcVar2)(plVar1,&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UBrainComponent *)0x0))
    {
      (this->BrainComp).field0_0x0.DebugPtr = this_00;
      if (this_00 == (UBrainComponent *)0x0) goto LAB_146ef1a20;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
      (this->BrainComp).field0_0x0.DebugPtr = this_00;
    }
    UBrainComponent::CacheBlackboardComponent(this_00,this);
  }
LAB_146ef1a20:
  pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if ((pUVar3 == (UBlackboardData *)0x0) &&
     (pUVar4 = (this->DefaultBlackboardAsset).field0_0x0.DebugPtr, pUVar4 != (UBlackboardData *)0x0)
     ) {
    InitializeBlackboard(this,pUVar4);
    return;
  }
  if (((FVisualLogger::bIsRecording != 0) && (pUVar3 != (UBlackboardData *)0x0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    pUVar3 = (this->DefaultBlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar3 == (UBlackboardData *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_18);
    }
    pUVar3 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (pUVar3 == (UBlackboardData *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogBlackboard.field_0x4,Log,
               L"InitializeComponent called while BlackboardAsset is not null (set to %s). Assuming it\'s been set via InitializeBlackboard prior to RegisterComponent call. Ignoring DefaultBlackboardAsset %s"
              );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeParentChain @ 146ef3280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::InitializeParentChain(UBlackboardComponent *this,UBlackboardData *param_1)

{
  if (param_1 != (UBlackboardData *)0x0) {
    InitializeParentChain(this,(param_1->Parent).field0_0x0.DebugPtr);
    UBlackboardData::UpdateKeyIDs(param_1);
  }
  return;
}

// IsCompatibleWith @ 146ef3a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::IsCompatibleWith(UBlackboardComponent *this,UBlackboardData *param_1)

{
  int iVar1;
  UBlackboardData *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  while( true ) {
    if (pUVar2 == (UBlackboardData *)0x0) {
      return false;
    }
    if ((pUVar2 == param_1) ||
       ((iVar1 = (pUVar2->Keys).ArrayNum, iVar1 == (param_1->Keys).ArrayNum &&
        (bVar3 = CompareItems<FBlackboardEntry,int>
                           ((FBlackboardEntry *)(pUVar2->Keys).AllocatorInstance.Data,
                            (FBlackboardEntry *)(param_1->Keys).AllocatorInstance.Data,iVar1), bVar3
        )))) break;
    pUVar2 = (pUVar2->Parent).field0_0x0.DebugPtr;
  }
  return true;
}

// IsKeyInstanceSynced @ 146ef3d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBlackboardComponent::IsKeyInstanceSynced(UBlackboardComponent *this,FKey param_1)

{
  UBlackboardData *this_00;
  FBlackboardEntry *pFVar1;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 != (UBlackboardData *)0x0) {
    pFVar1 = UBlackboardData::GetKey(this_00,param_1);
    if (pFVar1 != (FBlackboardEntry *)0x0) {
      return pFVar1->bInstanceSynced;
    }
  }
  return false;
}

// IsVectorValueSet @ 146ef4180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBlackboardComponent::IsVectorValueSet(UBlackboardComponent *this,FName *param_1)

{
  UBlackboardData *this_00;
  FName local_res8 [4];
  TVector<double>_u_0 local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8[0].ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,local_res8,(EKeyLookupMode)param_1);
  }
  GetValue<UBlackboardKeyType_Vector>
            (this,(TVector<double> *)&local_28._s_0,local_res8[0].ComparisonIndex.Value._0_2_);
  if (((local_28._s_0.X == __real_47efffffe0000000) && (local_28._s_0.Y == __real_47efffffe0000000))
     && (local_28._s_0.Z == __real_47efffffe0000000)) {
    return false;
  }
  return true;
}

// IsVectorValueSet @ 146ef4210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBlackboardComponent::IsVectorValueSet(UBlackboardComponent *this,FKey param_1)

{
  TVector<double>_u_0 local_28;
  
  GetValue<UBlackboardKeyType_Vector>(this,(TVector<double> *)&local_28._s_0,param_1);
  if (((local_28._s_0.X == __real_47efffffe0000000) && (local_28._s_0.Y == __real_47efffffe0000000))
     && (local_28._s_0.Z == __real_47efffffe0000000)) {
    return false;
  }
  return true;
}

// NotifyObservers @ 146ef4f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::NotifyObservers(UBlackboardComponent *this,FKey param_1)

{
  TMultiMap<UObject_const_*,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>_>
  *pTVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
  *this_00;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 local_res8 [8];
  FKey local_res10 [4];
  undefined1 local_e8 [12];
  uint uStack_dc;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  longlong local_c8;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  TIterator local_a8;
  TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  this_00 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
             *)&this->Observers;
  iVar10 = *(int *)&(this->Observers).field_0x48;
  unique0x00008e00 = local_res10;
  if (iVar10 == 0) {
    local_d8 = (undefined1  [8])0xffffffffffffffff;
    iVar10 = -1;
  }
  else {
    puVar12 = *(undefined1 **)&(this->Observers).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->Observers).field_0x38;
    }
    local_d8._0_4_ = *(undefined4 *)(puVar12 + ((longlong)iVar10 - 1U & (ulonglong)param_1.Key) * 4)
    ;
    local_d8._4_4_ = local_d8._0_4_;
    iVar10 = local_d8._0_4_;
    if (local_d8._0_4_ != -1) {
      do {
        iVar14 = *(int *)(*(longlong *)
                           &((TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
                              *)this_00)->field_0x0 + 0x20 + (longlong)iVar10 * 0x28);
        local_d8._4_4_ = iVar14;
        if (*(ushort *)
             (*(longlong *)
               &((TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
                  *)this_00)->field_0x0 + (longlong)iVar10 * 0x28) == param_1.Key) break;
        local_d8._0_4_ = iVar14;
        iVar10 = iVar14;
      } while (iVar14 != -1);
    }
  }
  local_a8._padding_._0_4_ = local_d8._0_4_;
  local_a8._padding_._4_4_ = local_d8._4_4_;
  if (iVar10 != -1) {
    local_res10[0].Key = param_1.Key;
    local_e8._0_8_ = this_00;
    local_a8._padding_ = (longlong)this_00;
    local_a8._padding_ = (longlong)unique0x00008e00;
    if (this->bPausedNotifies != 0) {
      TArray<FBlackboard::FKey,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FBlackboard::FKey_const_&>(&this->QueuedUpdates,local_res10);
      return;
    }
    this->NotifyObserversRecursionCount = this->NotifyObserversRecursionCount + 1;
    iVar13 = 1;
    iVar10 = local_a8._padding_._4_4_;
    iVar14 = (int)local_a8._padding_;
    do {
      lVar3 = *(longlong *)&this_00->Elements + (longlong)iVar14 * 0x28;
      if (*(char *)(*(longlong *)&this_00->Elements + 0x18 + (longlong)iVar14 * 0x28) == '\0') {
        if (((*(int *)(lVar3 + 0x10) != 0) && (*(longlong **)(lVar3 + 8) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x38))(), cVar5 != '\0')) {
          if (*(int *)(lVar3 + 0x10) == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = *(longlong **)(lVar3 + 8);
          }
          cVar5 = (**(code **)(*plVar7 + 0x60))(plVar7,this,local_res10[0].Key);
          if (cVar5 == '\x01') goto LAB_146ef5213;
        }
        if (*(char *)(lVar3 + 0x18) == '\0') {
          pTVar1 = &this->ObserverHandles;
          TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_e8,
                     (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                      *)pTVar1);
          local_40 = 0;
          stack0xffffffffffffff98 = _local_d8;
          local_78 = (TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
                      *)local_e8._0_8_;
          auStack_70._0_8_ = stack0xffffffffffffff20;
          local_58 = local_c8;
          pTStack_50 = pTStack_c0;
          uVar8 = local_d8._8_8_ >> 0x20;
          uVar11 = local_d8._12_4_;
          this_00 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                     *)local_a8._padding_;
          local_48 = (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                      *)pTVar1;
          if ((int)uVar11 < *(int *)(local_d8 + 0x18)) {
            do {
              lVar4 = *(longlong *)&local_78->field_0x0;
              if ((*(int *)(lVar3 + 0x10) == 0) ||
                 (plVar7 = *(longlong **)(lVar3 + 8), plVar7 == (longlong *)0x0)) {
                lVar9 = 0;
              }
              else {
                plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,local_res8);
                lVar9 = *plVar7;
              }
              if (*(longlong *)(lVar4 + (longlong)(int)uVar8 * 0x18 + 8) == lVar9) {
                TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                ::RemoveByIndex(pTStack_50,uVar11);
                goto LAB_146ef518b;
              }
              uStack_60 = uStack_60 & ~auStack_70._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
              uVar8 = (ulonglong)uStack_5c;
              uVar11 = uStack_5c;
            } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
            this_00 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                       *)local_a8._padding_;
            if ((char)local_40 != '\0') {
LAB_146ef518b:
              this_00 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                         *)local_a8._padding_;
              if (local_40._1_1_ != '\0') {
                uVar11 = *(int *)&(local_48->Elements).field_0x8 -
                         *(int *)&(local_48->Elements).field_0x34;
                if (uVar11 < 4) {
                  iVar6 = 1;
                }
                else {
                  uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
                  lVar4 = 0x3f;
                  if (uVar8 != 0) {
                    for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                    }
                  }
                  iVar6 = 1 << ((byte)lVar4 & 0x1f);
                }
                if (((0 < (int)uVar11) && (local_48->HashSize < iVar6)) ||
                   (iVar6 < local_48->HashSize)) {
                  local_48->HashSize = iVar6;
                  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                  ::Rehash(local_48);
                  this_00 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                             *)local_a8._padding_;
                }
              }
            }
          }
        }
        if (this->NotifyObserversRecursionCount == 1) {
          TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
          ::RemoveByIndex(this_00,iVar14);
          if (*(char *)(lVar3 + 0x18) != '\0') {
            this->ObserversToRemoveCount = this->ObserversToRemoveCount + -1;
          }
        }
        else if (*(char *)(lVar3 + 0x18) == '\0') {
          *(undefined1 *)(lVar3 + 0x18) = 1;
          this->ObserversToRemoveCount = this->ObserversToRemoveCount + 1;
        }
      }
LAB_146ef5213:
      if (iVar10 == -1) break;
      iVar14 = iVar10;
      do {
        iVar10 = *(int *)(*(longlong *)&this_00->Elements + 0x20 + (longlong)iVar14 * 0x28);
        if (*(ushort *)(*(longlong *)&this_00->Elements + (longlong)iVar14 * 0x28) ==
            local_res10[0].Key) break;
        iVar14 = iVar10;
      } while (iVar10 != -1);
    } while (iVar14 != -1);
    piVar2 = &this->NotifyObserversRecursionCount;
    *piVar2 = *piVar2 + -1;
    if ((*piVar2 == 0) && (0 < this->ObserversToRemoveCount)) {
      TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
      ::TIterator::TIterator
                (&local_a8,
                 (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                  *)&this->Observers);
      uStack_d0 = local_a8._padding_;
      local_d8 = (undefined1  [8])CONCAT44(local_a8._padding_._4_4_,(int)local_a8._padding_);
      local_b0 = '\0';
      cStack_af = '\0';
      local_e8._0_8_ = local_a8._padding_;
      stack0xffffffffffffff20 = (FKey *)local_a8._padding_;
      local_c8 = local_a8._padding_;
      pTStack_c0 = (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                    *)local_a8.Set;
      uVar8 = (ulonglong)local_a8._padding_ >> 0x20;
      uVar11 = (uint)((ulonglong)local_a8._padding_ >> 0x20);
      local_b8 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                  *)&this->Observers;
      if ((int)uVar11 < *(int *)(CONCAT44(local_a8._padding_._4_4_,(int)local_a8._padding_) + 0x18))
      {
        do {
          if (*(char *)(*(longlong *)
                         (TSparseArray<TSparseSetElement<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_e8._0_8_ + 0x18 + (longlong)(int)uVar8 * 0x28) != '\0') {
            TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                             *)pTStack_c0,uVar11);
            piVar2 = &this->ObserversToRemoveCount;
            *piVar2 = *piVar2 + -1;
            local_b0 = '\x01';
            if (*piVar2 == 0) goto LAB_146ef5333;
          }
          uStack_d0._0_4_ = (uint)uStack_d0 & ~uStack_dc;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_e8 + 8));
          uVar8 = (ulonglong)uStack_d0._4_4_;
          uVar11 = uStack_d0._4_4_;
        } while ((int)uStack_d0._4_4_ < *(int *)((longlong)local_d8 + 0x18));
        if (local_b0 != '\0') {
LAB_146ef5333:
          if (cStack_af != '\0') {
            uVar11 = *(int *)&(local_b8->Elements).field_0x8 -
                     *(int *)&(local_b8->Elements).field_0x34;
            if (3 < uVar11) {
              uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar8 != 0) {
                for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar13 = 1 << ((byte)lVar3 & 0x1f);
            }
            if (((0 < (int)uVar11) && (local_b8->HashSize < iVar13)) ||
               (iVar13 < local_b8->HashSize)) {
              local_b8->HashSize = iVar13;
              TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
              ::Rehash(local_b8);
            }
          }
        }
      }
      this->ObserversToRemoveCount = 0;
    }
  }
  return;
}

// PauseObserverNotifications @ 146efa170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::PauseObserverNotifications(UBlackboardComponent *this)

{
  this->bPausedNotifies = 1;
  return;
}

// PopulateSynchronizedKeys @ 146efa9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::PopulateSynchronizedKeys(UBlackboardComponent *this)

{
  FName *pFVar1;
  byte bVar2;
  int iVar3;
  UBrainComponent *pUVar4;
  AAIController *pAVar5;
  UBlackboardData *this_00;
  UBlackboardKeyType *pUVar6;
  code *pcVar7;
  undefined2 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  UBlackboardComponent *pUVar14;
  FBlackboardEntry *pFVar15;
  ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
  FVar16;
  UAISystem *this_01;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  FName *pFVar22;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  undefined1 local_144 [8];
  uint local_13c;
  UBlackboardData *local_138;
  FScriptContainerElement *local_130;
  FName *local_128;
  FBlackboardDataToComponentsIterator local_120;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->bSynchronizedKeyPopulated != 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3277427382515924763>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                         ,0xe5,"bSynchronizedKeyPopulated == false"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar12 = (UWorld *)this->_padding_;
  if ((pUVar12 == (UWorld *)0x0) &&
     (pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     pUVar12 == (UWorld *)0x0)) {
    this_01 = (UAISystem *)0x0;
  }
  else {
    this_01 = (UAISystem *)(pUVar12->AISystem).field0_0x0.DebugPtr;
    if (this_01 == (UAISystem *)0x0) {
LAB_146efaa66:
      this_01 = (UAISystem *)0x0;
    }
    else {
      pUVar13 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar3 = (int)pUVar13->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar13->_padding_)) goto LAB_146efaa66;
    }
    if (this_01 != (UAISystem *)0x0) goto LAB_146efaa97;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("AISystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                     ,0xe8,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_146efaa97:
  UAISystem::RegisterBlackboardComponent(this_01,(this->BlackboardAsset).field0_0x0.DebugPtr,this);
  UAISystem::CreateBlackboardDataToComponentsIterator
            (this_01,&local_120,(this->BlackboardAsset).field0_0x0.DebugPtr);
LAB_146efaad0:
  lVar17 = (longlong)local_120.CurrentIteratorIndex;
  if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
    uVar11 = 0;
    if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
      uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
              )&local_120.Iterators;
    if (local_120.Iterators.AllocatorInstance.SecondaryData !=
        (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
         )0x0) {
      FVar16 = local_120.Iterators.AllocatorInstance.SecondaryData;
    }
    if (*(int *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x18) == -1) goto LAB_146efb087;
    lVar17 = (longlong)local_120.CurrentIteratorIndex;
    uVar11 = 0;
    if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
      uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
              )&local_120.Iterators;
    if (local_120.Iterators.AllocatorInstance.SecondaryData !=
        (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
         )0x0) {
      FVar16 = local_120.Iterators.AllocatorInstance.SecondaryData;
    }
    pUVar14 = (UBlackboardComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  (**(longlong **)((longlong)FVar16 + lVar17 * 0x18) +
                                   (longlong)
                                   *(int *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x18) *
                                   0x18 + 8));
    if (((pUVar14 == (UBlackboardComponent *)0x0) || (pUVar14 == this)) ||
       ((pUVar4 = (this->BrainComp).field0_0x0.DebugPtr, pUVar4 != (UBrainComponent *)0x0 &&
        ((((pAVar5 = (pUVar4->AIOwner).field0_0x0.DebugPtr, pAVar5 == (AAIController *)0x0 ||
           (cVar10 = (**(code **)(pAVar5->_padding_ + 0x900))(pAVar5,pUVar14), cVar10 != '\x01')) &&
          (pUVar4 = (pUVar14->BrainComp).field0_0x0.DebugPtr, pUVar4 != (UBrainComponent *)0x0)) &&
         ((pAVar5 = (pUVar4->AIOwner).field0_0x0.DebugPtr, pAVar5 == (AAIController *)0x0 ||
          (cVar10 = (**(code **)(pAVar5->_padding_ + 0x900))(pAVar5,this), cVar10 != '\x01'))))))))
    {
      lVar17 = (longlong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)((longlong)FVar16 + lVar17 * 0x18));
      lVar17 = (longlong)local_120.CurrentIteratorIndex;
      uVar11 = 0;
      if (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum) {
        uVar11 = (uint)~local_120.CurrentIteratorIndex >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar16 = (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
                )&local_120.Iterators;
      if (local_120.Iterators.AllocatorInstance.SecondaryData !=
          (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
           )0x0) {
        FVar16 = local_120.Iterators.AllocatorInstance.SecondaryData;
      }
      if ((*(int *)((uchar *)((longlong)FVar16 + 0x10) + lVar17 * 0x18) == -1) &&
         (local_120.CurrentIteratorIndex < local_120.Iterators.ArrayNum + -1)) {
        local_120.CurrentIteratorIndex = local_120.CurrentIteratorIndex + 1;
        UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard
                  (&local_120);
      }
      goto LAB_146efaad0;
    }
    local_138 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    local_13c = (local_138->Keys).ArrayNum;
    uVar18 = (ulonglong)(int)local_13c;
    pFVar20 = (local_138->Keys).AllocatorInstance.Data;
    pFVar22 = (FName *)(pFVar20 + uVar18 * 0x18);
    pFVar20 = pFVar20 + 8;
    local_128 = pFVar22;
    while( true ) {
      if ((local_138->Keys).ArrayNum != (int)uVar18) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FBlackboardEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_148);
      }
      pFVar1 = (FName *)(pFVar20 + -8);
      if (pFVar1 == pFVar22) break;
      if ((((byte)pFVar20[8] & 1) != 0) &&
         (this_00 = (pUVar14->BlackboardAsset).field0_0x0.DebugPtr,
         this_00 != (UBlackboardData *)0x0)) {
        UBlackboardData::InternalGetKeyID(this_00,(FName *)(local_144 + 4),(EKeyLookupMode)pFVar1);
        uVar8 = local_144._4_2_;
        if (local_144._4_2_ != 0xffff) {
          pFVar15 = UBlackboardData::GetKey
                              ((pUVar14->BlackboardAsset).field0_0x0.DebugPtr,(FKey)local_144._4_2_)
          ;
          if ((*pFVar1 != pFVar15->EntryName) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Key.EntryName == OtherKey->EntryName",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                                 ,0xf9,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((((*(longlong *)pFVar20 == 0) ||
               (pUVar6 = (pFVar15->KeyType).field0_0x0.DebugPtr, pUVar6 == (UBlackboardKeyType *)0x0
               )) || (*(longlong *)(*(longlong *)pFVar20 + 0x10) != pUVar6->_padding_)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Key.KeyType && OtherKey->KeyType && Key.KeyType->GetClass() == OtherKey->KeyType->GetClass()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BlackboardComponent.cpp"
                                 ,0xfa,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar2 = *(byte *)(*(longlong *)pFVar20 + 0x2b);
          UBlackboardData::InternalGetKeyID
                    ((this->BlackboardAsset).field0_0x0.DebugPtr,(FName *)local_144,
                     (EKeyLookupMode)pFVar1);
          if (((this->ValueMemory).ArrayNum == 0) ||
             (uVar18 = (ulonglong)(ushort)local_144._0_2_,
             (this->ValueOffsets).ArrayNum <= (int)(uint)(ushort)local_144._0_2_)) {
            local_130 = (FScriptContainerElement *)0x0;
          }
          else {
            if (((this->ValueOffsets).ArrayNum <= (int)(uint)(ushort)local_144._0_2_) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_130 = (this->ValueMemory).AllocatorInstance.Data +
                        *(ushort *)((this->ValueOffsets).AllocatorInstance.Data + uVar18 * 2);
          }
          local_130 = local_130 + (-(uint)((bVar2 & 2) != 0) & 4);
          if (((((pUVar14->ValueMemory).ArrayNum != 0) &&
               ((int)(uint)(ushort)uVar8 < (pUVar14->ValueOffsets).ArrayNum)) &&
              ((pUVar14->ValueOffsets).ArrayNum <= (int)(uint)(ushort)uVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((bVar2 & 2) == 0) {
            plVar19 = *(longlong **)pFVar20;
            plVar21 = plVar19;
          }
          else {
            uVar18 = (ulonglong)(ushort)local_144._0_2_;
            if (((this->KeyInstances).ArrayNum <= (int)(uint)(ushort)local_144._0_2_) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            plVar21 = *(longlong **)((this->KeyInstances).AllocatorInstance.Data + uVar18 * 8);
            if (((pUVar14->KeyInstances).ArrayNum <= (int)(uint)(ushort)uVar8) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            plVar19 = *(longlong **)
                       ((pUVar14->KeyInstances).AllocatorInstance.Data +
                       (ulonglong)(ushort)uVar8 * 8);
          }
          (**(code **)(*plVar21 + 0x2e0))(plVar21,this,local_130,plVar19);
          pFVar22 = local_128;
        }
      }
      pFVar20 = pFVar20 + 0x18;
      uVar18 = (ulonglong)local_13c;
    }
  }
LAB_146efb087:
  if (local_120.Iterators.AllocatorInstance.SecondaryData !=
      (ForElementType<TMapBase<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>::TConstKeyIterator>
       )0x0) {
    FMemory::Free((void *)local_120.Iterators.AllocatorInstance.SecondaryData);
  }
  if (local_120.IteratorKeysForReference.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.IteratorKeysForReference.AllocatorInstance.Data);
  }
  this->bSynchronizedKeyPopulated = 1;
  return;
}

// RegisterObserver @ 146efc920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDelegateHandle __thiscall
UBlackboardComponent::RegisterObserver
          (UBlackboardComponent *this,FKey param_1,UObject *param_2,
          TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_3)

{
  TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *pTVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined6 in_register_00000012;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int local_res8;
  ushort local_res18 [4];
  TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
  *local_res20;
  ForAnyElementType *in_stack_00000028;
  undefined8 local_88;
  ForAnyElementType local_80;
  ForAnyElementType *pFStack_78;
  int local_70;
  int iStack_6c;
  ForAnyElementType local_68;
  int local_60;
  undefined1 local_58;
  TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *local_50;
  ushort *puStack_48;
  undefined8 local_40;
  
  puVar6 = (undefined8 *)CONCAT62(in_register_00000012,param_1.Key);
  local_res18[0] = (ushort)param_2;
  pTVar1 = &this->Observers;
  iVar10 = *(int *)&(this->Observers).field_0x48;
  pFStack_78 = (ForAnyElementType *)local_res18;
  local_70 = -1;
  if (iVar10 == 0) {
    iStack_6c = -1;
  }
  else {
    puVar7 = *(undefined1 **)&(this->Observers).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Observers).field_0x38;
    }
    iStack_6c = *(int *)(puVar7 + ((longlong)iVar10 - 1U & (ulonglong)param_2 & 0xffff) * 4);
    local_70 = iStack_6c;
    if (iStack_6c != -1) {
      do {
        iStack_6c = *(int *)(*(longlong *)pTVar1 + 0x20 + (longlong)local_70 * 0x28);
        if (*(ushort *)(*(longlong *)pTVar1 + (longlong)local_70 * 0x28) == local_res18[0]) break;
        local_70 = iStack_6c;
      } while (iStack_6c != -1);
    }
  }
  local_40 = CONCAT44(iStack_6c,local_70);
  local_80.Data = (FScriptContainerElement *)pTVar1;
  local_50 = pTVar1;
  puStack_48 = (ushort *)pFStack_78;
  local_res20 = param_3;
  iVar5 = local_70;
  iVar10 = iStack_6c;
joined_r0x000146efc9f9:
  if (iVar5 != -1) {
    lVar11 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)pTVar1 + 0x10 + lVar11 * 0x28) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)pTVar1 + 8 + lVar11 * 0x28), plVar2 == (longlong *)0x0)
       ) {
      lVar9 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))();
      param_2 = (UObject *)(ulonglong)local_res18[0];
      lVar9 = *plVar2;
    }
    if ((*(int *)&in_stack_00000028[1].Data == 0) ||
       (in_stack_00000028->Data == (FScriptContainerElement *)0x0)) {
      lVar4 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*(longlong *)in_stack_00000028->Data + 0x40))();
      param_2 = (UObject *)(ulonglong)local_res18[0];
      lVar4 = *plVar2;
    }
    if (lVar9 == lVar4) {
      if ((*(int *)(*(longlong *)pTVar1 + 0x10 + lVar11 * 0x28) == 0) ||
         (plVar2 = *(longlong **)(*(longlong *)pTVar1 + 8 + lVar11 * 0x28),
         plVar2 == (longlong *)0x0)) {
        *puVar6 = 0;
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x40))();
        *puVar6 = *puVar3;
      }
      goto LAB_146efcc82;
    }
    if (iVar10 == -1) goto LAB_146efcaaa;
    iVar5 = iVar10;
    do {
      iVar10 = *(int *)(*(longlong *)pTVar1 + 0x20 + (longlong)iVar5 * 0x28);
      if (*(short *)(*(longlong *)pTVar1 + (longlong)iVar5 * 0x28) == (short)param_2) break;
      iVar5 = iVar10;
    } while (iVar10 != -1);
    goto joined_r0x000146efc9f9;
  }
LAB_146efcaaa:
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (in_stack_00000028 != &local_68) {
    local_80.Data = (FScriptContainerElement *)0x0;
    pFStack_78 = (ForAnyElementType *)((ulonglong)pFStack_78 & 0xffffffff00000000);
    FVar8.Data = (FScriptContainerElement *)0x0;
    iVar10 = 0;
    if ((*(int *)&in_stack_00000028[1].Data != 0) &&
       (iVar10 = 0, in_stack_00000028->Data != (FScriptContainerElement *)0x0)) {
      (**(code **)(*(longlong *)in_stack_00000028->Data + 0x48))();
      FVar8.Data = local_80.Data;
      iVar10 = (int)pFStack_78;
    }
    local_80.Data = (FScriptContainerElement *)0x0;
    pFStack_78 = (ForAnyElementType *)((ulonglong)pFStack_78 & 0xffffffff00000000);
    if (local_60 == 0) {
LAB_146efcb35:
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    else if (local_68.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_68.Data)(local_68.Data);
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,0x10);
      local_60 = 0;
      goto LAB_146efcb35;
    }
    local_68.Data = FVar8.Data;
    local_60 = iVar10;
    if ((int)pFStack_78 != 0) {
      if (local_80.Data == (FScriptContainerElement *)0x0) goto LAB_146efcb89;
      (*(code *)**(undefined8 **)local_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
      pFStack_78 = (ForAnyElementType *)((ulonglong)pFStack_78 & 0xffffffff00000000);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
LAB_146efcb89:
  local_80.Data = (FScriptContainerElement *)local_res18;
  local_58 = 0;
  pFStack_78 = &local_68;
  TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FBlackboard::FKey_const_&,UBlackboardComponent::FOnBlackboardChangeNotificationInfo_&&>_>
            ((TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
              *)&this->Observers,
             (TPairInitializer<FBlackboard::FKey_const_&,UBlackboardComponent::FOnBlackboardChangeNotificationInfo_&&>
              *)&local_res8,(bool *)&local_80);
  lVar11 = *(longlong *)&(this->Observers).field_0x0;
  if ((*(int *)(lVar11 + 0x10 + (longlong)local_res8 * 0x28) == 0) ||
     (plVar2 = *(longlong **)(lVar11 + 8 + (longlong)local_res8 * 0x28), plVar2 == (longlong *)0x0))
  {
    local_88 = 0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x40))();
    local_88 = *puVar3;
  }
  if (local_60 != 0) {
    if (local_68.Data == (FScriptContainerElement *)0x0) goto LAB_146efcc53;
    (*(code *)**(undefined8 **)local_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_146efcc53:
  local_80.Data = (FScriptContainerElement *)&local_res20;
  pFStack_78 = (ForAnyElementType *)&local_88;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObject_const_*_const_&,FDelegateHandle_const_&>_>
            ((TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
              *)&this->ObserverHandles,
             (TPairInitializer<UObject_const_*_const_&,FDelegateHandle_const_&> *)&local_res8,
             (bool *)&local_80);
  *puVar6 = local_88;
LAB_146efcc82:
  if ((*(int *)&in_stack_00000028[1].Data != 0) &&
     (in_stack_00000028->Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)in_stack_00000028->Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(in_stack_00000028,0,0,0x10)
    ;
    *(undefined4 *)&in_stack_00000028[1].Data = 0;
  }
  if (in_stack_00000028->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(in_stack_00000028->Data);
  }
  return (FDelegateHandle)(ulong64)puVar6;
}

// ResumeObserverNotifications @ 146efdfe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::ResumeObserverNotifications(UBlackboardComponent *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  this->bPausedNotifies = 0;
  if ((param_1) && (uVar4 = 0, 0 < (this->QueuedUpdates).ArrayNum)) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->QueuedUpdates).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      NotifyObservers(this,(FKey)*(ushort *)
                                  ((this->QueuedUpdates).AllocatorInstance.Data +
                                  (longlong)(int)uVar4 * 2));
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->QueuedUpdates).ArrayNum);
  }
  (this->QueuedUpdates).ArrayNum = 0;
  if ((this->QueuedUpdates).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->QueuedUpdates).AllocatorInstance,0,&(this->QueuedUpdates).ArrayMax);
  }
  return;
}

// SetValueAsBool @ 146f00330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsBool(UBlackboardComponent *this,FName *param_1,bool param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Bool>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsClass @ 146f00390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsClass(UBlackboardComponent *this,FName *param_1,UClass *param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Class>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsEnum @ 146f003f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsEnum(UBlackboardComponent *this,FName *param_1,uchar param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Enum>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsFloat @ 146f00450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsFloat(UBlackboardComponent *this,FName *param_1,float param_2)

{
  UBlackboardData *this_00;
  FName local_res8 [4];
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8[0].ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Float>(this,local_res8[0].ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsInt @ 146f004b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsInt(UBlackboardComponent *this,FName *param_1,int param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Int>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsName @ 146f00510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsName(UBlackboardComponent *this,FName *param_1,FName param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Name>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsObject @ 146f00570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsObject(UBlackboardComponent *this,FName *param_1,UObject *param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  SetValue<UBlackboardKeyType_Object>(this,local_res8.ComparisonIndex.Value._0_2_,param_2);
  return;
}

// SetValueAsRotator @ 146f005d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsRotator
          (UBlackboardComponent *this,FName *param_1,TRotator<double> *param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  TRotator<double> local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  local_28.Pitch = param_2->Pitch;
  local_28.Yaw = param_2->Yaw;
  local_28.Roll = param_2->Roll;
  SetValue<UBlackboardKeyType_Rotator>(this,local_res8.ComparisonIndex.Value._0_2_,&local_28);
  return;
}

// SetValueAsString @ 146f00640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsString(UBlackboardComponent *this,FName *param_1,FString *param_2)

{
  UBlackboardData *this_00;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FName local_res8;
  FString local_18;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  pFVar2 = ::FString::FString(&local_18,param_2);
  SetValue<UBlackboardKeyType_String>(this,local_res8.ComparisonIndex.Value._0_2_,pFVar2);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetValueAsVector @ 146f006c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::SetValueAsVector
          (UBlackboardComponent *this,FName *param_1,TVector<double> *param_2)

{
  UBlackboardData *this_00;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(this_00,&local_res8,(EKeyLookupMode)param_1);
  }
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  SetValue<UBlackboardKeyType_Vector>
            (this,local_res8.ComparisonIndex.Value._0_2_,(TVector<double> *)&local_28._s_0);
  return;
}

// ShouldSyncWithBlackboard @ 146f00730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UBlackboardComponent::ShouldSyncWithBlackboard
          (UBlackboardComponent *this,UBlackboardComponent *param_1)

{
  UBrainComponent *pUVar1;
  AAIController *pAVar2;
  char cVar3;
  
  if (param_1 == this) {
    return false;
  }
  pUVar1 = (this->BrainComp).field0_0x0.DebugPtr;
  if (pUVar1 != (UBrainComponent *)0x0) {
    pAVar2 = (pUVar1->AIOwner).field0_0x0.DebugPtr;
    if ((pAVar2 != (AAIController *)0x0) &&
       (cVar3 = (**(code **)(pAVar2->_padding_ + 0x900))(), cVar3 == '\x01')) {
      return true;
    }
    pUVar1 = (param_1->BrainComp).field0_0x0.DebugPtr;
    if (pUVar1 != (UBrainComponent *)0x0) {
      pAVar2 = (pUVar1->AIOwner).field0_0x0.DebugPtr;
      if ((pAVar2 != (AAIController *)0x0) &&
         (cVar3 = (**(code **)(pAVar2->_padding_ + 0x900))(pAVar2,this), cVar3 == '\x01')) {
        return true;
      }
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUBlackboardComponent @ 146f00f90

void __cdecl UBlackboardComponent::StaticRegisterNativesUBlackboardComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_UBlackboardComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UninitializeComponent @ 146f03130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBlackboardComponent::UninitializeComponent(UBlackboardComponent *this)

{
  int iVar1;
  UBlackboardData *pUVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UAISystem *this_00;
  
  pUVar2 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (((pUVar2 == (UBlackboardData *)0x0) || (pUVar2->bHasSynchronizedKeys == 0)) ||
     ((pUVar3 = (UWorld *)this->_padding_, pUVar3 == (UWorld *)0x0 &&
      (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar3 == (UWorld *)0x0
      )))) goto LAB_146f031b3;
  this_00 = (UAISystem *)(pUVar3->AISystem).field0_0x0.DebugPtr;
  if (this_00 == (UAISystem *)0x0) {
LAB_146f03195:
    this_00 = (UAISystem *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAISystem_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_146f03195;
  }
  if (this_00 != (UAISystem *)0x0) {
    UAISystem::UnregisterBlackboardComponent
              (this_00,(this->BlackboardAsset).field0_0x0.DebugPtr,this);
  }
LAB_146f031b3:
  DestroyValues(this);
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  return;
}

// UnregisterObserver @ 146f031d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::UnregisterObserver
          (UBlackboardComponent *this,FKey param_1,FDelegateHandle param_2)

{
  TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *this_00;
  TMultiMap<UObject_const_*,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>_>
  *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulong64 *puVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  int local_a8;
  int iStack_a4;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  TIterator local_58;
  
  this_00 = &this->Observers;
  iVar4 = *(int *)&(this->Observers).field_0x48;
  local_58._padding_ = (longlong)local_res10;
  local_a8 = -1;
  local_58._padding_ = (longlong)this_00;
  local_res10[0] = param_1.Key;
  if (iVar4 == 0) {
    iStack_a4 = -1;
    local_58._padding_._0_4_ = local_a8;
    local_58._padding_._4_4_ = iStack_a4;
  }
  else {
    puVar9 = *(undefined1 **)&(this->Observers).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Observers).field_0x38;
    }
    iStack_a4 = *(int *)(puVar9 + ((longlong)iVar4 - 1U & (ulonglong)param_1.Key) * 4);
    local_a8 = iStack_a4;
    local_58._padding_._0_4_ = iStack_a4;
    local_58._padding_._4_4_ = iStack_a4;
    if (iStack_a4 != -1) {
      do {
        iStack_a4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)local_a8 * 0x28);
        local_58._padding_._0_4_ = local_a8;
        local_58._padding_._4_4_ = iStack_a4;
        if (*(ushort *)(*(longlong *)&this_00->field_0x0 + (longlong)local_a8 * 0x28) == param_1.Key
           ) break;
        local_a8 = iStack_a4;
        local_58._padding_._0_4_ = iStack_a4;
      } while (iStack_a4 != -1);
    }
  }
  do {
    if (local_a8 == -1) {
      return;
    }
    if ((*(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)local_a8 * 0x28) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)local_a8 * 0x28),
       plVar2 == (longlong *)0x0)) {
      uVar6 = 0;
    }
    else {
      puVar5 = (ulong64 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
      uVar6 = *puVar5;
      param_1.Key = local_res10[0];
    }
    if (uVar6 == param_2.ID) {
      pTVar1 = &this->ObserverHandles;
      TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
      ::TIterator::TIterator
                (&local_58,
                 (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                  *)pTVar1);
      lVar3 = local_58._padding_;
      unique0x100001fd = local_58._padding_;
      auStack_90._8_8_ = CONCAT44(local_58._padding_._4_4_,(int)local_58._padding_);
      local_60 = 0;
      auStack_90._0_8_ = local_58._padding_;
      local_78 = local_58._padding_;
      pTStack_70 = local_58.Set;
      uVar7 = (ulonglong)local_58._padding_ >> 0x20;
      uVar8 = (uint)((ulonglong)local_58._padding_ >> 0x20);
      local_68 = (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                  *)pTVar1;
      if (*(int *)(CONCAT44(local_58._padding_._4_4_,(int)local_58._padding_) + 0x18) <= (int)uVar8)
      goto LAB_146f0341f;
      break;
    }
    if (iStack_a4 == -1) {
      return;
    }
    local_a8 = iStack_a4;
    do {
      iStack_a4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)local_a8 * 0x28);
      if (*(ushort *)(*(longlong *)&this_00->field_0x0 + (longlong)local_a8 * 0x28) == param_1.Key)
      break;
      local_a8 = iStack_a4;
    } while (iStack_a4 != -1);
  } while( true );
  while( true ) {
    uStack_80 = uStack_80 & ~auStack_90._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
    uVar7 = (ulonglong)uStack_7c;
    uVar8 = uStack_7c;
    if (*(int *)(auStack_90._8_8_ + 0x18) <= (int)uStack_7c) break;
    if (*(ulong64 *)(*(longlong *)(undefined1 *)lVar3 + 8 + (longlong)(int)uVar7 * 0x18) ==
        param_2.ID) {
      TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_70,uVar8);
      goto LAB_146f033cb;
    }
  }
  if ((char)local_60 != '\0') {
LAB_146f033cb:
    if (local_60._1_1_ != '\0') {
      uVar8 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_68->HashSize < iVar4)) || (iVar4 < local_68->HashSize)) {
        local_68->HashSize = iVar4;
        TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
        ::Rehash(local_68);
      }
    }
  }
LAB_146f0341f:
  if (this->NotifyObserversRecursionCount == 0) {
    TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                     *)this_00,local_a8);
  }
  else if (*(char *)(*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)local_a8 * 0x28) == '\0') {
    *(undefined1 *)(*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)local_a8 * 0x28) = 1;
    this->ObserversToRemoveCount = this->ObserversToRemoveCount + 1;
  }
  return;
}

// UnregisterObserversFrom @ 146f03480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UBlackboardComponent::UnregisterObserversFrom(UBlackboardComponent *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong this_00;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  TMultiMap<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>_>
  *pTVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  TIterator local_58;
  
  TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            ((TBaseKeyIterator<0> *)&local_58,
             (TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
              *)&this->ObserverHandles,param_1);
  lVar3 = local_58._padding_;
  this_00 = local_58._padding_;
  iVar9 = (int)local_58._padding_;
  iVar1 = local_58._padding_._4_4_;
  do {
    if (iVar9 == -1) {
      return;
    }
    pTVar8 = &this->Observers;
    TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_58,
               (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                *)pTVar8);
    lVar2 = local_58._padding_;
    unique0x100001f2 = local_58._padding_;
    auStack_90._8_8_ = CONCAT44(local_58._padding_._4_4_,(int)local_58._padding_);
    local_60 = 0;
    auStack_90._0_8_ = local_58._padding_;
    local_78 = local_58._padding_;
    pTStack_70 = local_58.Set;
    uVar7 = (ulonglong)local_58._padding_ >> 0x20;
    uVar10 = (uint)((ulonglong)local_58._padding_ >> 0x20);
    local_68 = (TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
                *)pTVar8;
    if ((int)uVar10 < *(int *)(CONCAT44(local_58._padding_._4_4_,(int)local_58._padding_) + 0x18)) {
      do {
        lVar6 = *(longlong *)
                 (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)lVar2;
        if ((*(int *)(lVar6 + 0x10 + (longlong)(int)uVar7 * 0x28) == 0) ||
           (plVar5 = *(longlong **)(lVar6 + 8 + (longlong)(int)uVar7 * 0x28),
           plVar5 == (longlong *)0x0)) {
          lVar6 = 0;
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
          lVar6 = *plVar5;
        }
        if (lVar6 == *(longlong *)
                      (*(longlong *)
                        (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00 + 8 + (longlong)iVar9 * 0x18)) {
          if (this->NotifyObserversRecursionCount == 0) {
            TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_70,uVar10);
            goto LAB_146f03606;
          }
          lVar2 = *(longlong *)
                   (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)lVar2;
          if (*(char *)(lVar2 + 0x18 + (longlong)(int)uVar10 * 0x28) == '\0') {
            *(undefined1 *)(lVar2 + 0x18 + (longlong)(int)uVar10 * 0x28) = 1;
            this->ObserversToRemoveCount = this->ObserversToRemoveCount + 1;
          }
          break;
        }
        uStack_80 = uStack_80 & ~auStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
        uVar7 = (ulonglong)uStack_7c;
        uVar10 = uStack_7c;
      } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
      if ((char)local_60 != '\0') {
LAB_146f03606:
        if (local_60._1_1_ != '\0') {
          uVar10 = *(int *)&(local_68->Elements).field_0x8 -
                   *(int *)&(local_68->Elements).field_0x34;
          if (uVar10 < 4) {
            iVar4 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar4 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar10) && (local_68->HashSize < iVar4)) || (iVar4 < local_68->HashSize)) {
            local_68->HashSize = iVar4;
            TSet<TTuple<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo>,TDefaultMapHashableKeyFuncs<FBlackboard::FKey,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1>,FDefaultSetAllocator>
            ::Rehash(local_68);
          }
        }
      }
    }
    TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
    ::RemoveByIndex((TSet<TTuple<UObject_const_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<UObject_const_*,FDelegateHandle,1>,FDefaultSetAllocator>
                     *)this_00,iVar9);
    if (iVar1 == -1) {
      return;
    }
    iVar9 = iVar1;
    do {
      iVar1 = *(int *)(*(longlong *)
                        (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00 + 0x10 + (longlong)iVar9 * 0x18);
      if (*(longlong *)
           (*(longlong *)
             (TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00 + (longlong)iVar9 * 0x18) == lVar3) break;
      iVar9 = iVar1;
    } while (iVar1 != -1);
  } while( true );
}

// execClearValue @ 146f08750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UBlackboardComponent::execClearValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  ClearValue((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  return;
}

// execGetLocationFromEntry @ 146f09e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetLocationFromEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  TVector<double> *pTVar5;
  FName local_res8;
  uchar local_res10 [8];
  TVector<double> local_48;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar5 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar5 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar4);
  }
  bVar3 = GetLocationFromEntry
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,pTVar5);
  *(bool *)param_3 = bVar3;
  return;
}

// execGetRotationFromEntry @ 146f0a1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetRotationFromEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  TRotator<double> *pTVar5;
  FName local_res8;
  uchar local_res10 [8];
  TRotator<double> local_48;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar5 = &local_48;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar5 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar4);
  }
  bVar3 = GetRotationFromEntry
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,pTVar5);
  *(bool *)param_3 = bVar3;
  return;
}

// execGetValueAsBool @ 146f0a2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EKeyLookupMode EVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar3 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar3 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar3);
  }
  bVar2 = GetValue<UBlackboardKeyType_Bool>
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetValueAsClass @ 146f0a380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  EKeyLookupMode EVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar3 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar3 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar3);
  }
  pUVar2 = GetValue<UBlackboardKeyType_Class>
                     ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(UClass **)param_3 = pUVar2;
  return;
}

// execGetValueAsEnum @ 146f0a440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  EKeyLookupMode EVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar3 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar3 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar3);
  }
  uVar2 = GetValue<UBlackboardKeyType_Enum>
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(uchar *)param_3 = uVar2;
  return;
}

// execGetValueAsFloat @ 146f0a500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  float fVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  fVar3 = GetValue<UBlackboardKeyType_Float>
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(float *)param_3 = fVar3;
  return;
}

// execGetValueAsInt @ 146f0a5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UBlackboardComponent::execGetValueAsInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  EKeyLookupMode EVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar3 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar3 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar3);
  }
  iVar2 = GetValue<UBlackboardKeyType_Int>
                    ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(int *)param_3 = iVar2;
  return;
}

// execGetValueAsName @ 146f0a680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 != (UBlackboardData *)0x0) {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  GetValue<UBlackboardKeyType_Name>((UBlackboardComponent *)param_1,(FKey)(ushort)&local_res8);
  *(FName *)param_3 = local_res8;
  return;
}

// execGetValueAsObject @ 146f0a750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  EKeyLookupMode EVar3;
  FName local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar3 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar3 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar3);
  }
  pUVar2 = GetValue<UBlackboardKeyType_Object>
                     ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_);
  *(UObject **)param_3 = pUVar2;
  return;
}

// execGetValueAsRotator @ 146f0a810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  TRotator<double> local_38;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  GetValue<UBlackboardKeyType_Rotator>
            ((UBlackboardComponent *)param_1,&local_38,local_res8.ComparisonIndex.Value._0_2_);
  *(double *)param_3 = local_38.Pitch;
  *(double *)((longlong)param_3 + 8) = local_38.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_38.Roll;
  return;
}

// execGetValueAsString @ 146f0a8f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  FString local_28;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  GetValue<UBlackboardKeyType_String>
            ((UBlackboardComponent *)param_1,&local_28,local_res8.ComparisonIndex.Value._0_2_);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetValueAsVector @ 146f0aa00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execGetValueAsVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  TVector<double>_u_0 local_38;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  GetValue<UBlackboardKeyType_Vector>
            ((UBlackboardComponent *)param_1,(TVector<double> *)&local_38._s_0,
             local_res8.ComparisonIndex.Value._0_2_);
  *(double *)param_3 = local_38._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_38._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_38._s_0.Z;
  return;
}

// execIsVectorValueSet @ 146f0ad80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execIsVectorValueSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EKeyLookupMode EVar2;
  FName local_res8;
  undefined8 local_res10;
  TVector<double>_u_0 local_38;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  EVar2 = (EKeyLookupMode)&local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    EVar2 = (EKeyLookupMode)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID(*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,EVar2);
  }
  GetValue<UBlackboardKeyType_Vector>
            ((UBlackboardComponent *)param_1,(TVector<double> *)&local_38._s_0,
             local_res8.ComparisonIndex.Value._0_2_);
  if (((local_38._s_0.X == __real_47efffffe0000000) && (local_38._s_0.Y == __real_47efffffe0000000))
     && (local_38._s_0.Z == __real_47efffffe0000000)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execSetValueAsBool @ 146f0c6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  FName local_res8;
  int local_res10 [4];
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
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
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar2);
  }
  SetValue<UBlackboardKeyType_Bool>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,bVar3);
  return;
}

// execSetValueAsClass @ 146f0c800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  uchar *puVar3;
  FName local_res8;
  uchar local_res10 [8];
  UClass *local_res20;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  local_res20 = (UClass *)0x0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Class>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,pUVar2);
  return;
}

// execSetValueAsEnum @ 146f0c910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  FName local_res10;
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = '\0';
  puVar3 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res10.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res10,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Enum>
            ((UBlackboardComponent *)param_1,local_res10.ComparisonIndex.Value._0_2_,uVar2);
  return;
}

// execSetValueAsFloat @ 146f0ca20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  uchar *puVar3;
  FName local_res8;
  float local_res10 [2];
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  puVar3 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Float>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,fVar2);
  return;
}

// execSetValueAsInt @ 146f0cb30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl UBlackboardComponent::execSetValueAsInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uchar *puVar3;
  FName local_res8;
  int local_res10 [2];
  uchar local_res20 [8];
  
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  puVar3 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Int>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,iVar2);
  return;
}

// execSetValueAsName @ 146f0cc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uchar *puVar3;
  FName local_res8;
  uchar local_res10 [8];
  FName local_res20;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Name>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,FVar2);
  return;
}

// execSetValueAsObject @ 146f0cd40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  uchar *puVar3;
  FName local_res8;
  uchar local_res10 [8];
  UObject *local_res20;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  local_res20 = (UObject *)0x0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar3);
  }
  SetValue<UBlackboardKeyType_Object>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,pUVar2);
  return;
}

// execSetValueAsRotator @ 146f0ce50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FName local_res8;
  uchar local_res10 [8];
  TRotator<double> local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58.Pitch._0_4_ = local_38;
  local_58.Pitch._4_4_ = uStack_34;
  local_58.Yaw._0_4_ = uStack_30;
  local_58.Yaw._4_4_ = uStack_2c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar2);
  }
  local_58.Roll = local_28;
  SetValue<UBlackboardKeyType_Rotator>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,&local_58);
  return;
}

// execSetValueAsString @ 146f0cf90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  uchar *puVar4;
  FName local_res8;
  uchar local_res10 [8];
  FString local_58;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  local_48 = (void *)0x0;
  local_40 = 0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_48;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_40;
  local_58.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_58,(int)local_40,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar4);
  }
  pFVar2 = ::FString::FString(&local_38,&local_58);
  SetValue<UBlackboardKeyType_String>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,pFVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execSetValueAsVector @ 146f0d120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBlackboardComponent::execSetValueAsVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FName local_res8;
  uchar local_res10 [8];
  TVector<double>_u_0 local_58;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58._0_4_ = local_38;
  local_58._4_4_ = uStack_34;
  local_58._8_4_ = uStack_30;
  local_58._12_4_ = uStack_2c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UBlackboardData **)&param_1[5].field_0x8 == (UBlackboardData *)0x0) {
    local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
  }
  else {
    UBlackboardData::InternalGetKeyID
              (*(UBlackboardData **)&param_1[5].field_0x8,&local_res8,(EKeyLookupMode)puVar2);
  }
  local_58._s_0.Z = local_28;
  SetValue<UBlackboardKeyType_Vector>
            ((UBlackboardComponent *)param_1,local_res8.ComparisonIndex.Value._0_2_,
             (TVector<double> *)&local_58._s_0);
  return;
}

// operator() @ 1504fed30

bool __thiscall
`UBlackboardComponent::InitializeBlackboard'::__l33::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3277427382515924808>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0xd0) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(*(longlong *)(*(longlong *)this + 0xd0) + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3277427382515924808>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504fede0;
    }
  }
  bVar2 = false;
LAB_1504fede0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

