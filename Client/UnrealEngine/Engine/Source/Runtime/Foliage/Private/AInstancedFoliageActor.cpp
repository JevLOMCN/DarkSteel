// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 28

// StaticClass @ 145ece950

UClass * __cdecl AInstancedFoliageActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InstancedFoliageActor",
               &Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton,
               StaticRegisterNativesAInstancedFoliageActor,800,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AInstancedFoliageActor>,
               InternalVTableHelperCtorCaller<AInstancedFoliageActor>,local_res8,
               AISMPartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton;
}

// AInstancedFoliageActor @ 145ed7e80

AInstancedFoliageActor * __thiscall
AInstancedFoliageActor::AInstancedFoliageActor(AInstancedFoliageActor *this,FVTableHelper *param_1)

{
  AISMPartitionActor::AISMPartitionActor((AISMPartitionActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManager__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManagerProvider__;
  *(undefined8 *)&this->FoliageInfos = 0;
  *(undefined8 *)&(this->FoliageInfos).field_0x8 = 0;
  *(undefined8 *)&(this->FoliageInfos).field_0x20 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x28 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->FoliageInfos).field_0x34 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FoliageInfos).field_0x40 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x48 = 0;
  return this;
}

// AInstancedFoliageActor @ 145ed7f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInstancedFoliageActor * __thiscall
AInstancedFoliageActor::AInstancedFoliageActor
          (AInstancedFoliageActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AISMPartitionActor::AISMPartitionActor((AISMPartitionActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManager__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManagerProvider__;
  *(undefined8 *)&this->FoliageInfos = 0;
  *(undefined8 *)&(this->FoliageInfos).field_0x8 = 0;
  *(undefined8 *)&(this->FoliageInfos).field_0x20 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x28 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->FoliageInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FoliageInfos).field_0x34 = 0;
  *(undefined8 *)&(this->FoliageInfos).field_0x40 = 0;
  *(undefined4 *)&(this->FoliageInfos).field_0x48 = 0;
  AActor::SetActorEnableCollision((AActor *)this,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  return this;
}

// ~AInstancedFoliageActor @ 145ed9e80

void __thiscall AInstancedFoliageActor::~AInstancedFoliageActor(AInstancedFoliageActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManager__;
  this->_padding_ = (longlong)&_vftable__for__ISMInstanceManagerProvider__;
  *(undefined4 *)&(this->FoliageInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FoliageInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FoliageInfos);
  AISMPartitionActor::~AISMPartitionActor((AISMPartitionActor *)this);
  return;
}

// AddFoliageInfo @ 145edd020

TUniqueObj<FFoliageInfo> * __thiscall
AInstancedFoliageActor::AddFoliageInfo
          (AInstancedFoliageActor *this,UFoliageType *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  TUniqueObj<FFoliageInfo> *pTVar1;
  TObjectPtr<UFoliageType>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Emplace<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
                     ((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                       *)&this->FoliageInfos,(TObjectPtr<UFoliageType> *)&local_res8.ObjectPtr,
                      param_2);
  return pTVar1;
}

// AddFoliageInfo @ 145edd070

TUniqueObj<FFoliageInfo> * __thiscall
AInstancedFoliageActor::AddFoliageInfo(AInstancedFoliageActor *this,UFoliageType *param_1)

{
  TUniqueObj<FFoliageInfo> *pTVar1;
  TObjectPtr<UFoliageType>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Emplace<TObjectPtr<UFoliageType>_>
                     ((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                       *)&this->FoliageInfos,(TObjectPtr<UFoliageType> *)&local_res8[0].ObjectPtr);
  return pTVar1;
}

// AddReferencedObjects @ 145eddfe0

void __cdecl
AInstancedFoliageActor::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FString *pFVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1 == (UObject *)0x0) {
    pFVar10 = GetTypeName<AInstancedFoliageActor>(&local_70);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar15);
  }
  pUVar9 = GetPrivateStaticClass();
  iVar12 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar12) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
      &pUVar9->_padding_)) {
    pFVar10 = GetTypeName<AInstancedFoliageActor>(&local_60);
    pwVar15 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UObject>(&local_50,param_1);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar15,pwVar14);
  }
  iVar16 = 0;
  iVar12 = *(int *)(param_1 + 0x13);
  puVar1 = &param_1[0x12].field_0x10;
  uVar7 = 1;
  iVar8 = 0;
  iVar18 = 0;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar19 = *(uint **)&param_1[0x12].field_0x20;
    if (*(uint **)&param_1[0x12].field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      iVar16 = iVar16 + 1;
      iVar18 = iVar18 + 0x20;
      iVar8 = iVar12;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 < iVar16) goto LAB_145ede0d2;
      uVar13 = puVar19[iVar16];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar8 = (int)lVar4 + -1 + iVar18;
    if (iVar12 < iVar8) {
      iVar8 = iVar12;
    }
LAB_145ede0d2:
    iVar11 = *(int *)(param_1 + 0x13);
  }
  uVar13 = *(uint *)(param_1 + 0x13);
  uVar20 = uVar13 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar7,iVar16);
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar18;
  uStack_78 = CONCAT44(uStack_a4,*(int *)&param_1[0x12].field_0x8 - *(int *)&param_1[0x13].field_0xc
                      );
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar11 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x13);
  if (uVar13 != uVar7) {
    puVar17 = puVar1;
    if (*(undefined1 **)&param_1[0x12].field_0x20 != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)&param_1[0x12].field_0x20;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      iVar12 = iVar12 + 1;
      uVar20 = uVar20 + 0x20;
      uVar13 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar12) goto LAB_145ede1e0;
      uVar13 = *(uint *)(puVar17 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (int)lVar4 + -1 + uVar20;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_145ede1e0:
  while( true ) {
    if (*(int *)&param_1[0x12].field_0x8 - *(int *)&param_1[0x13].field_0xc != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_98.CurrentBitIndex == uVar13) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)(param_1 + 0x12) + (longlong)TStack_98.CurrentBitIndex * 0x18;
    (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar4,param_1,0);
    plVar3 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,param_1,param_2);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  AActor::AddReferencedObjects(param_1,param_2);
  return;
}

// FindFoliageTypeOfClass @ 145ee18f0

