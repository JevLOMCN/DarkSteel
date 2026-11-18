// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 1475166e0

UScriptStruct * __cdecl FLinkedAnimLayerClassData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLinkedAnimLayerClassData,(UObject *)pUVar1,
                         L"LinkedAnimLayerClassData");
  }
  return Z_Registration_Info_UScriptStruct_FLinkedAnimLayerClassData.OuterSingleton;
}

// AddInstance @ 147542840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinkedAnimLayerInstanceData * __thiscall
FLinkedAnimLayerClassData::AddInstance(FLinkedAnimLayerClassData *this,UAnimInstance *param_1)

{
  TArray<FLinkedAnimLayerInstanceData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TObjectPtr<UAnimInstance>_u_0 *pTVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  FLinkedAnimLayerInstanceData *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 auStackY_d8 [32];
  TObjectPtr<UAnimInstance>_u_0 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  void *local_40;
  undefined4 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar1 = &this->InstancesData;
  if ((this->bIsPersistent == false) || ((this->InstancesData).ArrayNum != 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_38 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (TObjectPtr<UAnimInstance>_u_0 *)(pTVar1->AllocatorInstance).Data;
  local_88.DebugPtr = param_1;
  local_30 = uVar11;
  if ((pTVar3 <= &local_88) && (&local_88 < pTVar3 + (longlong)(this->InstancesData).ArrayMax * 0xc)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinkedAnimLayerInstanceData *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->InstancesData).ArrayNum;
  piVar2 = &(this->InstancesData).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->InstancesData).ArrayNum = iVar7 + 1;
  FLinkedAnimLayerInstanceData::FLinkedAnimLayerInstanceData
            ((FLinkedAnimLayerInstanceData *)
             ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x60),
             (FLinkedAnimLayerInstanceData *)&local_88.ObjectPtr);
  local_38 = 0;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar5 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar7 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar7) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  iVar7 = (this->InstancesData).ArrayNum;
  uVar9 = iVar7 - 1;
  uVar10 = 0;
  if ((int)uVar9 < iVar7) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinkedAnimLayerInstanceData *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (FLinkedAnimLayerInstanceData *)
         ((pTVar1->AllocatorInstance).Data + (longlong)((this->InstancesData).ArrayNum + -1) * 0x60)
  ;
}

// FindInstanceData @ 147554600

FLinkedAnimLayerInstanceData * __thiscall
FLinkedAnimLayerClassData::FindInstanceData(FLinkedAnimLayerClassData *this,UAnimInstance *param_1)

{
  UAnimInstance *pUVar1;
  FLinkedAnimLayerInstanceData *pFVar2;
  FLinkedAnimLayerInstanceData *pFVar3;
  bool bVar4;
  
  pFVar2 = (FLinkedAnimLayerInstanceData *)(this->InstancesData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->InstancesData).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FLinkedAnimLayerInstanceData *)0x0;
    }
    pUVar1 = (pFVar2->Instance).field0_0x0.DebugPtr;
    if (pUVar1 == (UAnimInstance *)0x0) {
      bVar4 = param_1 == (UAnimInstance *)0x0;
    }
    else {
      bVar4 = pUVar1 == param_1;
    }
    if (bVar4) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindOrAddInstanceForLinking @ 147554b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimInstance * __thiscall
