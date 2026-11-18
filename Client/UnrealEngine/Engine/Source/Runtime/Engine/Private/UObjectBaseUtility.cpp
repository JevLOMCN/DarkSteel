// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// IsA<TSubclassOf<UActorComponent>_> @ 147376130

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<UActorComponent>_>
          (UObjectBaseUtility *this,TSubclassOf<UActorComponent> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        goto LAB_147376182;
      }
    }
  }
  lVar4 = 0;
LAB_147376182:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

// IsA<AActor> @ 1473761d0

bool __thiscall UObjectBaseUtility::IsA<AActor>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = AActor::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<USkeletalMeshComponent> @ 14742f560

bool __thiscall UObjectBaseUtility::IsA<USkeletalMeshComponent>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<UAnimMontage> @ 14752c950

bool __thiscall UObjectBaseUtility::IsA<UAnimMontage>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UAnimMontage_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<UBlendSpace> @ 14752c9a0

bool __thiscall UObjectBaseUtility::IsA<UBlendSpace>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = UBlendSpace::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<USkeleton> @ 14759e010

bool __thiscall UObjectBaseUtility::IsA<USkeleton>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = USkeleton::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<TSubclassOf<AActor>_> @ 1478a28c0

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<AActor>_>(UObjectBaseUtility *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        goto LAB_1478a2912;
      }
    }
  }
  lVar4 = 0;
LAB_1478a2912:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

// IsA<USkinnedMeshComponent> @ 147926340

bool __thiscall UObjectBaseUtility::IsA<USkinnedMeshComponent>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = USkinnedMeshComponent::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<UMaterialInstanceDynamic> @ 1479a0c70

bool __thiscall UObjectBaseUtility::IsA<UMaterialInstanceDynamic>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<AWorldSettings> @ 147e4d7c0

bool __thiscall UObjectBaseUtility::IsA<AWorldSettings>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_AWorldSettings_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<UMaterialInstance> @ 147eef510

bool __thiscall UObjectBaseUtility::IsA<UMaterialInstance>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UMaterialInstance_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<TSubclassOf<UAssetUserData>_> @ 1482d5f70

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<UAssetUserData>_>
          (UObjectBaseUtility *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UAssetUserData_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        goto LAB_1482d5fc2;
      }
    }
  }
  lVar4 = 0;
LAB_1482d5fc2:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

// GetStatID @ 14864f260

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UObjectBaseUtility::GetStatID(UObjectBaseUtility *this,bool param_1)

{
  TAtomic<FMinimalName> TVar1;
  FUObjectItem *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar4;
  FUObjectItem *this_00;
  undefined7 in_register_00000011;
  TStatIdData *pTVar5;
  char in_R8B;
  FName local_res8;
  
  pTVar5 = (TStatIdData *)CONCAT71(in_register_00000011,param_1);
  pTVar5->Name = (TAtomic<FMinimalName>)&TStatId::TStatId_NAME_None;
  pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
  if (in_R8B == '\0') {
    FVar4 = StatPtr_STAT_UObjectsStatGroupTester;
    if (StatPtr_STAT_UObjectsStatGroupTester ==
        (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_UObjectsStatGroupTester");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,*pFVar3,
                         L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects","STATCAT_Advanced",
                         L"UObjects",true,true,ST_int64,false,false,MCR_Invalid);
    }
    if ((((int)*(undefined8 *)FVar4 == 0) && ((int)((ulonglong)*(undefined8 *)FVar4 >> 0x20) == 0))
       || (FThreadStats::bPrimaryEnable == false)) {
      pTVar5->Name = (TAtomic<FMinimalName>)&TStatId::TStatId_NAME_None;
      return (TStatId)pTVar5;
    }
  }
  TVar1 = ((pFVar2->StatID).StatIdPtr)->Name;
  if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
    FUObjectItem::CreateStatID(this_00);
  }
  pTVar5->Name = (TAtomic<FMinimalName>)(pFVar2->StatID).StatIdPtr;
  return (TStatId)pTVar5;
}

// IsA<UTexture> @ 1487fc7e0

bool __thiscall UObjectBaseUtility::IsA<UTexture>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UTexture_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<TSubclassOf<UObject>_> @ 1488ff0a0

bool __thiscall
UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
          (UObjectBaseUtility *this,TSubclassOf<UObject> param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = *(longlong *)param_1.Class.field0_0x0;
        goto LAB_1488ff0f2;
      }
    }
  }
  lVar4 = 0;
LAB_1488ff0f2:
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    return true;
  }
  return false;
}

// IsA<ULevelStreamingPersistent> @ 1489ad940

bool __thiscall UObjectBaseUtility::IsA<ULevelStreamingPersistent>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<UWorld> @ 1489ad990

bool __thiscall UObjectBaseUtility::IsA<UWorld>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = UWorld::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

