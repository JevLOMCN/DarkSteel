// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149a16d10

UScriptStruct * __cdecl FPCGComponentSelectorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGComponentSelectorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGComponentSelectorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGComponentSelectorSettings,(UObject *)pUVar1,
                         L"PCGComponentSelectorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGComponentSelectorSettings.OuterSingleton;
}

// FilterActor @ 149b11f30

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

bool __thiscall
FPCGComponentSelectorSettings::FilterActor(FPCGComponentSelectorSettings *this,AActor *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  UClass *pUVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  UClass *local_f8;
  undefined8 local_f0 [24];
  undefined8 *local_30;
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 == (AActor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                         ,0x325,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar9 = (UClass *)0x0;
  pUVar12 = (UClass *)0x0;
  local_24 = 0x18;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_149b11ff4;
  }
  else {
    pUVar12 = pUVar9;
    if (pUVar7 == (UClass *)0x0) goto LAB_149b11ff4;
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar12 = pUVar9;
  if (pUVar8 != (UClass *)0x0) {
    iVar2 = (int)pUVar8->_padding_;
    if (((int)pUVar7->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) != &pUVar8->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar12 = pUVar7;
    }
  }
LAB_149b11ff4:
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == pUVar9) {
    local_100 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  else {
    local_f8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_f8,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  uVar4 = local_28;
  uVar10 = (ulonglong)(int)local_28;
  puVar11 = local_f0;
  if (local_30 != (undefined8 *)0x0) {
    puVar11 = local_30;
  }
  puVar1 = puVar11 + uVar10;
  while( true ) {
    if ((uint)uVar10 != uVar4) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (puVar11 == puVar1) break;
    bVar5 = FilterComponent(this,(UActorComponent *)*puVar11);
    if (bVar5) {
      bVar5 = true;
LAB_149b120bb:
      if (local_30 != (undefined8 *)0x0) {
        FMemory::Free(local_30);
      }
      return bVar5;
    }
    uVar10 = (ulonglong)local_28;
    puVar11 = puVar11 + 1;
  }
  bVar5 = false;
  goto LAB_149b120bb;
}

// FilterComponent @ 149b12270

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
FPCGComponentSelectorSettings::FilterComponent
          (FPCGComponentSelectorSettings *this,UActorComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  UClass *pUVar11;
  
  if ((param_1 == (UActorComponent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGActorSelector.cpp"
                         ,0x30b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar3 = (this->ComponentList).ArrayNum;
  if (iVar3 != 0) {
    pFVar9 = (this->ComponentList).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar3 * 8;
    while( true ) {
      if (pFVar9 == pFVar1) {
        return false;
      }
      if (*(UActorComponent **)pFVar9 == param_1) break;
      pFVar9 = pFVar9 + 8;
    }
  }
  if (this->ComponentSelection == ByTag) {
    if (this->bHasPreparedTag == false) {
      PCGActorSelector::PrepareTag
                (true,this->ComponentSelectionTag,&this->bTagContainsWildcards,
                 &this->ComponentSelectionTagString);
      this->bHasPreparedTag = true;
    }
    if (this->ComponentSelectionTag != (FName)0x0) {
      if (this->bTagContainsWildcards == false) {
        pFVar10 = (FName *)(param_1->ComponentTags).AllocatorInstance.Data;
        pFVar2 = pFVar10 + (param_1->ComponentTags).ArrayNum;
        for (; pFVar10 != pFVar2; pFVar10 = pFVar10 + 1) {
          if (*pFVar10 == this->ComponentSelectionTag) {
            bVar6 = true;
            goto LAB_149b12350;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = Algo::
                NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,_PCGActorSelector::TagListMatchesTag<TArray<FName,TSizedDefaultAllocator<32>_>_>_::__l5::<lambda_1>_>
                          (&param_1->ComponentTags,(<lambda_1>)&this->ComponentSelectionTagString);
        bVar6 = !bVar6;
      }
LAB_149b12350:
      if (!bVar6) {
        return false;
      }
    }
    return true;
  }
  pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
  if (pUVar11 == (UClass *)0x0) {
    return true;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 == (UClass *)0x0) {
    return true;
  }
  iVar3 = (int)pUVar8->_padding_;
  if (((int)pUVar11->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return true;
  }
  pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
  if (pUVar11 == (UClass *)0x0) {
    return true;
  }
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar8 != (UClass *)0x0) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
      goto LAB_149b1240a;
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_149b1240a:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar11 == pUVar8) {
    return true;
  }
  lVar4 = param_1->_padding_;
  pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
  if ((pUVar11 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar3 = (int)pUVar8->_padding_;
    if (((int)pUVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) != &pUVar8->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) &&
       (pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr,
       pUVar11 != (UClass *)0x0)) {
      iVar3 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar11->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        return true;
      }
    }
  }
  return false;
}

// FilterComponents @ 149b124b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
FPCGComponentSelectorSettings::FilterComponents
          (FPCGComponentSelectorSettings *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UActorComponent_*,int> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FName *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  UClass *pUVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong local_78;
  longlong local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  pUVar17 = (UClass *)0x0;
  uVar18 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if ((this->ComponentList).ArrayNum == 0) {
    uVar19 = *(undefined4 *)&param_1->DataPtr;
    uVar20 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    uVar18 = param_1->ArrayNum;
    uStack_3c = *(undefined4 *)&param_1->field_0xc;
  }
  else {
    pFVar15 = (FScriptContainerElement *)param_1->DataPtr;
    pFVar2 = pFVar15 + (longlong)param_1->ArrayNum * 8;
    pUVar11 = pUVar17;
    for (; pFVar15 != pFVar2; pFVar15 = pFVar15 + 8) {
      pFVar12 = (this->ComponentList).AllocatorInstance.Data;
      pFVar3 = pFVar12 + (longlong)(this->ComponentList).ArrayNum * 8;
      for (; pFVar12 != pFVar3; pFVar12 = pFVar12 + 8) {
        if (*(UActorComponent **)pFVar12 == *(UActorComponent **)pFVar15) {
          iVar8 = (int)pUVar11;
          if ((local_68.Data <= pFVar15) &&
             (local_60._4_4_ = (int)((ulonglong)local_60 >> 0x20), lVar14 = (longlong)local_60._4_4_
             , pFVar15 < local_68.Data + lVar14 * 8)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              pTVar9 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
              return pTVar9;
            }
            iVar8 = (int)local_60;
          }
          if (iVar8 == local_60._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar8 + 1U);
          *(UActorComponent **)(local_68.Data + (longlong)iVar8 * 8) = *(UActorComponent **)pFVar15;
          pUVar11 = (UClass *)(ulonglong)(iVar8 + 1U);
          break;
        }
      }
      uVar18 = (uint)pUVar11;
    }
    local_48 = local_68.Data;
    if (((int)uVar18 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar9;
    }
    uVar19 = (undefined4)local_48;
    uVar20 = local_48._4_4_;
    uStack_40 = uVar18;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  local_58 = CONCAT44(uVar20,uVar19);
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uStack_50 = uVar18;
  uStack_4c = uStack_3c;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if (this->ComponentSelection == ByTag) {
    if (this->ComponentSelectionTag == (FName)0x0) {
LAB_149b12769:
      __return_storage_ptr__->ArrayNum = uVar18;
      if ((uVar18 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar18,*piVar1,&__return_storage_ptr__->AllocatorInstance,uVar18,piVar1);
        if (uVar18 != 0) {
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,(void *)CONCAT44(uVar20,uVar19),
                 (longlong)(int)uVar18 << 3);
        }
      }
      goto LAB_149b12a07;
    }
  }
  else if (this->ComponentSelection == ByClass) {
    pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
    if ((pUVar11 != (UClass *)0x0) &&
       (pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar10 != (UClass *)0x0)) {
      iVar8 = (int)pUVar10->_padding_;
      if (((int)pUVar11->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar10->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) &&
         (pUVar11 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr,
         pUVar11 != (UClass *)0x0)) {
        pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar10 != (UClass *)0x0) {
          iVar8 = (int)pUVar10->_padding_;
          if (((int)pUVar11->_padding_ < iVar8) ||
             ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar8 * 8) !=
              &pUVar10->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pUVar17 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
          }
        }
        pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar17 != pUVar11) goto LAB_149b1266e;
      }
    }
    goto LAB_149b12769;
  }
LAB_149b1266e:
  if (this->ComponentSelection == ByTag) {
    if (this->bHasPreparedTag == false) {
      PCGActorSelector::PrepareTag
                (true,this->ComponentSelectionTag,&this->bTagContainsWildcards,
                 &this->ComponentSelectionTagString);
      this->bHasPreparedTag = true;
    }
    plVar16 = (longlong *)CONCAT44(uVar20,uVar19);
    plVar4 = plVar16 + (int)uVar18;
    for (; plVar16 != plVar4; plVar16 = plVar16 + 1) {
      local_78 = *plVar16;
      if (local_78 != 0) {
        if (this->bTagContainsWildcards == false) {
          pFVar13 = *(FName **)(local_78 + 0x68);
          pFVar5 = pFVar13 + *(int *)(local_78 + 0x70);
          if (pFVar13 != pFVar5) {
            do {
              if (*pFVar13 == this->ComponentSelectionTag) {
                bVar7 = true;
                goto LAB_149b127e7;
              }
              pFVar13 = pFVar13 + 1;
            } while (pFVar13 != pFVar5);
          }
          bVar7 = false;
        }
        else {
          bVar7 = Algo::
                  NoneOf<TArray<FName,TSizedDefaultAllocator<32>_>,_PCGActorSelector::TagListMatchesTag<TArray<FName,TSizedDefaultAllocator<32>_>_>_::__l5::<lambda_1>_>
                            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_78 + 0x68),
                             (<lambda_1>)&this->ComponentSelectionTagString);
          bVar7 = !bVar7;
        }
LAB_149b127e7:
        if (bVar7) {
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 <
               pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar9 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar9;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_78;
        }
      }
    }
  }
  else if (this->ComponentSelection == ByClass) {
    plVar16 = (longlong *)CONCAT44(uVar20,uVar19);
    plVar4 = plVar16 + (int)uVar18;
    for (; plVar16 != plVar4; plVar16 = plVar16 + 1) {
      local_70 = *plVar16;
      if (local_70 != 0) {
        pUVar17 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr;
        lVar14 = *(longlong *)(local_70 + 0x10);
        if ((pUVar17 != (UClass *)0x0) &&
           (pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar11 != (UClass *)0x0)) {
          iVar8 = (int)pUVar11->_padding_;
          if (((int)pUVar17->_padding_ < iVar8) ||
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar8 * 8) !=
              &pUVar11->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if ((bVar7) &&
             (pUVar17 = (this->ComponentSelectionClass).Class.field0_0x0.DebugPtr,
             pUVar17 != (UClass *)0x0)) {
            iVar8 = (int)pUVar17->_padding_;
            if ((*(int *)(lVar14 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar17->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
                  ((FScriptContainerElement *)&local_70 <
                   pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                pTVar9 = (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
                return pTVar9;
              }
              iVar8 = __return_storage_ptr__->ArrayNum;
              if (iVar8 == __return_storage_ptr__->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar8 + 1;
              *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8)
                   = local_70;
            }
          }
        }
      }
    }
  }
LAB_149b12a07:
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return __return_storage_ptr__;
}

// PrepareForFiltering @ 149b22690

void __thiscall
FPCGComponentSelectorSettings::PrepareForFiltering(FPCGComponentSelectorSettings *this,bool param_1)

{
  if ((param_1) || (this->bHasPreparedTag == false)) {
    PCGActorSelector::PrepareTag
              (this->ComponentSelection == ByTag,this->ComponentSelectionTag,
               &this->bTagContainsWildcards,&this->ComponentSelectionTagString);
    this->bHasPreparedTag = true;
  }
  return;
}