FLinkedAnimLayerClassData::FindOrAddInstanceForLinking
          (FLinkedAnimLayerClassData *this,UAnimInstance *param_1,FName param_2,bool *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  USkeletalMeshComponent *pUVar11;
  UAnimInstance *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  TObjectPtr<UAnimInstance>_u_0 this_00;
  FLinkedAnimLayerInstanceData *this_01;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  TObjectPtr<UAnimInstance>_u_0 *pTVar17;
  UClass *pUVar18;
  TObjectPtr<UAnimInstance>_u_0 *pTVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  undefined1 auStack_138 [32];
  TObjectPtr<UAnimInstance>_u_0 *local_118;
  TObjectPtr<UAnimInstance>_u_0 *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  TObjectPtr<UAnimInstance>_u_0 local_e0;
  FName local_d8;
  UAnimInstance *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d0 = param_1;
  pUVar11 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  pTVar19 = (TObjectPtr<UAnimInstance>_u_0 *)(this->InstancesData).AllocatorInstance.Data;
  iVar10 = (this->InstancesData).ArrayNum;
  pFVar20 = (FScriptContainerElement *)((longlong)pTVar19 + 0x3c);
  pTVar17 = pTVar19 + (longlong)iVar10 * 0xc;
  while( true ) {
    if ((this->InstancesData).ArrayNum != iVar10) {
      local_e8[0] = 0;
      `TCheckedPointerIterator<FLinkedAnimLayerInstanceData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (pTVar19 == pTVar17) {
      pUVar18 = (UClass *)0x0;
      *param_3 = true;
      pUVar14 = (this->Class).Class.field0_0x0.DebugPtr;
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      if ((pUVar14 != (UClass *)0x0) &&
         (pUVar13 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar13 != (UClass *)0x0)) {
        iVar10 = (int)pUVar13->_padding_;
        if (((int)pUVar14->_padding_ < iVar10) ||
           ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar10 * 8) !=
            &pUVar13->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar18 = (this->Class).Class.field0_0x0.DebugPtr;
        }
      }
      FVar5 = local_d8;
      if (local_d8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar11,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar14 = Z_Construct_UClass_UAnimInstance_NoRegister();
      CheckIsClassChildOf_Internal(pUVar14,pUVar18);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar18);
      FVar6 = local_d8;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_d8.ComparisonIndex = FVar5.ComparisonIndex.Value;
      local_d8.Number = FVar5.Number;
      local_c8._16_4_ = local_d8.ComparisonIndex.Value;
      local_c8._20_4_ = local_d8.Number;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_d8 = FVar6;
      local_c8._8_8_ = pUVar11;
      this_00.DebugPtr =
           (UAnimInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar21 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar21 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
      this_00->bCreatedByLinkedAnimGraph = '\x01';
      UAnimInstance::InitializeAnimation(this_00.DebugPtr,false);
      if ((pUVar11->_padding_ & 0x20000000) != 0) {
        (**(code **)(*(longlong *)this_00.DebugPtr + 0x350))(this_00.DebugPtr);
        UAnimInstance::BlueprintBeginPlay(this_00.DebugPtr);
      }
      this_01 = AddInstance(this,this_00.DebugPtr);
      FLinkedAnimLayerInstanceData::AddLinkedFunction(this_01,param_2,this_00.DebugPtr);
      pUVar11 = UAnimInstance::GetSkelMeshComponentChecked(local_d0);
      pTVar2 = &pUVar11->LinkedInstances;
      pTVar19 = (TObjectPtr<UAnimInstance>_u_0 *)(pTVar2->AllocatorInstance).Data;
      local_e0.DebugPtr = this_00.DebugPtr;
      if ((pTVar19 <= &local_e0) &&
         (lVar16 = (longlong)(pUVar11->LinkedInstances).ArrayMax, &local_e0 < pTVar19 + lVar16)) {
        local_100 = (longlong)(pUVar11->LinkedInstances).ArrayNum;
        local_f8 = 8;
        local_118 = &local_e0;
        local_110 = pTVar19;
        local_108 = lVar16;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pUVar12 = (UAnimInstance *)(*pcVar4)();
          return pUVar12;
        }
      }
      iVar10 = (pUVar11->LinkedInstances).ArrayNum;
      piVar1 = &(pUVar11->LinkedInstances).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (pUVar11->LinkedInstances).ArrayNum = iVar10 + 1;
      ((TObjectPtr<UAnimInstance>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8))->
      DebugPtr = (UAnimInstance *)local_e0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (UAnimInstance *)this_00;
      }
      if (local_e0.DebugPtr == (UAnimInstance *)0x0) {
        return (UAnimInstance *)this_00;
      }
      UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
      return (UAnimInstance *)this_00;
    }
    uVar8 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    if (*(int *)(pFVar20 + -0x2c) == *(int *)pFVar20) break;
    pFVar15 = *(FScriptContainerElement **)(pFVar20 + 0xc);
    if (pFVar15 == (FScriptContainerElement *)0x0) {
      pFVar15 = pFVar20 + 4;
    }
    iVar9 = *(int *)(pFVar15 +
                    (ulonglong)(*(int *)(pFVar20 + 0x14) - 1U & param_2.Number + uVar8) * 4);
    if (iVar9 == -1) break;
    while (*(FName *)(*(longlong *)(pFVar20 + -0x34) + (longlong)iVar9 * 0x18) != param_2) {
      iVar9 = *(int *)(*(longlong *)(pFVar20 + -0x34) + 0x10 + (longlong)iVar9 * 0x18);
      if (iVar9 == -1) goto LAB_147554c15;
    }
    pTVar19 = pTVar19 + 0xc;
    pFVar20 = pFVar20 + 0x60;
  }
LAB_147554c15:
  if ((*(char *)(pTVar19 + 0xb) != '\0') &&
     (*(int *)(pFVar20 + -0x2c) == *(int *)((longlong)pTVar19 + 0x3c))) {
    UAnimInstance::RecalcRequiredBones((UAnimInstance *)(pTVar19->ObjectPtr).field0_0x0.Handle);
    pTVar2 = &pUVar11->LinkedInstances;
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    pFVar20 = pFVar15 + (longlong)(pUVar11->LinkedInstances).ArrayNum * 8;
    if (pFVar15 != pFVar20) {
      do {
        if (*(UObject **)pFVar15 == (pTVar19->ObjectPtr).field0_0x0.Handle) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Mesh->GetLinkedAnimInstances().Contains(LayerInstanceData.Instance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                             ,0x67,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pUVar12 = (UAnimInstance *)(*pcVar4)();
            return pUVar12;
          }
          break;
        }
        pFVar15 = pFVar15 + 8;
      } while (pFVar15 != pFVar20);
    }
    pTVar17 = (TObjectPtr<UAnimInstance>_u_0 *)(pTVar2->AllocatorInstance).Data;
    if ((pTVar17 <= pTVar19) &&
       (lVar16 = (longlong)(pUVar11->LinkedInstances).ArrayMax, pTVar19 < pTVar17 + lVar16)) {
      local_100 = (longlong)(pUVar11->LinkedInstances).ArrayNum;
      local_f8 = 8;
      local_118 = pTVar19;
      local_110 = pTVar17;
      local_108 = lVar16;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pUVar12 = (UAnimInstance *)(*pcVar4)();
        return pUVar12;
      }
    }
    iVar10 = (pUVar11->LinkedInstances).ArrayNum;
    piVar1 = &(pUVar11->LinkedInstances).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (pUVar11->LinkedInstances).ArrayNum = iVar10 + 1;
    pUVar3 = (pTVar19->ObjectPtr).field0_0x0.Handle;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  *param_3 = false;
  FLinkedAnimLayerInstanceData::AddLinkedFunction
            ((FLinkedAnimLayerInstanceData *)&pTVar19->ObjectPtr,param_2,
             (UAnimInstance *)(pTVar19->ObjectPtr).field0_0x0.Handle);
  return (UAnimInstance *)(pTVar19->ObjectPtr).field0_0x0.Handle;
}

// RemoveInstance @ 1475741e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLinkedAnimLayerClassData::RemoveInstance(FLinkedAnimLayerClassData *this,UAnimInstance *param_1)

{
  TArray<FLinkedAnimLayerInstanceData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UAnimInstance *pUVar4;
  AActor *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  USkeletalMeshComponent *pUVar8;
  UWorld *pUVar9;
  FUObjectItem *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  
  uVar13 = 0;
  if (0 < (this->InstancesData).ArrayNum) {
    pTVar1 = &this->InstancesData;
    lVar14 = 0;
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar13 < (this->InstancesData).ArrayNum) {
        uVar7 = uVar16;
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
      pUVar4 = *(UAnimInstance **)((pTVar1->AllocatorInstance).Data + lVar14);
      if (pUVar4 == (UAnimInstance *)0x0) {
        bVar6 = param_1 == (UAnimInstance *)0x0;
      }
      else {
        bVar6 = pUVar4 == param_1;
      }
      if (bVar6) {
        uVar7 = 0;
        if ((int)uVar13 < (this->InstancesData).ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x60;
        pUVar8 = UAnimInstance::GetSkelMeshComponentChecked(*(UAnimInstance **)pFVar15);
        if (pUVar8 == (USkeletalMeshComponent *)0x0) goto LAB_147574396;
        pUVar8 = UAnimInstance::GetSkelMeshComponentChecked(*(UAnimInstance **)pFVar15);
        pFVar12 = (pUVar8->LinkedInstances).AllocatorInstance.Data;
        pFVar3 = pFVar12 + (longlong)(pUVar8->LinkedInstances).ArrayNum * 8;
        if (pFVar12 == pFVar3) goto LAB_147574396;
        goto LAB_147574360;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x60;
    } while ((int)uVar13 < (this->InstancesData).ArrayNum);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                     ,0xb9,L"");
  if (!bVar6) {
    return;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
  while (pFVar12 = pFVar12 + 8, pFVar12 != pFVar3) {
LAB_147574360:
    if (*(longlong *)pFVar12 == *(longlong *)pFVar15) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InstanceData.Instance->GetSkelMeshComponent() || !InstanceData.Instance->GetSkelMeshComponent()->GetLinkedAnimInstances().Contains(InstanceData.Instance)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                         ,0xa8,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      break;
    }
  }
LAB_147574396:
  if ((*(int *)(pFVar15 + 0x10) != *(int *)(pFVar15 + 0x3c)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData.GetLinkedFunctions().Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                         ,0xaa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar15[0x58] != (FScriptContainerElement)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InstanceData.IsPersistent()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                         ,0xab,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = 0;
  if ((int)uVar13 < (this->InstancesData).ArrayNum) {
    uVar7 = uVar16;
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
  pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x60;
  *(undefined4 *)(pFVar15 + 0x50) = 0;
  if (*(void **)(pFVar15 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar15 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar15 + 8));
  iVar11 = (this->InstancesData).ArrayNum + ~uVar13;
  if (iVar11 != 0) {
    memmove(pFVar15,pFVar15 + 0x60,(longlong)iVar11 * 0x60);
  }
  piVar2 = &(this->InstancesData).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,&pTVar1->AllocatorInstance,(this->InstancesData).ArrayNum,
             &(this->InstancesData).ArrayMax);
  UAnimInstance::UninitializeAnimation(param_1);
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)param_1);
  if (!bVar6) {
    if (param_1 == (UAnimInstance *)0x0) goto LAB_147574504;
    pUVar8 = UAnimInstance::GetOwningComponent(param_1);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
    if (!bVar6) {
      if (pUVar8 == (USkeletalMeshComponent *)0x0) goto LAB_147574504;
      this_00 = (AActor *)pUVar8->_padding_;
      bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
      if ((!bVar6) || (this_00 == (AActor *)0x0)) goto LAB_147574504;
      pUVar9 = AActor::GetWorld(this_00);
      bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar9);
      if (!bVar6) goto LAB_147574504;
    }
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)param_1);
LAB_147574504:
  if (SharedLinkedAnimLayersConsoleCommands::MarkLayerAsGarbageOnUninitialize != 0) {
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    if ((((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_MirroredGarbage);
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    do {
      lVar14 = (pFVar10->field0_0x0).FlagsAndRefCount;
      uVar13 = (uint)((ulonglong)lVar14 >> 0x20);
      if ((uVar13 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar10 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar14 == (pFVar10->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar10->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar13 << 0x20 | (longlong)(int)lVar14 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar6);
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar10,Async);
  }
  return;
}

// RemoveLinkedFunction @ 147574800

void __thiscall
FLinkedAnimLayerClassData::RemoveLinkedFunction
          (FLinkedAnimLayerClassData *this,UAnimInstance *param_1,FName param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  UAnimInstance *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  bool bVar12;
  FName local_res20;
  UAnimInstance *local_58;
  USkeletalMeshComponent *local_50;
  
  pFVar10 = (this->InstancesData).AllocatorInstance.Data;
  pFVar6 = pFVar10 + (longlong)(this->InstancesData).ArrayNum * 0x60;
  if (pFVar10 != pFVar6) {
    while( true ) {
      if (*(UAnimInstance **)pFVar10 == (UAnimInstance *)0x0) {
        bVar12 = param_1 == (UAnimInstance *)0x0;
      }
      else {
        bVar12 = *(UAnimInstance **)pFVar10 == param_1;
      }
      if (bVar12) break;
      pFVar10 = pFVar10 + 0x60;
      if (pFVar10 == pFVar6) {
        return;
      }
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
      if (*(int *)(pFVar10 + 0x10) != *(int *)(pFVar10 + 0x3c)) {
        pFVar6 = *(FScriptContainerElement **)(pFVar10 + 0x48);
        if (*(FScriptContainerElement **)(pFVar10 + 0x48) == (FScriptContainerElement *)0x0) {
          pFVar6 = pFVar10 + 0x40;
        }
        iVar3 = *(int *)(pFVar6 + (ulonglong)
                                  (*(int *)(pFVar10 + 0x50) - 1U & param_2.Number + uVar2) * 4);
        if (iVar3 != -1) {
          do {
            if (*(FName *)(*(longlong *)(pFVar10 + 8) + (longlong)iVar3 * 0x18) == param_2)
            goto LAB_14757491b;
            iVar3 = *(int *)(*(longlong *)(pFVar10 + 8) + 0x10 + (longlong)iVar3 * 0x18);
          } while (iVar3 != -1);
        }
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LinkedFunctions.Contains(Function)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                          ,0x50,L"");
      if (bVar12) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_14757491b:
      local_res20 = param_2;
      if (*(int *)(pFVar10 + 0x10) != *(int *)(pFVar10 + 0x3c)) {
        uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
        TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UAnimInstance,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                             *)(pFVar10 + 8),param_2.Number + uVar2,&local_res20);
      }
      if (*(int *)(pFVar10 + 0x10) == *(int *)(pFVar10 + 0x3c)) {
        pUVar4 = UAnimInstance::GetSkelMeshComponentChecked(*(UAnimInstance **)pFVar10);
        local_50 = pUVar4;
        if (pUVar4 != (USkeletalMeshComponent *)0x0) {
          pFVar6 = (pUVar4->LinkedInstances).AllocatorInstance.Data;
          local_58 = param_1;
          if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
              ((FScriptContainerElement *)&local_58 <
               pFVar6 + (longlong)(pUVar4->LinkedInstances).ArrayMax * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = (pUVar4->LinkedInstances).ArrayNum;
          if (iVar3 != 0) {
            pFVar6 = (pUVar4->LinkedInstances).AllocatorInstance.Data;
            iVar11 = 0;
            bVar12 = *(UAnimInstance **)pFVar6 != local_58;
            lVar7 = 0;
            pUVar5 = local_58;
            iVar8 = 0;
            do {
              iVar9 = iVar8;
              do {
                lVar7 = lVar7 + 1;
                iVar9 = iVar9 + 1;
                if (iVar3 <= lVar7) break;
              } while (bVar12 == (*(UAnimInstance **)(pFVar6 + lVar7 * 8) != pUVar5));
              if (bVar12 != false) {
                if (iVar11 != iVar8) {
                  memmove(pFVar6 + (longlong)iVar11 * 8,pFVar6 + (longlong)iVar8 * 8,
                          (longlong)(iVar9 - iVar8) << 3);
                  pUVar5 = local_58;
                }
                iVar11 = iVar11 + (iVar9 - iVar8);
              }
              bVar12 = (bool)(bVar12 ^ 1);
              iVar8 = iVar9;
            } while (lVar7 < iVar3);
            (local_50->LinkedInstances).ArrayNum = iVar11;
          }
        }
        if (pFVar10[0x58] == (FScriptContainerElement)0x0) {
          RemoveInstance(this,param_1);
        }
      }
    }
  }
  return;
}

// SetPersistence @ 147579580

void __thiscall
FLinkedAnimLayerClassData::SetPersistence(FLinkedAnimLayerClassData *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  
  if (param_1 != this->bIsPersistent) {
    this->bIsPersistent = param_1;
    if (param_1) {
      iVar1 = (this->InstancesData).ArrayNum;
      if (iVar1 != 0) {
        if ((iVar1 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (this->InstancesData).AllocatorInstance.Data[0x58] = (FScriptContainerElement)0x1;
        return;
      }
    }
    else {
      pFVar7 = (this->InstancesData).AllocatorInstance.Data;
      iVar1 = (this->InstancesData).ArrayNum;
      pFVar5 = pFVar7;
      if (pFVar7 != pFVar7 + (longlong)iVar1 * 0x60) {
        while (pFVar5[0x58] == (FScriptContainerElement)0x0) {
          pFVar5 = pFVar5 + 0x60;
          if (pFVar5 == pFVar7 + (longlong)iVar1 * 0x60) {
            return;
          }
        }
        lVar6 = ((longlong)pFVar5 - (longlong)pFVar7) / 6 +
                ((longlong)pFVar5 - (longlong)pFVar7 >> 0x3f);
        uVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
        if (uVar8 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar8 < iVar1) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
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
          pFVar7 = (this->InstancesData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x60;
          pFVar7[0x58] = (FScriptContainerElement)0x0;
          if (*(int *)(pFVar7 + 0x10) == *(int *)(pFVar7 + 0x3c)) {
            RemoveInstance(this,*(UAnimInstance **)pFVar7);
          }
        }
      }
    }
  }
  return;
}

