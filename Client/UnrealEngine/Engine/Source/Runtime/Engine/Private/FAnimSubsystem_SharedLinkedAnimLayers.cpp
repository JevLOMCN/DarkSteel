// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 147517410

UScriptStruct * __cdecl FAnimSubsystem_SharedLinkedAnimLayers::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers,
                         (UObject *)pUVar1,L"AnimSubsystem_SharedLinkedAnimLayers");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.OuterSingleton;
}

// operator() @ 14753a4c0

bool __thiscall
`FAnimSubsystem_SharedLinkedAnimLayers::FindClassData'::__l2::<lambda_1>::operator()
          (void *this,FLinkedAnimLayerClassData *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  pUVar5 = (param_1->Class).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14753a4fa:
      pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14753a52b;
      }
    }
  }
  else if (pUVar5 != (UClass *)0x0) goto LAB_14753a4fa;
  pUVar5 = pUVar6;
LAB_14753a52b:
  lVar2 = *(longlong *)this;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)this;
      }
    }
  }
  return pUVar5 == pUVar6;
}

// operator() @ 14753c8b0

bool __thiscall
`FAnimSubsystem_SharedLinkedAnimLayers::RemovePersistentAnimLayerClass'::__l2::<lambda_1>::
operator()(void *this,FLinkedAnimLayerClassData *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  
  pUVar5 = (param_1->Class).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar5 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14753c8ea:
      pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar5->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14753c91b;
      }
    }
  }
  else if (pUVar5 != (UClass *)0x0) goto LAB_14753c8ea;
  pUVar5 = pUVar6;
LAB_14753c91b:
  lVar2 = *(longlong *)this;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)this;
      }
    }
  }
  return pUVar5 == pUVar6;
}

// AddLinkedFunction @ 147542a70

UAnimInstance * __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::AddLinkedFunction
          (FAnimSubsystem_SharedLinkedAnimLayers *this,UAnimInstance *param_1,
          TSubclassOf<UAnimInstance> param_2,FName param_3,bool *param_4)

{
  FLinkedAnimLayerClassData *this_00;
  UAnimInstance *pUVar1;
  UObject *local_res18 [2];
  
  local_res18[0] = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  this_00 = FindOrAddClassData(this,(TSubclassOf<UAnimInstance>)local_res18);
  pUVar1 = FLinkedAnimLayerClassData::FindOrAddInstanceForLinking(this_00,param_1,param_3,param_4);
  return pUVar1;
}

// FindClassData @ 1475544e0

FLinkedAnimLayerClassData * __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::FindClassData
          (FAnimSubsystem_SharedLinkedAnimLayers *this,TSubclassOf<UAnimInstance> param_1)