FFoliageInfo * __thiscall
AInstancedFoliageActor::FindFoliageTypeOfClass
          (AInstancedFoliageActor *this,TSubclassOf<UFoliageType_InstancedStaticMesh> param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FFoliageInfo *pFVar11;
  UClass *pUVar12;
  longlong lVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->FoliageInfos).field_0x10;
  iVar17 = 0;
  iVar3 = *(int *)&(this->FoliageInfos).field_0x28;
  iVar18 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar17;
      iVar18 = iVar18 + 0x20;
      iVar17 = iVar17 + 1;
      iVar9 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar17) goto LAB_145ee199d;
      uVar16 = puVar19[lVar10 + 1];
    }
    uVar8 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar18;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145ee199d:
  uVar16 = *(uint *)&(this->FoliageInfos).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar17);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar18;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FoliageInfos).field_0x8 -
                       *(int *)&(this->FoliageInfos).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FFoliageInfo *)(*pcVar6)();
    return pFVar11;
  }
  uVar8 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar16 != uVar8) {
    puVar14 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar17;
      uVar15 = uVar15 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar8;
      if ((int)(((int)(uVar8 - 1) >> 0x1f & 0x1fU) + (uVar8 - 1)) >> 5 < iVar17) goto LAB_145ee1aa0;
      uVar16 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar16 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar8 < (int)uVar16) {
      uVar16 = uVar8;
    }
  }
LAB_145ee1aa0:
  do {
    if (*(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (FFoliageInfo *)0x0;
    }
    lVar4 = *(longlong *)&this->FoliageInfos;
    lVar5 = *(longlong *)(lVar4 + lVar10 * 0x18);
    if (lVar5 != 0) {
      lVar13 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar13 == 0) ||
         (pUVar12 = UFoliageType_InstancedStaticMesh::StaticClass(), pUVar12 == (UClass *)0x0)) {
LAB_145ee1b1b:
        lVar13 = 0;
      }
      else {
        iVar3 = (int)pUVar12->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_145ee1b1b;
        lVar13 = *(longlong *)param_1.Class.field0_0x0;
      }
      if (*(longlong *)(lVar5 + 0x10) == lVar13) {
        return *(FFoliageInfo **)(lVar4 + lVar10 * 0x18 + 8);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// FindInfo @ 145ee1b70

FFoliageInfo * __thiscall
AInstancedFoliageActor::FindInfo(AInstancedFoliageActor *this,UFoliageType *param_1)

{
  TUniqueObj<FFoliageInfo> *pTVar1;
  UFoliageType *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                   *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)local_res8);
  if (pTVar1 != (TUniqueObj<FFoliageInfo> *)0x0) {
    return (pTVar1->Obj).Ptr;
  }
  return (FFoliageInfo *)0x0;
}

// FindInfo @ 145ee1bc0

FFoliageInfo * __thiscall
AInstancedFoliageActor::FindInfo(AInstancedFoliageActor *this,UFoliageType *param_1)

{
  TUniqueObj<FFoliageInfo> *pTVar1;
  UFoliageType *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                   *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_res8);
  if (pTVar1 != (TUniqueObj<FFoliageInfo> *)0x0) {
    return (pTVar1->Obj).Ptr;
  }
  return (FFoliageInfo *)0x0;
}

// ForEachFoliageInfo @ 145ee2980

