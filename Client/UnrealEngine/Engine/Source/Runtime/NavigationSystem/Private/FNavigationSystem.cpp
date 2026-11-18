// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// GetCurrent<UNavigationSystemV1> @ 146d6bed0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UNavigationSystemV1 * __cdecl FNavigationSystem::GetCurrent<UNavigationSystemV1>(UObject *param_1)

{
  int iVar1;
  UNavigationSystemV1 *pUVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = GetWorldFromContextObject(param_1);
  if ((pUVar3 != (UWorld *)0x0) &&
     (pUVar2 = (UNavigationSystemV1 *)(pUVar3->NavigationSystem).field0_0x0.DebugPtr,
     pUVar2 != (UNavigationSystemV1 *)0x0)) {
    pUVar4 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return pUVar2;
    }
  }
  return (UNavigationSystemV1 *)0x0;
}

// GetCurrent<UNavigationSystemV1> @ 146d6bf20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNavigationSystemV1 * __cdecl FNavigationSystem::GetCurrent<UNavigationSystemV1>(UWorld *param_1)

{
  int iVar1;
  UNavigationSystemV1 *pUVar2;
  UClass *pUVar3;
  
  if ((param_1 != (UWorld *)0x0) &&
     (pUVar2 = (UNavigationSystemV1 *)(param_1->NavigationSystem).field0_0x0.DebugPtr,
     pUVar2 != (UNavigationSystemV1 *)0x0)) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UNavigationSystemV1 *)0x0;
}

// MakeAllComponentsNeverAffectNav @ 146da7340

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

void __cdecl FNavigationSystem::MakeAllComponentsNeverAffectNav(AActor *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar5 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                     (&param_1->OwnedComponents);
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar11 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>::operator=
            ((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             local_88,pTVar5);
  uVar9 = local_60;
  uStack_e4 = 1;
  uStack_d4 = uVar11;
  iStack_e8 = 0;
  if (local_60 != 0) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar12 = *puVar10;
    uVar11 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)iStack_e8;
      uVar11 = uVar11 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      uStack_d4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_e8)
      goto LAB_146da7431;
      uVar12 = (puVar10 + 1)[lVar7];
    }
    uStack_e4 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_c0 = (int)lVar7;
    uStack_d4 = local_c0 + -1 + uVar11;
    if ((int)local_60 < (int)uStack_d4) {
      uStack_d4 = local_60;
    }
  }
LAB_146da7431:
  local_f0 = (longlong *)local_88;
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_c8 = local_88._8_4_ - local_54;
  uVar12 = local_60 & 0xffffffe0;
  uStack_d8 = 0xffffffff;
  TStack_b0.CurrentBitIndex = uStack_d4;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_e4,iStack_e8);
  iVar8 = (int)local_60 >> 5;
  TStack_b0._28_4_ = uStack_d4;
  TStack_b0.BaseBitIndex = uVar11;
  uStack_90 = CONCAT44(uStack_c4,iStack_c8);
  bVar6 = (byte)local_60;
  local_d0 = uVar11;
  uStack_cc = uStack_d4;
  local_b8 = local_f0;
  TStack_b0.Array = local_e0;
  if (((int)local_60 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar9 != local_60) {
    puVar10 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar11 = -1 << (bVar6 & 0x1f) & puVar10[iVar8];
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_146da7540;
      uVar11 = (puVar10 + 1)[lVar7];
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)local_60 < (int)uVar9) {
      uVar9 = local_60;
    }
  }
LAB_146da7540:
  while( true ) {
    plVar3 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar9) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar3 == (longlong *)local_88)) break;
    UActorComponent::SetCanEverAffectNavigation
              (*(UActorComponent **)(*plVar3 + (longlong)TStack_b0.CurrentBitIndex * 0x10),false);
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
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
  return;
}

// ShouldLoadNavigationOnClient @ 146dba070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl FNavigationSystem::ShouldLoadNavigationOnClient(ANavigationData *param_1)

{
  int iVar1;
  UObjectBaseUtility *this;
  UObject *pUVar2;
  code *pcVar3;
  UEngine *pUVar4;
  UEngine *pUVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  
  pUVar9 = AActor::GetWorld((AActor *)param_1);
  pUVar4 = GEngine;
  if ((pUVar9 != (UWorld *)0x0) &&
     (this = (UObjectBaseUtility *)(pUVar9->NavigationSystem).field0_0x0.DebugPtr,
     this != (UObjectBaseUtility *)0x0)) {
    bVar6 = UObjectBaseUtility::IsA<UNavigationSystemV1>(this);
    if ((bVar6) && (cVar7 = (**(code **)(*(longlong *)this + 0x380))(this,param_1), cVar7 != '\0'))
    {
      return true;
    }
    return false;
  }
  pUVar12 = (GEngine->NavigationSystemClass).Class.field0_0x0.DebugPtr;
  if ((pUVar12 != (UClass *)0x0) &&
     (pUVar10 = Z_Construct_UClass_UNavigationSystemBase_NoRegister(), pUVar5 = GEngine,
     pUVar10 != (UClass *)0x0)) {
    iVar1 = (int)pUVar10->_padding_;
    if (((int)pUVar12->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && ((pUVar4->NavigationSystemClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      pUVar10 = (UClass *)0x0;
      pUVar12 = (GEngine->NavigationSystemClass).Class.field0_0x0.DebugPtr;
      pUVar13 = pUVar10;
      if ((pUVar12 != (UClass *)0x0) &&
         (pUVar11 = Z_Construct_UClass_UNavigationSystemBase_NoRegister(), pUVar11 != (UClass *)0x0)
         ) {
        iVar1 = (int)pUVar11->_padding_;
        if (((int)pUVar12->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar11->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar13 = (pUVar5->NavigationSystemClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar12 = UNavigationSystemV1::StaticClass();
      pUVar4 = GEngine;
      if (pUVar12 != (UClass *)0x0) {
        iVar1 = (int)pUVar12->_padding_;
        if (((int)pUVar13->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar12->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pUVar12 = (GEngine->NavigationSystemClass).Class.field0_0x0.DebugPtr;
          if ((pUVar12 != (UClass *)0x0) &&
             (pUVar13 = Z_Construct_UClass_UNavigationSystemBase_NoRegister(),
             pUVar13 != (UClass *)0x0)) {
            iVar1 = (int)pUVar13->_padding_;
            if (((int)pUVar12->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar13->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar10 = (pUVar4->NavigationSystemClass).Class.field0_0x0.DebugPtr;
            }
          }
          if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar10);
          }
          pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar12 = UNavigationSystemV1::StaticClass();
          iVar1 = (int)pUVar12->_padding_;
          if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
               &pUVar12->_padding_)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          cVar7 = (**(code **)(*(longlong *)pUVar2 + 0x380))(pUVar2,param_1);
          return cVar7 != '\0';
        }
      }
    }
  }
  return false;
}