{
  bool bVar1;
  FLinkedAnimLayerClassData *pFVar2;
  FLinkedAnimLayerClassData *pFVar3;
  UObject *local_res8;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pFVar2 = (FLinkedAnimLayerClassData *)(this->ClassesData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->ClassesData).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FLinkedAnimLayerClassData *)0x0;
    }
    bVar1 = `FAnimSubsystem_SharedLinkedAnimLayers::FindClassData'::__l2::<lambda_1>::operator()
                      (&local_res8,pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindInstanceData @ 147554560

FLinkedAnimLayerInstanceData * __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::FindInstanceData
          (FAnimSubsystem_SharedLinkedAnimLayers *this,UAnimInstance *param_1)

{
  UAnimInstance *pUVar1;
  FLinkedAnimLayerClassData *pFVar2;
  FLinkedAnimLayerInstanceData *pFVar3;
  FLinkedAnimLayerInstanceData *pFVar4;
  bool bVar5;
  UObject *local_res10 [3];
  
  local_res10[0] = *(UObject **)&param_1->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  pFVar2 = FindClassData(this,(TSubclassOf<UAnimInstance>)local_res10);
  if (pFVar2 != (FLinkedAnimLayerClassData *)0x0) {
    pFVar3 = (FLinkedAnimLayerInstanceData *)(pFVar2->InstancesData).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (pFVar2->InstancesData).ArrayNum;
    while( true ) {
      if (pFVar3 == pFVar4) {
        return (FLinkedAnimLayerInstanceData *)0x0;
      }
      pUVar1 = (pFVar3->Instance).field0_0x0.DebugPtr;
      if (pUVar1 == (UAnimInstance *)0x0) {
        bVar5 = param_1 == (UAnimInstance *)0x0;
      }
      else {
        bVar5 = pUVar1 == param_1;
      }
      if (bVar5) break;
      pFVar3 = pFVar3 + 1;
    }
    return pFVar3;
  }
  return (FLinkedAnimLayerInstanceData *)0x0;
}

// FindOrAddClassData @ 147554900

FLinkedAnimLayerClassData * __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::FindOrAddClassData
          (FAnimSubsystem_SharedLinkedAnimLayers *this,TSubclassOf<UAnimInstance> param_1)

{
  int *piVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLinkedAnimLayerClassData *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement FVar10;
  UObject *local_res10;
  UObject *local_28;
  void *local_20;
  undefined8 local_18;
  FScriptContainerElement local_10;
  
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar6 = FindClassData(this,(TSubclassOf<UAnimInstance>)&local_res10);
  if (pFVar6 == (FLinkedAnimLayerClassData *)0x0) {
    iVar5 = TArray<TSubclassOf<UAnimInstance>,TSizedDefaultAllocator<32>_>::Find
                      (&this->PersistentClasses,
                       (TSubclassOf<UAnimInstance> *)param_1.Class.field0_0x0);
    pUVar2 = *(UObject **)param_1.Class.field0_0x0;
    FVar10 = (FScriptContainerElement)(iVar5 != -1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    local_20 = (void *)0x0;
    local_18 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    pFVar8 = (this->ClassesData).AllocatorInstance.Data;
    local_28 = pUVar2;
    local_10 = FVar10;
    if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar8 + (longlong)(this->ClassesData).ArrayMax * 0x20)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FLinkedAnimLayerClassData *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (this->ClassesData).ArrayNum;
    piVar1 = &(this->ClassesData).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->ClassesData).AllocatorInstance,piVar1);
    }
    (this->ClassesData).ArrayNum = iVar5 + 1;
    pFVar8 = (this->ClassesData).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
    *(UObject **)pFVar8 = local_28;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28);
    }
    *(undefined8 *)(pFVar8 + 8) = 0;
    *(void **)(pFVar8 + 8) = local_20;
    local_20 = (void *)0x0;
    *(undefined4 *)(pFVar8 + 0x10) = (undefined4)local_18;
    *(undefined4 *)(pFVar8 + 0x14) = local_18._4_4_;
    local_18 = 0;
    pFVar8[0x18] = local_10;
    DestructItems<FLinkedAnimLayerInstanceData,int>((FLinkedAnimLayerInstanceData *)0x0,0);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    iVar5 = (this->ClassesData).ArrayNum;
    uVar7 = iVar5 - 1;
    uVar9 = 0;
    if ((int)uVar7 < iVar5) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FLinkedAnimLayerClassData *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar6 = (FLinkedAnimLayerClassData *)
             ((this->ClassesData).AllocatorInstance.Data +
             (longlong)((this->ClassesData).ArrayNum + -1) * 0x20);
  }
  return pFVar6;
}

// GetFromMesh @ 14755bec0

FAnimSubsystem_SharedLinkedAnimLayers * __cdecl
FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(USkeletalMeshComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimSubsystem_SharedLinkedAnimLayers *pFVar3;
  UAnimInstance *pUVar4;
  UPackage *pUVar5;
  
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSubsystem_SharedLinkedAnimLayers.cpp"
                       ,0xe1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnimSubsystem_SharedLinkedAnimLayers *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = USkeletalMeshComponent::GetAnimInstance(param_1);
  if (pUVar4 != (UAnimInstance *)0x0) {
    pUVar4 = USkeletalMeshComponent::GetAnimInstance(param_1);
    if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers,
                           (UObject *)pUVar5,L"AnimSubsystem_SharedLinkedAnimLayers");
    }
    pFVar3 = (FAnimSubsystem_SharedLinkedAnimLayers *)
             UAnimInstance::FindSubsystem
                       (pUVar4,Z_Registration_Info_UScriptStruct_FAnimSubsystem_SharedLinkedAnimLayers
                               .OuterSingleton);
    return pFVar3;
  }
  return (FAnimSubsystem_SharedLinkedAnimLayers *)0x0;
}

// RemoveLinkedFunction @ 1475745f0

void __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::RemoveLinkedFunction
          (FAnimSubsystem_SharedLinkedAnimLayers *this,UAnimInstance *param_1,FName param_2)

{
  TArray<FLinkedAnimLayerClassData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  UObject *pUVar12;
  FLinkedAnimLayerClassData *this_00;
  uint uVar13;
  
  pFVar9 = (this->ClassesData).AllocatorInstance.Data;
  pTVar1 = &this->ClassesData;
  iVar8 = (this->ClassesData).ArrayNum;
  if (pFVar9 != pFVar9 + (longlong)iVar8 * 0x20) {
    pFVar11 = pFVar9;
    do {
      pUVar12 = *(UObject **)pFVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 != (UObject *)0x0) goto LAB_147574660;
LAB_14757468e:
        pUVar12 = (UObject *)0x0;
      }
      else {
        if (pUVar12 == (UObject *)0x0) goto LAB_14757468e;
        UE::GC::MarkAsReachable(pUVar12);
LAB_147574660:
        pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_14757468e;
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar12[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar3 * 8)
            != &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_14757468e;
      }
      if (pUVar12 == *(UObject **)&param_1->field_0x10) {
        uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar9 >> 5);
        if (uVar10 == 0xffffffff) {
          return;
        }
        uVar13 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < (this->ClassesData).ArrayNum) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FLinkedAnimLayerClassData *)
                  ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20);
        FLinkedAnimLayerClassData::RemoveLinkedFunction(this_00,param_1,param_2);
        if ((this_00->InstancesData).ArrayNum != 0) {
          return;
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->ClassesData).ArrayNum) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20;
        DestructItems<FLinkedAnimLayerInstanceData,int>
                  (*(FLinkedAnimLayerInstanceData **)(pFVar9 + 8),*(int *)(pFVar9 + 0x10));
        if (*(void **)(pFVar9 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar9 + 8));
        }
        iVar8 = (this->ClassesData).ArrayNum + ~uVar10;
        if (iVar8 != 0) {
          memmove(pFVar9,pFVar9 + 0x20,(longlong)iVar8 << 5);
        }
        piVar2 = &(this->ClassesData).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&pTVar1->AllocatorInstance,(this->ClassesData).ArrayNum,
                   &(this->ClassesData).ArrayMax);
        return;
      }
      pFVar11 = pFVar11 + 0x20;
    } while (pFVar11 != pFVar9 + (longlong)iVar8 * 0x20);
  }
  return;
}

// RemovePersistentAnimLayerClass @ 147574e00

void __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::RemovePersistentAnimLayerClass
          (FAnimSubsystem_SharedLinkedAnimLayers *this,TSubclassOf<UAnimInstance> param_1)

{
  int iVar1;
  TObjectPtr<UClass> TVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  FLinkedAnimLayerClassData *pFVar13;
  FLinkedAnimLayerClassData *pFVar14;
  int iVar15;
  TObjectPtr<UClass>_u_0 local_res8;
  UObject *local_res10;
  
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar14 = (FLinkedAnimLayerClassData *)(this->ClassesData).AllocatorInstance.Data;
  iVar15 = 0;
  iVar1 = (this->ClassesData).ArrayNum;
  for (pFVar13 = pFVar14; pFVar13 != pFVar14 + iVar1; pFVar13 = pFVar13 + 1) {
    bVar5 = `FAnimSubsystem_SharedLinkedAnimLayers::RemovePersistentAnimLayerClass'::__l2::
            <lambda_1>::operator()(&local_res10,pFVar13);
    if (bVar5) {
      uVar11 = (uint)((longlong)pFVar13 - (longlong)pFVar14 >> 5);
      if (uVar11 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar11 < (this->ClassesData).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (FLinkedAnimLayerClassData *)
                  ((this->ClassesData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x20);
        if (pFVar14->bIsPersistent != false) {
          pFVar14->bIsPersistent = false;
          pFVar10 = (pFVar14->InstancesData).AllocatorInstance.Data;
          iVar1 = (pFVar14->InstancesData).ArrayNum;
          pFVar8 = pFVar10;
          goto joined_r0x000147574efe;
        }
      }
      break;
    }
  }