bool __thiscall
AInstancedFoliageActor::ForEachFoliageInfo
          (AInstancedFoliageActor *this,
          TFunctionRef<bool___cdecl(UFoliageType_*,FFoliageInfo_&)> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar14 = 0;
  puVar1 = &(this->FoliageInfos).field_0x10;
  iVar4 = *(int *)&(this->FoliageInfos).field_0x28;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ee2a2d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_145ee2a2d:
  uVar13 = *(uint *)&(this->FoliageInfos).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar9,iVar14);
  TStack_60.CurrentBitIndex = iVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar10;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FoliageInfos).field_0x8 -
                       *(int *)&(this->FoliageInfos).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ee2b30;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_145ee2b30:
  while( true ) {
    if (*(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar2 = (undefined8 *)
             (*(longlong *)&this->FoliageInfos + (longlong)TStack_60.CurrentBitIndex * 0x18);
    local_res20 = *puVar2;
    cVar8 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20,puVar2[1]);
    if (cVar8 == '\0') {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// GetAllFoliageTypesForSource @ 145ee2f00

void __thiscall
AInstancedFoliageActor::GetAllFoliageTypesForSource
          (AInstancedFoliageActor *this,UObject *param_1,
          TArray<UFoliageType_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  UObject *pUVar7;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  UObject *local_res10;
  longlong *local_a0;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->FoliageInfos).field_0x10;
  iVar10 = *(int *)&(this->FoliageInfos).field_0x28;
  pTVar2 = &this->FoliageInfos;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar12 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_145ee2fae;
      uVar13 = puVar16[lVar12 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_7c = (int)lVar12 + -1 + local_78;
    if (iVar10 < iStack_7c) {
      iStack_7c = iVar10;
    }
  }
LAB_145ee2fae:
  iStack_70 = *(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34;
  uVar13 = *(uint *)&(this->FoliageInfos).field_0x28;
  uStack_80 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_res10 = param_1;
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar7 = local_res10;
  uVar4 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145ee30c0;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_145ee30c0:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    local_a0 = *(longlong **)(*(longlong *)pTVar8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((local_a0 != (longlong *)0x0) &&
       (pUVar11 = (UObject *)(**(code **)(*local_a0 + 0x2b0))(), pUVar11 == pUVar7)) {
      pFVar5 = (param_2->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_a0) &&
         (((FScriptContainerElement *)&local_a0 < pFVar5 + (longlong)param_2->ArrayMax * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      *(longlong **)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_a0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetInstancedFoliageActorForCurrentLevel @ 145ee3790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AInstancedFoliageActor * __cdecl
AInstancedFoliageActor::GetInstancedFoliageActorForCurrentLevel(UWorld *param_1,bool param_2)

{
  ULevel *pUVar1;
  AInstancedFoliageActor *pAVar2;
  
  pUVar1 = UWorld::GetCurrentLevel(param_1);
  pAVar2 = GetInstancedFoliageActorForLevel(pUVar1,param_2);
  return pAVar2;
}

// GetInstancedFoliageActorForLevel @ 145ee37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInstancedFoliageActor * __cdecl
AInstancedFoliageActor::GetInstancedFoliageActorForLevel(ULevel *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UActorPartitionSubsystem *this;
  AInstancedFoliageActor *pAVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_e8 [32];
  AInstancedFoliageActor *local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (param_1 == (ULevel *)0x0) {
    return (AInstancedFoliageActor *)0x0;
  }
  pUVar4 = ULevel::GetWorld(param_1);
  pUVar5 = Z_Construct_UClass_UActorPartitionSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_145ee382b;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_145ee382b:
    pUVar6 = Z_Construct_UClass_UActorPartitionSubsystem_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_145ee385b;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_145ee385b:
  this = (UActorPartitionSubsystem *)
         FSubsystemCollectionBase::GetSubsystemInternal
                   ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar5);
  bVar3 = UActorPartitionSubsystem::IsLevelPartition(this);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6719006791587329152>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Foliage\\Private\\InstancedFoliage.cpp"
                         ,0xb80,
                         "InLevel->GetWorld()->GetSubsystem<UActorPartitionSubsystem>()->IsLevelPartition()"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pAVar7 = (AInstancedFoliageActor *)(*pcVar2)();
    return pAVar7;
  }
  pAVar7 = (AInstancedFoliageActor *)FWeakObjectPtr::Get(&(param_1->InstancedFoliageActor).WeakPtr);
  if ((pAVar7 == (AInstancedFoliageActor *)0x0) && (param_2)) {
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
    local_88._32_8_ = param_1;
    pUVar4 = ULevel::GetWorld(param_1);
    pUVar5 = StaticClass();
    pAVar7 = (AInstancedFoliageActor *)
             UWorld::SpawnActor(pUVar4,pUVar5,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                (FActorSpawnParameters *)local_88);
    if (pAVar7 == (AInstancedFoliageActor *)0x0) {
      pAVar7 = (AInstancedFoliageActor *)0x0;
    }
    else {
      pUVar5 = StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar8 = GetTypeName<AInstancedFoliageActor>(&local_b0);
        pwVar11 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<AActor>(&local_a0,(AActor *)pAVar7);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar11,pwVar10);
      }
    }
    local_b8 = pAVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar7 != (AInstancedFoliageActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar7);
    }
    FWeakObjectPtr::operator=(&(param_1->InstancedFoliageActor).WeakPtr,(FObjectPtr)&local_b8);
    if (local_88._64_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return pAVar7;
}

// GetLocalFoliageTypeForSource @ 145ee3d30

UFoliageType * __thiscall
AInstancedFoliageActor::GetLocalFoliageTypeForSource
          (AInstancedFoliageActor *this,UObject *param_1,FFoliageInfo **param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  UFoliageType *pUVar12;
  longlong lVar13;
  UObject *pUVar14;
  FUObjectItem *pFVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint *puVar23;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FFoliageInfo **local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  UFoliageType *pUVar20;
  UFoliageType *pUVar22;
  
  pUVar12 = (UFoliageType *)0x0;
  puVar1 = &(this->FoliageInfos).field_0x10;
  uVar3 = *(uint *)&(this->FoliageInfos).field_0x28;
  uVar21 = 0;
  uVar9 = 1;
  uVar19 = 0;
  uVar10 = uVar21;
  if (uVar3 != 0) {
    puVar23 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar10 = *puVar23;
    pUVar20 = pUVar12;
    pUVar22 = pUVar12;
    uVar19 = 0;
    uVar21 = 0;
    while (uVar10 == 0) {
      iVar17 = (int)pUVar22;
      uVar19 = (int)pUVar20 + 0x20;
      pUVar20 = (UFoliageType *)(ulonglong)uVar19;
      uVar21 = iVar17 + 1;
      pUVar22 = (UFoliageType *)(ulonglong)uVar21;
      uVar10 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < (int)uVar21)
      goto LAB_145ee3ddd;
      uVar10 = puVar23[(longlong)iVar17 + 1];
    }
    uVar9 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar10 = (uVar19 - 1) + local_res20;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_145ee3ddd:
  uVar11 = *(uint *)&(this->FoliageInfos).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,uVar21);
  TStack_70.CurrentBitIndex = uVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar11 >> 5;
  TStack_70._28_4_ = uVar10;
  TStack_70.BaseBitIndex = uVar19;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->FoliageInfos).field_0x8 -
                       *(int *)&(this->FoliageInfos).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || ((int)uVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar12 = (UFoliageType *)(*pcVar5)();
    return pUVar12;
  }
  pUVar6 = local_res10;
  uVar3 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar11 != uVar3) {
    puVar16 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar13 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar11 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar17) goto LAB_145ee3ee0;
      uVar19 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar11 = (int)lVar13 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
  }
LAB_145ee3ee0:
  do {
    if (*(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar13 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (pUVar20 = pUVar12, TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1))
    goto LAB_145ee3f83;
    lVar4 = *(longlong *)&this->FoliageInfos;
    pUVar20 = *(UFoliageType **)(lVar4 + lVar13 * 0x18);
    if (((pUVar20 != (UFoliageType *)0x0) &&
        ((pUVar14 = (UObject *)(**(code **)(pUVar20->_padding_ + 0x2b0))(pUVar20), pUVar14 == pUVar6
         && (cVar8 = (**(code **)(pUVar20->_padding_ + 0x1c0))(pUVar20), cVar8 == '\0')))) &&
       (pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(pUVar20->_padding_ + 0xc)),
       ((uint)((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
      pUVar12 = *(UFoliageType **)(lVar4 + lVar13 * 0x18 + 8);
LAB_145ee3f83:
      if (local_res18 != (FFoliageInfo **)0x0) {
        *local_res18 = (FFoliageInfo *)pUVar12;
      }
      return pUVar20;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// GetOverlappingBoxCount @ 145ee4170

int __thiscall
AInstancedFoliageActor::GetOverlappingBoxCount
          (AInstancedFoliageActor *this,UFoliageType *param_1,TBox<double> *param_2)

{
  FFoliageInfo *pFVar1;
  FFoliageImpl *pFVar2;
  int iVar3;
  TUniqueObj<FFoliageInfo> *pTVar4;
  UFoliageType *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar4 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                   *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_res8);
  if (((pTVar4 != (TUniqueObj<FFoliageInfo> *)0x0) &&
      (pFVar1 = (pTVar4->Obj).Ptr, pFVar1 != (FFoliageInfo *)0x0)) &&
     (pFVar2 = (pFVar1->Implementation).Ptr, pFVar2 != (FFoliageImpl *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145ee41f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((longlong)*pFVar2 + 0x30))(pFVar2,param_2);
    return iVar3;
  }
  return 0;
}

// GetOverlappingBoxTransforms @ 145ee4270

void __thiscall
AInstancedFoliageActor::GetOverlappingBoxTransforms
          (AInstancedFoliageActor *this,UFoliageType *param_1,TBox<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FFoliageInfo *pFVar1;
  FFoliageImpl *pFVar2;
  TUniqueObj<FFoliageInfo> *pTVar3;
  UFoliageType *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                   *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_res8);
  if (((pTVar3 != (TUniqueObj<FFoliageInfo> *)0x0) &&
      (pFVar1 = (pTVar3->Obj).Ptr, pFVar1 != (FFoliageInfo *)0x0)) &&
     (pFVar2 = (pFVar1->Implementation).Ptr, pFVar2 != (FFoliageImpl *)0x0)) {
    (**(code **)((longlong)*pFVar2 + 0x38))(pFVar2,param_2,param_3);
  }
  return;
}

// GetOverlappingMeshCounts @ 145ee44c0

void __thiscall
AInstancedFoliageActor::GetOverlappingMeshCounts
          (AInstancedFoliageActor *this,TSphere<double> *param_1,
          TMap<UStaticMesh_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_*,int,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  TSphere<double> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  TSphere<double> *local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar15 = 0;
  puVar1 = &(this->FoliageInfos).field_0x10;
  iVar3 = *(int *)&(this->FoliageInfos).field_0x28;
  uVar8 = 1;
  iVar13 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145ee456d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar13;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145ee456d:
  uVar12 = *(uint *)&(this->FoliageInfos).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar15);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FoliageInfos).field_0x8 -
                       *(int *)&(this->FoliageInfos).field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res10;
  uVar8 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145ee4670;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_145ee4670:
  while( true ) {
    if (*(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)
              (*(longlong *)&this->FoliageInfos + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 8), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x40))(plVar4,pTVar6,param_2);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetOverlappingSphereCount @ 145ee4700

int __thiscall
AInstancedFoliageActor::GetOverlappingSphereCount
          (AInstancedFoliageActor *this,UFoliageType *param_1,TSphere<double> *param_2)

{
  FFoliageInfo *pFVar1;
  FFoliageImpl *pFVar2;
  int iVar3;
  TUniqueObj<FFoliageInfo> *pTVar4;
  UFoliageType *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar4 = TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
           ::Find((TMapBase<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
                   *)&this->FoliageInfos,(TObjectPtr<UFoliageType_const_>)&local_res8);
  if (((pTVar4 != (TUniqueObj<FFoliageInfo> *)0x0) &&
      (pFVar1 = (pTVar4->Obj).Ptr, pFVar1 != (FFoliageInfo *)0x0)) &&
     (pFVar2 = (pFVar1->Implementation).Ptr, pFVar2 != (FFoliageImpl *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145ee4789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2,param_2);
    return iVar3;
  }
  return 0;
}

// GetPrivateStaticClass @ 145ee4b50

UClass * __cdecl AInstancedFoliageActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InstancedFoliageActor",
               &Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton,
               StaticRegisterNativesAInstancedFoliageActor,800,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AInstancedFoliageActor>,
               InternalVTableHelperCtorCaller<AInstancedFoliageActor>,local_res8,
               AISMPartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInstancedFoliageActor.InnerSingleton;
}

// GetSMInstanceManager @ 145ee5e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISMInstanceManager * __thiscall
AInstancedFoliageActor::GetSMInstanceManager(AInstancedFoliageActor *this,FSMInstanceId *param_1)

{
  return (ISMInstanceManager *)0x0;
}

// InternalTakeRadialDamage @ 145ee75e0

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
AInstancedFoliageActor::InternalTakeRadialDamage
          (AInstancedFoliageActor *this,float param_1,FRadialDamageEvent *param_2,
          AController *param_3,AActor *param_4)

{
  return param_1;
}

// IsLevelBoundsRelevant @ 145ee7890

bool __thiscall AInstancedFoliageActor::IsLevelBoundsRelevant(AInstancedFoliageActor *this)

{
  return false;
}

// PostLoad @ 145ee7e30

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall AInstancedFoliageActor::PostLoad(AInstancedFoliageActor *this)

{
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  FTokenizedMessage *pFVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  UObject *pUVar10;
  TObjectPtr<AActor> *pTVar11;
  AActor *this_00;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code *pcVar15;
  TConsoleVariableData<int> *pTVar16;
  TConsoleVariableData<float> *pTVar17;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar18;
  bool bVar19;
  ULevel *this_01;
  UPackage *pUVar20;
  FText *pFVar21;
  FMessageLog *pFVar22;
  TSharedRef<FTokenizedMessage,1> *pTVar23;
  TSharedRef<FUObjectToken,1> *pTVar24;
  FTextFormat *pFVar25;
  TSharedRef<FTextToken,1> *pTVar26;
  UWorld *this_02;
  longlong *plVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  ForAnyElementType FVar31;
  int iVar32;
  uint uVar33;
  ForElementType<unsigned_int> FVar34;
  undefined1 *puVar35;
  int iVar36;
  uint *puVar37;
  uint uVar38;
  ulonglong unaff_R15;
  ulonglong uVar39;
  float fVar40;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_348 [4];
  uint local_344;
  uint local_340;
  ulonglong local_338;
  ForElementType<unsigned_int> local_330;
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  int local_318;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_310
  ;
  TArray<UFoliageInstancedStaticMeshComponent_*,TSizedDefaultAllocator<32>_> local_300;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_2f0;
  int iStack_2e8;
  uint uStack_2e4;
  undefined1 *local_2e0;
  undefined4 uStack_2d8;
  int iStack_2d4;
  int local_2d0;
  undefined4 uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  AInstancedFoliageActor *local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_288;
  FString local_280;
  TSharedRef<IMessageToken,1> local_270;
  TSharedRef<IMessageToken,1> local_260;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_250;
  undefined1 auStack_248 [16];
  uint uStack_238;
  uint uStack_234;
  undefined8 local_230;
  undefined8 uStack_228;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  FString local_1f0;
  FFormatArgumentValue local_1e0;
  FText local_1c0;
  FText local_1b0;
  TSharedRef<FTokenizedMessage,1> local_1a0;
  TSharedRef<FUObjectToken,1> local_190;
  FText local_180;
  TSharedRef<FTokenizedMessage,1> local_170;
  FText local_160;
  FText local_150;
  TSharedRef<FTokenizedMessage,1> local_140;
  TSharedRef<FTextToken,1> local_130;
  FTextFormat local_120;
  longlong local_108;
  FMessageLog local_100;
  FMessageLog local_d0;
  undefined4 local_84;
  undefined4 local_64;
  
  AActor::PostLoad((AActor *)this);
  this_01 = AActor::GetLevel((AActor *)this);
  iVar32 = 0;
  iVar36 = 0;
  if (((this_01 != (ULevel *)0x0) && (this_01->bIsPartitioned == '\0')) &&
     (*(longlong *)&(this_01->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0)) {
    bVar19 = FWeakObjectPtr::IsValid(&(this_01->InstancedFoliageActor).WeakPtr);
    if (bVar19) {
      local_310.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_310.Pairs.ArrayNum = 0;
      local_310.Pairs.ArrayMax = 0;
      pUVar20 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
      local_2a0 = (FName)pUVar20->_padding_;
      ::FName::ToString(&local_2a0,&local_280);
      FVar31.Data = (FScriptContainerElement *)L"";
      if (local_280.Data.ArrayNum != 0) {
        FVar31.Data = local_280.Data.AllocatorInstance.Data;
      }
      pFVar21 = FText::FromString(&local_150,(wchar_t *)FVar31.Data);
      local_1e0.Type = Text;
      FText::FText((FText *)&local_1e0.TextValue,pFVar21);
      if ((local_1e0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar19)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      ::FString::FString(&local_1f0,L"Level");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_310,&local_1f0,&local_1e0);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_1e0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_1e0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      ::FName::FName(&local_298,"MapCheck");
      pFVar22 = FMessageLog::FMessageLog(&local_d0,&local_298);
      pFVar21 = FText::FText(&local_160);
      pTVar23 = FMessageLog::Warning(pFVar22,&local_170,pFVar21);
      pFVar6 = pTVar23->Object;
      pFVar21 = FText::FText(&local_180);
      pTVar24 = FUObjectToken::Create(&local_190,(UObject *)this,pFVar21);
      local_260.Object = (IMessageToken *)pTVar24->Object;
      local_260.SharedReferenceCount.ReferenceController =
           (pTVar24->SharedReferenceCount).ReferenceController;
      if (local_260.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_260.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar23 = FTokenizedMessage::AddToken(pFVar6,&local_1a0,&local_260);
      pFVar6 = pTVar23->Object;
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b0,L"InstancedFoliage",L"MapCheck_DuplicateInstancedFoliageActor"
                           ,L"Level {Level} has an unexpected duplicate Instanced Foliage Actor.");
      pFVar25 = FTextFormat::FTextFormat(&local_120,pFVar21,Default);
      pFVar21 = FText::Format(&local_1c0,pFVar25,&local_310);
      pTVar26 = FTextToken::Create(&local_130,pFVar21,true);
      local_270.Object = (IMessageToken *)pTVar26->Object;
      local_270.SharedReferenceCount.ReferenceController =
           (pTVar26->SharedReferenceCount).ReferenceController;
      if (local_270.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_270.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar6,&local_140,&local_270);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_270.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      if (local_180.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_d0);
      ::FName::FName(&local_290,"MapCheck");
      pFVar22 = FMessageLog::FMessageLog(&local_100,&local_290);
      FMessageLog::Open(pFVar22,Warning,false);
      FMessageLog::~FMessageLog(&local_100);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_310.Pairs.AllocatorInstance.Data,
                 local_310.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_310.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_310.Pairs.AllocatorInstance.Data);
      }
    }
    else {
      local_2a8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (AInstancedFoliageActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(this_01->InstancedFoliageActor).WeakPtr,(FObjectPtr)&local_2a8);
    }
  }
  pTVar16 = CVarFoliageDiscardDataOnLoad.Ref;
  bVar19 = IsInParallelGameThread();
  if (((!bVar19) && (bVar19 = IsInGameThread(), !bVar19)) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar17 = CVarFoliageCullDistanceScale.Ref;
  local_318 = pTVar16->ShadowedValue[0];
  bVar19 = IsInParallelGameThread();
  if (((!bVar19) && (bVar19 = IsInGameThread(), !bVar19)) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_330 = (ForElementType<unsigned_int>)&(this->FoliageInfos).field_0x10;
  fVar40 = pTVar17->ShadowedValue[0];
  if (__real_3f800000 <= pTVar17->ShadowedValue[0]) {
    fVar40 = __real_3f800000;
  }
  iVar29 = *(int *)&(this->FoliageInfos).field_0x28;
  local_2f0 = &this->FoliageInfos;
  uVar39 = unaff_R15 & 0xffffffffffffff00;
  local_344 = (uint)uVar39;
  local_338 = 1;
  if (fVar40 <= 0.0) {
    fVar40 = 0.0;
  }
  uStack_2e4 = 1;
  iStack_2d4 = iVar36;
  iStack_2e8 = 0;
  if (iVar29 != 0) {
    puVar37 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar37 == (uint *)0x0) {
      puVar37 = (uint *)&(this->FoliageInfos).field_0x10;
    }
    uVar33 = *puVar37;
    iVar36 = 0;
    while (uVar33 == 0) {
      lVar28 = (longlong)iStack_2e8;
      iVar36 = iVar36 + 0x20;
      iStack_2e8 = iStack_2e8 + 1;
      iStack_2d4 = iVar29;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2e8) goto LAB_145ee8324;
      uVar33 = puVar37[lVar28 + 1];
    }
    uStack_2e4 = -uVar33 & uVar33;
    uVar3 = (ulonglong)uStack_2e4 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_2b8 = (int)lVar28;
    iStack_2d4 = iVar36 + -1 + local_2b8;
    if (iVar29 < iStack_2d4) {
      iStack_2d4 = iVar29;
    }
  }
LAB_145ee8324:
  local_2e0 = &(this->FoliageInfos).field_0x10;
  uVar33 = *(uint *)&(this->FoliageInfos).field_0x28;
  uStack_2cc = local_84;
  iStack_2c8 = *(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34;
  uVar38 = uVar33 & 0xffffffe0;
  uStack_2d8 = 0xffffffff;
  auStack_248._0_8_ = CONCAT44(uStack_2e4,iStack_2e8);
  uStack_238 = 0xffffffff;
  auStack_248._8_8_ = local_2e0;
  uStack_234 = iStack_2d4;
  iVar30 = (int)uVar33 >> 5;
  local_230._4_4_ = local_84;
  local_230._0_4_ = iVar36;
  uStack_228 = CONCAT44(uStack_2c4,iStack_2c8);
  local_2d0 = iVar36;
  local_340 = uVar33;
  local_288 = local_2f0;
  local_250 = local_2f0;
  if ((((int)uVar33 < 0) || (iVar29 < (int)uVar33)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar5 = *(int *)((longlong)local_330 + 0x18);
  if (uVar33 != uVar5) {
    FVar34 = *(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_330 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_330;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar30 * 4);
    while (uVar33 == 0) {
      lVar28 = (longlong)iVar30;
      uVar38 = uVar38 + 0x20;
      iVar30 = iVar30 + 1;
      uVar33 = uVar5;
      local_340 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_145ee8450;
      uVar33 = *(uint *)((undefined1 *)((longlong)FVar34 + 4) + lVar28 * 4);
    }
    uVar3 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_2b4 = (int)lVar28;
    uVar33 = (uVar38 - 1) + local_2b4;
    local_340 = uVar33;
    if ((int)uVar5 < (int)uVar33) {
      uVar33 = uVar5;
      local_340 = uVar5;
    }
  }
LAB_145ee8450:
  while( true ) {
    pTVar1 = local_250;
    if (*(int *)&local_250->field_0x8 - *(int *)&local_250->field_0x34 != (int)uStack_228) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar28 = (longlong)(int)uStack_234;
    if (((uStack_234 == uVar33) && ((ForElementType<unsigned_int>)auStack_248._8_8_ == local_330))
       && (pTVar1 == local_288)) break;
    lVar7 = *(longlong *)pTVar1;
    if ((local_318 == 0) ||
       ((lVar8 = *(longlong *)(lVar7 + lVar28 * 0x18), lVar8 != 0 &&
        ((*(uint *)(lVar8 + 0x4a4) & 0x10000) == 0)))) {
      lVar8 = *(longlong *)(lVar7 + lVar28 * 0x18);
      if ((lVar8 != 0) &&
         (((*(uint *)(lVar8 + 0x4a4) & 0x20000) != 0 &&
          (pcVar9 = *(char **)(lVar7 + 8 + lVar28 * 0x18), *pcVar9 == '\x01')))) {
        lVar8 = *(longlong *)(pcVar9 + 8);
        pUVar10 = *(UObject **)(lVar8 + 0x10);
        if (pUVar10 != (UObject *)0x0) {
          UObject::ConditionalPostLoad(pUVar10);
          lVar28 = *(longlong *)(lVar7 + lVar28 * 0x18);
          if ((*(uint *)(lVar28 + 0x4a4) & 0x20000) == 0) {
            uVar14 = *(undefined8 *)(lVar28 + 0x17c);
            iVar29 = (int)uVar14;
            local_2c0._4_4_ = (int)((ulonglong)uVar14 >> 0x20);
            iVar36 = local_2c0._4_4_;
            local_2c0 = uVar14;
          }
          else {
            iVar29 = (int)((float)*(int *)(lVar28 + 0x17c) * fVar40);
            iVar36 = (int)((float)*(int *)(lVar28 + 0x180) * fVar40);
          }
          UInstancedStaticMeshComponent::SetCullDistances
                    (*(UInstancedStaticMeshComponent **)(lVar8 + 0x10),iVar29,iVar36);
        }
      }
    }
    else {
      pcVar9 = *(char **)(lVar7 + 8 + lVar28 * 0x18);
      cVar4 = *pcVar9;
      if (cVar4 == '\x01') {
        lVar8 = *(longlong *)(pcVar9 + 8);
        pUVar10 = *(UObject **)(lVar8 + 0x10);
        if (pUVar10 != (UObject *)0x0) {
          UObject::ConditionalPostLoad(pUVar10);
          plVar27 = *(longlong **)(lVar8 + 0x10);
          (**(code **)(*plVar27 + 0x4a0))(plVar27,0);
        }
      }
      else if (cVar4 == '\x02') {
        lVar8 = *(longlong *)(pcVar9 + 8);
        local_328.Data = (FScriptContainerElement *)0x0;
        iVar36 = *(int *)(lVar8 + 0x10);
        pTVar11 = *(TObjectPtr<AActor> **)(lVar8 + 8);
        local_320 = iVar36;
        if (iVar36 == 0) {
          local_31c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar36,0,&local_328,iVar36,&local_31c);
          ConstructItems<AActor_*,TObjectPtr<AActor>,int>(local_328.Data,pTVar11,iVar36);
        }
        *(undefined4 *)(lVar8 + 0x10) = 0;
        if (*(int *)(lVar8 + 0x14) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(lVar8 + 8),0,(int *)(lVar8 + 0x14));
        }
        iVar36 = local_320;
        pFVar2 = local_328.Data + (longlong)local_320 * 8;
        FVar31.Data = local_328.Data;
        while( true ) {
          if (local_320 != iVar36) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar31.Data == pFVar2) break;
          this_00 = *(AActor **)FVar31.Data;
          if (this_00 != (AActor *)0x0) {
            UObject::ConditionalPostLoad((UObject *)this_00);
            this_02 = AActor::GetWorld(this_00);
            UWorld::DestroyActor(this_02,this_00,false,true);
          }
          FVar31.Data = FVar31.Data + 8;
        }
        if (local_328.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data);
        }
        uVar39 = (ulonglong)local_344;
      }
      else {
        uVar39 = uVar39 & 0xff;
        if (cVar4 == '\x03') {
          uVar39 = local_338 & 0xffffffff;
        }
        local_344 = (uint)uVar39;
      }
      puVar12 = *(undefined1 **)(lVar7 + 8 + lVar28 * 0x18);
      *puVar12 = 1;
      plVar27 = (longlong *)(puVar12 + 8);
      if (plVar27 != &local_108) {
        puVar13 = (undefined8 *)*plVar27;
        *plVar27 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          (**(code **)*puVar13)();
        }
      }
    }
    uStack_238 = uStack_238 & ~auStack_248._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_248);
    uVar33 = local_340;
  }
  if ((char)uVar39 != '\0') {
    local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.ArrayNum = 0;
    local_300.ArrayMax = 0;
    AActor::GetComponents<UFoliageInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>
              ((AActor *)this,&local_300,false);
    iVar36 = local_300.ArrayNum;
    pFVar2 = local_300.AllocatorInstance.Data + (longlong)local_300.ArrayNum * 8;
    FVar31.Data = local_300.AllocatorInstance.Data;
    while( true ) {
      if (local_300.ArrayNum != iVar36) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UFoliageInstancedStaticMeshComponent_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar31.Data == pFVar2) break;
      pUVar10 = *(UObject **)FVar31.Data;
      if ((pUVar10 != (UObject *)0x0) && (pUVar10[0x4b].field_0x10 != '\0')) {
        UObject::ConditionalPostLoad(pUVar10);
        (**(code **)(*(longlong *)pUVar10 + 0x4a0))(pUVar10,0);
      }
      FVar31.Data = FVar31.Data + 8;
    }
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
  }
  local_2e0 = &(this->FoliageInfos).field_0x10;
  iVar36 = *(int *)&(this->FoliageInfos).field_0x28;
  pTVar1 = &this->FoliageInfos;
  iStack_2d4 = iVar32;
  local_2d0 = iVar32;
  if (iVar36 == 0) {
LAB_145ee87ed:
    uStack_2e4 = (uint)local_338;
  }
  else {
    puVar37 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar37 == (uint *)0x0) {
      puVar37 = (uint *)local_2e0;
    }
    uStack_2e4 = *puVar37;
    while (uStack_2e4 == 0) {
      lVar28 = (longlong)iVar32;
      local_2d0 = local_2d0 + 0x20;
      iVar32 = iVar32 + 1;
      iStack_2d4 = iVar36;
      if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar32) goto LAB_145ee87ed;
      uStack_2e4 = puVar37[lVar28 + 1];
    }
    uStack_2e4 = -uStack_2e4 & uStack_2e4;
    uVar39 = (ulonglong)uStack_2e4 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_2b0 = (int)lVar28;
    iStack_2d4 = local_2d0 + -1 + local_2b0;
    if (iVar36 < iStack_2d4) {
      iStack_2d4 = iVar36;
    }
  }
  puVar12 = &(this->FoliageInfos).field_0x10;
  uStack_2cc = local_64;
  iStack_2c8 = *(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34;
  uVar33 = *(uint *)&(this->FoliageInfos).field_0x28;
  uStack_2d8 = 0xffffffff;
  uVar38 = uVar33 & 0xffffffe0;
  TStack_218._padding_ = CONCAT44(uStack_2e4,iVar32);
  TStack_218.CurrentBitIndex = iStack_2d4;
  TStack_218.UnvisitedBitMask = 0xffffffff;
  iVar36 = (int)uVar33 >> 5;
  TStack_218._28_4_ = local_64;
  TStack_218.BaseBitIndex = local_2d0;
  uStack_1f8 = CONCAT44(uStack_2c4,iStack_2c8);
  local_2f0 = pTVar1;
  iStack_2e8 = iVar32;
  local_220 = pTVar1;
  TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2e0;
  if (((int)uVar33 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar5 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar33 != uVar5) {
    puVar35 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    if (puVar35 == (undefined1 *)0x0) {
      puVar35 = puVar12;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar36 * 4);
    while (uVar33 == 0) {
      lVar28 = (longlong)iVar36;
      uVar38 = uVar38 + 0x20;
      iVar36 = iVar36 + 1;
      uVar33 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36) goto LAB_145ee8900;
      uVar33 = *(uint *)(puVar35 + lVar28 * 4 + 4);
    }
    uVar39 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar33 = (uVar38 - 1) + (int)lVar28;
    if ((int)uVar5 < (int)uVar33) {
      uVar33 = uVar5;
    }
  }
LAB_145ee8900:
  while( true ) {
    pTVar18 = local_220;
    if (*(int *)&local_220->field_0x8 - *(int *)&local_220->field_0x34 != (int)uStack_1f8) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_348);
    }
    if (((TStack_218.CurrentBitIndex == uVar33) &&
        (TStack_218.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) &&
       (pTVar18 == pTVar1)) break;
    plVar27 = *(longlong **)
               (*(longlong *)
                 (*(longlong *)pTVar18 + 8 + (longlong)TStack_218.CurrentBitIndex * 0x18) + 8);
    if (plVar27 != (longlong *)0x0) {
      (**(code **)(*plVar27 + 0x20))();
    }
    TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
  }
  return;
}