LAB_147574faf:
  TVar2.field0_0x0 = (TObjectPtr<UClass>_u_0)(this->PersistentClasses).AllocatorInstance.Data;
  if ((((ulonglong)TVar2.field0_0x0 <= (ulonglong)param_1.Class.field0_0x0) &&
      ((ulonglong)param_1.Class.field0_0x0 <
       (ulonglong)((longlong)TVar2.field0_0x0 + (longlong)(this->PersistentClasses).ArrayMax * 8)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->PersistentClasses).ArrayNum;
  if (iVar1 != 0) {
    pFVar10 = (this->PersistentClasses).AllocatorInstance.Data;
    local_res8 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
    bVar5 = `TArray<TSubclassOf<UAnimInstance>,TSizedDefaultAllocator<32>_>::Remove'::__l2::
            <lambda_1>::operator()(&local_res8,(TSubclassOf<UAnimInstance> *)pFVar10);
    bVar5 = !bVar5;
    iVar12 = 0;
    do {
      iVar4 = iVar12;
      do {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) break;
        bVar6 = `TArray<TSubclassOf<UAnimInstance>,TSizedDefaultAllocator<32>_>::Remove'::__l2::
                <lambda_1>::operator()
                          (&local_res8,(TSubclassOf<UAnimInstance> *)(pFVar10 + (longlong)iVar4 * 8)
                          );
      } while (bVar5 == !bVar6);
      if (bVar5 != false) {
        if (iVar15 != iVar12) {
          memmove(pFVar10 + (longlong)iVar15 * 8,pFVar10 + (longlong)iVar12 * 8,
                  (longlong)(iVar4 - iVar12) << 3);
        }
        iVar15 = iVar15 + (iVar4 - iVar12);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar12 = iVar4;
    } while (iVar4 < iVar1);
    (this->PersistentClasses).ArrayNum = iVar15;
  }
  return;
joined_r0x000147574efe:
  if (pFVar8 == pFVar10 + (longlong)iVar1 * 0x60) goto LAB_147574faf;
  if (pFVar8[0x58] != (FScriptContainerElement)0x0) {
    lVar9 = ((longlong)pFVar8 - (longlong)pFVar10) / 6 +
            ((longlong)pFVar8 - (longlong)pFVar10 >> 0x3f);
    uVar11 = (int)(lVar9 >> 4) - (int)(lVar9 >> 0x3f);
    if (uVar11 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar11 < iVar1) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (pFVar14->InstancesData).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x60;
      pFVar10[0x58] = (FScriptContainerElement)0x0;
      if (*(int *)(pFVar10 + 0x10) == *(int *)(pFVar10 + 0x3c)) {
        FLinkedAnimLayerClassData::RemoveInstance(pFVar14,*(UAnimInstance **)pFVar10);
      }
    }
    goto LAB_147574faf;
  }
  pFVar8 = pFVar8 + 0x60;
  goto joined_r0x000147574efe;
}

// Reset @ 1475754f0

void __thiscall
FAnimSubsystem_SharedLinkedAnimLayers::Reset(FAnimSubsystem_SharedLinkedAnimLayers *this)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &(this->PersistentClasses).ArrayMax;
  (this->PersistentClasses).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PersistentClasses).AllocatorInstance,0,piVar1);
  }
  uVar2 = (this->ClassesData).ArrayNum;
  if (-1 < (int)uVar2) {
    DestructItems<FLinkedAnimLayerClassData,int>
              ((FLinkedAnimLayerClassData *)(this->ClassesData).AllocatorInstance.Data,uVar2);
    piVar1 = &(this->ClassesData).ArrayMax;
    (this->ClassesData).ArrayNum = 0;
    if (*piVar1 != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar2,&(this->ClassesData).AllocatorInstance,0,piVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