// RemoveFoliageInfoAndCopyValue @ 145eea3c0

bool __thiscall
AInstancedFoliageActor::RemoveFoliageInfoAndCopyValue
          (AInstancedFoliageActor *this,UFoliageType *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  bool bVar1;
  TObjectPtr<UFoliageType>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  bVar1 = TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
          ::RemoveAndCopyValue
                    (&this->FoliageInfos,(TObjectPtr<UFoliageType> *)&local_res8.ObjectPtr,param_2);
  return bVar1;
}

// Serialize @ 145eeac40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AInstancedFoliageActor::Serialize(AInstancedFoliageActor *this,FArchive *param_1)

{
  undefined1 *puVar1;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  ForElementType<unsigned_int> FVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *pTVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  UClass *pUVar16;
  int iVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLLMScope local_168 [2];
  ForElementType<unsigned_int> local_160;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_118;
  undefined8 local_110;
  FMemScope local_108;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name4344,L"Foliage");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_168,LLMScope_Name4344,false,None,Default,true);
  FMemScope::FMemScope(&local_108,&LLMScope_Name4344,true);
  AActor::Serialize((AActor *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFoliageCustomVersion::GUID);
  if (((0x178 < *(int *)&param_1->field_0x40) &&
      (iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID),
      4 < iVar14)) &&
     (iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID),
     0xb < iVar14)) {
    TSetPrivateFriend::
    Serialize<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>,0>,FDefaultSetAllocator>
                        *)&this->FoliageInfos);
  }
  iVar15 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFoliageCustomVersion::GUID);
  iVar14 = 0;
  local_110 = 1;
  if (iVar15 < 1) {
    local_158 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)&this->_padding_);
    iVar15 = *(int *)&(local_158->Elements).field_0x28;
    iStack_150 = 0;
    iStack_13c = 0;
    local_138 = 0;
    local_160 = (ForElementType<unsigned_int>)&(local_158->Elements).field_0x10;
    iVar17 = 0;
    uStack_14c = 1;
    if (iVar15 != 0) {
      puVar21 = *(uint **)&(local_158->Elements).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_160;
      }
      uStack_14c = *puVar21;
      local_138 = 0;
      while (uStack_14c == 0) {
        iStack_150 = iStack_150 + 1;
        local_138 = local_138 + 0x20;
        iStack_13c = iVar15;
        uStack_14c = 1;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150)
        goto LAB_145eeaddd;
        uStack_14c = puVar21[iStack_150];
      }
      uStack_14c = ~(uStack_14c - 1) & uStack_14c;
      uVar3 = (ulonglong)uStack_14c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_128 = (int)lVar7;
      iStack_13c = local_128 + -1 + local_138;
      if (iVar15 < iStack_13c) {
        iStack_13c = iVar15;
      }
LAB_145eeaddd:
      iVar17 = *(int *)&(local_158->Elements).field_0x28;
    }
    uVar18 = *(uint *)&(local_158->Elements).field_0x28;
    uStack_134 = local_54;
    iStack_130 = *(int *)&(local_158->Elements).field_0x8 -
                 *(int *)&(local_158->Elements).field_0x34;
    uVar22 = uVar18 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uStack_14c,iStack_150);
    uStack_140 = 0xffffffff;
    TStack_c8.CurrentBitIndex = iStack_13c;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar18 >> 5;
    TStack_c8._28_4_ = local_54;
    TStack_c8.BaseBitIndex = local_138;
    uStack_a8 = CONCAT44(uStack_12c,iStack_130);
    local_148 = (undefined1 *)local_160;
    local_118 = local_158;
    local_d0 = local_158;
    TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_160;
    if ((((int)uVar18 < 0) || (iVar17 < (int)uVar18)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar10 = local_118;
    FVar9 = local_160;
    uVar4 = *(int *)((longlong)local_160 + 0x18);
    if (uVar18 != uVar4) {
      FVar19 = local_160;
      if (*(ForElementType<unsigned_int> *)((longlong)local_160 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_160 + 0x10);
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
      while (uVar18 == 0) {
        iVar15 = iVar15 + 1;
        uVar22 = uVar22 + 0x20;
        uVar18 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15)
        goto LAB_145eeaf00;
        uVar18 = *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
      }
      uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_124 = (int)lVar7;
      uVar18 = local_124 + -1 + uVar22;
      if ((int)uVar4 < (int)uVar18) {
        uVar18 = uVar4;
      }
    }
LAB_145eeaf00:
    while( true ) {
      pTVar11 = local_d0;
      if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
          (int)uStack_a8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_c8.CurrentBitIndex == uVar18) &&
          ((ForElementType<unsigned_int>)TStack_c8.Array == FVar9)) && (pTVar11 == pTVar10)) break;
      lVar7 = *(longlong *)
               (*(longlong *)&pTVar11->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x10);
      if (lVar7 != 0) {
        pUVar16 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar16->_padding_)) {
          *(byte *)(lVar7 + 0x99) = *(byte *)(lVar7 + 0x99) & 0xdf;
        }
      }
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
  }
  uStack_f4 = (uint)local_110;
  pTVar2 = &this->FoliageInfos;
  iVar15 = *(int *)&(this->FoliageInfos).field_0x28;
  local_f0 = &(this->FoliageInfos).field_0x10;
  local_e0 = 0;
  iStack_e4 = 0;
  if (iVar15 != 0) {
    puVar21 = *(uint **)&(this->FoliageInfos).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_f0;
    }
    uVar18 = *puVar21;
    local_e0 = 0;
    while (uVar18 == 0) {
      iVar14 = iVar14 + 1;
      local_e0 = local_e0 + 0x20;
      iStack_e4 = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145eeb010;
      uVar18 = puVar21[iVar14];
    }
    uStack_f4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_f4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_120 = (int)lVar7;
    iStack_e4 = local_120 + -1 + local_e0;
    if (iVar15 < iStack_e4) {
      iStack_e4 = iVar15;
    }
  }
LAB_145eeb010:
  puVar1 = &(this->FoliageInfos).field_0x10;
  iStack_dc = iStack_13c;
  iStack_d8 = *(int *)&(this->FoliageInfos).field_0x8 - *(int *)&(this->FoliageInfos).field_0x34;
  uVar18 = *(uint *)&(this->FoliageInfos).field_0x28;
  uStack_e8 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_f4,iVar14);
  uVar22 = uVar18 & 0xffffffe0;
  TStack_98.CurrentBitIndex = iStack_e4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_98._28_4_ = iStack_13c;
  TStack_98.BaseBitIndex = local_e0;
  uStack_78 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = pTVar2;
  iStack_f8 = iVar14;
  local_a0 = pTVar2;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar18 < 0) || (*(int *)&(this->FoliageInfos).field_0x28 < (int)uVar18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->FoliageInfos).field_0x28;
  if (uVar18 != uVar4) {
    puVar5 = *(undefined1 **)&(this->FoliageInfos).field_0x20;
    puVar20 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar20 = puVar5;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      iVar15 = iVar15 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar15) goto LAB_145eeb110;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar15 * 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar18 = (int)lVar7 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_145eeb110:
  while( true ) {
    pTVar12 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_98.CurrentBitIndex == uVar18) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar12 == pTVar2))
    break;
    plVar6 = *(longlong **)
              (*(longlong *)(*(longlong *)pTVar12 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18)
              + 8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(local_168);
  return;
}

// Serialize @ 145eeb1e0

void __thiscall
AInstancedFoliageActor::Serialize(AInstancedFoliageActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesAInstancedFoliageActor @ 145eecf40

void __cdecl AInstancedFoliageActor::StaticRegisterNativesAInstancedFoliageActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

