// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 16

// ~FGroomCacheAdapter @ 14e252090

void __thiscall UE::Groom::FGroomCacheAdapter::~FGroomCacheAdapter(FGroomCacheAdapter *this)

{
  void *pvVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  
  this->_padding_ = (longlong)&___7FGroomCacheAdapter_Groom_UE__6B_;
  FVar2 = (this->ReadbackTasks).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->ReadbackTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar2,(this->ReadbackTasks).ArrayNum);
  FVar2 = (this->ReadbackTasks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  *(undefined4 *)&(this->GroomCaches).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GroomCaches).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroomCaches);
  return;
}

// BuildEventsSolver @ 14e253180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPhysicsSolverEvents * __thiscall
UE::Groom::FGroomCacheAdapter::BuildEventsSolver
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  UGroomComponent *this_00;
  UMeshComponent *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  FPhysicsSolverEvents *pFVar5;
  
  this_00 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (UGroomComponent *)0x0) {
    pUVar2 = UGroomComponent::GetGroomSolver(this_00);
    if (pUVar2 != (UMeshComponent *)0x0) {
      pUVar2 = UGroomComponent::GetGroomSolver(this_00);
      if (pUVar2 != (UMeshComponent *)0x0) {
        pUVar3 = UGroomSolverComponent::StaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          lVar4 = (**(code **)(pUVar2[1]._padding_ + 0x30))();
          pFVar5 = (FPhysicsSolverEvents *)(lVar4 + 0x78);
          if (lVar4 == 0) {
            pFVar5 = (FPhysicsSolverEvents *)0x0;
          }
          return pFVar5;
        }
      }
    }
  }
  return (FPhysicsSolverEvents *)0x0;
}

// Finalize @ 14e253470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UE::Groom::FGroomCacheAdapter::Finalize(FGroomCacheAdapter *this)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 *puVar5;
  UGroomComponent *this_00;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FString *pFVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  wchar_t *pwVar22;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (this->bIsLoading == false) {
    iVar4 = *(int *)&(this->GroomCaches).field_0x28;
    puVar1 = &(this->GroomCaches).field_0x10;
    iVar18 = 0;
    uVar9 = 1;
    iVar20 = 0;
    iVar10 = 0;
    if (iVar4 != 0) {
      puVar21 = *(uint **)&(this->GroomCaches).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar16 = *puVar21;
      while (uVar16 == 0) {
        iVar18 = iVar18 + 1;
        iVar20 = iVar20 + 0x20;
        iVar10 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14e25351c;
        uVar16 = puVar21[iVar18];
      }
      uVar9 = ~(uVar16 - 1) & uVar16;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_res18 = (int)lVar6;
      iVar10 = local_res18 + -1 + iVar20;
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
LAB_14e25351c:
    uVar16 = *(uint *)&(this->GroomCaches).field_0x28;
    pwVar22 = L"";
    uVar15 = uVar16 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar9,iVar18);
    TStack_90.CurrentBitIndex = iVar10;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar16 >> 5;
    TStack_90._28_4_ = iVar10;
    TStack_90.BaseBitIndex = iVar20;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(this->GroomCaches).field_0x8 -
                         *(int *)&(this->GroomCaches).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar9 = *(uint *)&(this->GroomCaches).field_0x28;
    if (uVar16 != uVar9) {
      puVar5 = *(undefined1 **)&(this->GroomCaches).field_0x20;
      puVar19 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar19 = puVar5;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
      while (uVar16 == 0) {
        iVar18 = iVar18 + 1;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar9;
        if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar18)
        goto LAB_14e253620;
        uVar16 = *(uint *)(puVar19 + (longlong)iVar18 * 4);
      }
      uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar16 = (int)lVar6 + -1 + uVar15;
      if ((int)uVar9 < (int)uVar16) {
        uVar16 = uVar9;
      }
    }
LAB_14e253620:
    while( true ) {
      if (*(int *)&(this->GroomCaches).field_0x8 - *(int *)&(this->GroomCaches).field_0x34 !=
          (int)uStack_70) {
        `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_90.CurrentBitIndex == uVar16) &&
         (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      this_00 = *(UGroomComponent **)
                 ((longlong)TStack_90.CurrentBitIndex * 0x80 +
                 *(longlong *)&(this->GroomCaches).field_0x0);
      if (this_00 == (UGroomComponent *)0x0) {
        pFVar12 = GetTypeName<UGroomComponent>(&local_48);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar22 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar22);
      }
      pUVar11 = Z_Construct_UClass_UGroomComponent_NoRegister();
      iVar4 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar11->_padding_)) {
        pFVar12 = GetTypeName<UGroomComponent>(&local_68);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UPrimitiveComponent>
                            (&local_58,(UPrimitiveComponent *)this_00);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar22 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar22,pwVar17);
      }
      UGroomComponent::SetGroomCache(this_00,(UGroomCache *)0x0);
      UGroomComponent::SetManualTick(this_00,false);
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  TSet<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>,FDefaultSetAllocator>
           *)&this->GroomCaches);
  pTVar14 = &this->ReadbackTasks;
  iVar4 = (this->ReadbackTasks).ArrayNum;
  piVar2 = &(this->ReadbackTasks).ArrayMax;
  FVar13 = (this->ReadbackTasks).AllocatorInstance.SecondaryData;
  if ((this->ReadbackTasks).ArrayMax < 0) {
    if (FVar13 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar14;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar13,iVar4);
    (this->ReadbackTasks).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,&pTVar14->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar13 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar14;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar13,iVar4);
    (this->ReadbackTasks).ArrayNum = 0;
  }
  return;
}

// GetComponentSolver @ 14e253a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPBDRigidsSolver * __thiscall
UE::Groom::FGroomCacheAdapter::GetComponentSolver
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1)

{
  return (FPBDRigidsSolver *)0x0;
}

// GetDesiredClass @ 14e253a10

UClass * __thiscall UE::Groom::FGroomCacheAdapter::GetDesiredClass(FGroomCacheAdapter *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGroomComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"GroomComponent",
               &Z_Registration_Info_UClass_UGroomComponent.InnerSingleton,
               UGroomComponent::StaticRegisterNativesUGroomComponent,0x7f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroomComponent>,InternalVTableHelperCtorCaller<UGroomComponent>,
               aFStackX_8,UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroomComponent.InnerSingleton;
}

// GetGuid @ 14e253b30

FGuid * __thiscall
UE::Groom::FGroomCacheAdapter::GetGuid(FGroomCacheAdapter *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetPriority @ 14e253b50

uchar __thiscall UE::Groom::FGroomCacheAdapter::GetPriority(FGroomCacheAdapter *this)

{
  return ::Chaos::FComponentCacheAdapter::EngineAdapterPriorityBegin;
}

// InitializeForLoad @ 14e253cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Groom::FGroomCacheAdapter::InitializeForLoad
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2)

{
  int iVar1;
  UChaosCache *pUVar2;
  longlong *plVar3;
  UGroomAsset *this_00;
  bool bVar4;
  UGroomComponent *this_01;
  UGroomCache *pUVar5;
  UClass *pUVar6;
  
  this->bIsLoading = true;
  this_01 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1);
  if (this_01 == (UGroomComponent *)0x0) {
    return;
  }
  pUVar2 = param_2->Cache;
  if (pUVar2 == (UChaosCache *)0x0) {
    return;
  }
  if (*(longlong *)&pUVar2->CacheData == 0) {
    return;
  }
  plVar3 = *(longlong **)&(pUVar2->CacheData).field_0x8;
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((this_01->GroomCache).field0_0x0.DebugPtr != (UGroomCache *)0x0) {
    return;
  }
  pUVar5 = (UGroomCache *)(**(code **)(*plVar3 + 8))();
  if (pUVar5 != (UGroomCache *)0x0) {
    pUVar6 = Z_Construct_UClass_UGroomCache_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_14e253d58;
  }
  pUVar5 = (UGroomCache *)0x0;
LAB_14e253d58:
  UGroomComponent::SetGroomCache(this_01,pUVar5);
  UGroomComponent::SetManualTick(this_01,true);
  this_00 = (this_01->GroomAsset).field0_0x0.DebugPtr;
  if ((this_00 != (UGroomAsset *)0x0) &&
     (bVar4 = UGroomAsset::GetEnableSimulationCache(this_00), !bVar4)) {
    UGroomAsset::ValidateSimulationCache((this_01->GroomAsset).field0_0x0.DebugPtr);
  }
  return;
}

// InitializeForPlayback @ 14e253da0

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
UE::Groom::FGroomCacheAdapter::InitializeForPlayback
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2,
          float param_3)

{
  this->bIsLoading = false;
  return false;
}

// InitializeForRecord @ 14e253db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UE::Groom::FGroomCacheAdapter::InitializeForRecord
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,FObservedComponent *param_2)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  TSharedPtr<FStrandsPositionOutput,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  UGroomComponent *this_00;
  FGroomCacheData *pFVar6;
  FString *pFVar7;
  FGroomCacheData *pFVar8;
  uint uVar9;
  UPrimitiveComponent *local_res10;
  FGroomCacheProcessor local_38;
  
  this->bIsLoading = false;
  local_res10 = param_1;
  this_00 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (UGroomComponent *)0x0) {
    uVar9 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4))
            * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    pFVar6 = TMapBase<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>_>
             ::FindOrAddImpl<UPrimitiveComponent_*_const_&>
                       ((TMapBase<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,UE::Groom::FGroomCacheAdapter::FGroomCacheData,0>_>
                         *)&this->GroomCaches,uVar9 >> 0x10 ^ uVar9,&local_res10);
    (pFVar6->AnimInfo).Attributes = Position;
    piVar1 = &(pFVar6->PositionsBuffer).ArrayMax;
    (pFVar6->AnimInfo).StartFrame = 0;
    (pFVar6->AnimInfo).EndFrame = 0;
    (pFVar6->AnimInfo).StartTime = 0.0;
    (pFVar6->AnimInfo).EndTime = 0.0;
    pTVar4 = (TSharedPtr<FStrandsPositionOutput,1> *)
             (pFVar6->PositionsBuffer).AllocatorInstance.Data;
    iVar3 = (pFVar6->PositionsBuffer).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedPtr<FStrandsPositionOutput,1>,int>(pTVar4,iVar3);
      (pFVar6->PositionsBuffer).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(pFVar6->PositionsBuffer).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FStrandsPositionOutput,1>,int>(pTVar4,iVar3);
      (pFVar6->PositionsBuffer).ArrayNum = 0;
    }
    (pFVar6->CacheTimes).ArrayNum = 0;
    if ((pFVar6->CacheTimes).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(pFVar6->CacheTimes).AllocatorInstance,0,&(pFVar6->CacheTimes).ArrayMax);
    }
    pFVar7 = ::FName::ToString(&param_2->CacheName,(FString *)&local_38);
    pFVar2 = &pFVar6->CacheName;
    if (pFVar2 != pFVar7) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->CacheName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (pFVar6->CacheName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if ((FGroomCacheChunk *)local_38.Chunks.AllocatorInstance.Data != (FGroomCacheChunk *)0x0) {
      FMemory::Free(local_38.Chunks.AllocatorInstance.Data);
    }
    pFVar8 = (FGroomCacheData *)
             FGroomCacheProcessor::FGroomCacheProcessor
                       (&local_38,Guides,(pFVar6->AnimInfo).Attributes);
    if (pFVar6 != pFVar8) {
      DestructItems<FGroomCacheChunk,int>
                ((FGroomCacheChunk *)(pFVar6->CacheProcessor).Chunks.AllocatorInstance.Data,
                 (pFVar6->CacheProcessor).Chunks.ArrayNum);
      pFVar5 = (pFVar6->CacheProcessor).Chunks.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar6->CacheProcessor).Chunks.AllocatorInstance.Data =
           (pFVar8->CacheProcessor).Chunks.AllocatorInstance.Data;
      (pFVar8->CacheProcessor).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->CacheProcessor).Chunks.ArrayNum = (pFVar8->CacheProcessor).Chunks.ArrayNum;
      (pFVar6->CacheProcessor).Chunks.ArrayMax = (pFVar8->CacheProcessor).Chunks.ArrayMax;
      (pFVar8->CacheProcessor).Chunks.ArrayNum = 0;
      (pFVar8->CacheProcessor).Chunks.ArrayMax = 0;
    }
    (pFVar6->CacheProcessor).Attributes = (pFVar8->CacheProcessor).Attributes;
    (pFVar6->CacheProcessor).Type = (pFVar8->CacheProcessor).Type;
    DestructItems<FGroomCacheChunk,int>
              ((FGroomCacheChunk *)local_38.Chunks.AllocatorInstance.Data,local_38.Chunks.ArrayNum);
    if ((FGroomCacheChunk *)local_38.Chunks.AllocatorInstance.Data != (FGroomCacheChunk *)0x0) {
      FMemory::Free(local_38.Chunks.AllocatorInstance.Data);
    }
    UGroomComponent::SetGroomCache(this_00,(UGroomCache *)0x0);
    UGroomComponent::SetManualTick(this_00,false);
  }
  return true;
}

// Playback_PreSolve @ 14e2540a0

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
UE::Groom::FGroomCacheAdapter::Playback_PreSolve
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,double param_3
          ,FPlaybackTickRecord *param_4,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  return;
}

// Record_PostSolve @ 14e2540c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Groom::FGroomCacheAdapter::Record_PostSolve
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,TTransform<double> *param_2,
          FPendingFrameWrite *param_3,double param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  atomic<int> aVar6;
  UGroomComponent *pUVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  atomic<int> aVar13;
  atomic<int> local_38 [2];
  TReferenceControllerBase<1> *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  if (((this->bIsLoading == false) &&
      (pUVar7 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1),
      pUVar7 != (UGroomComponent *)0x0)) &&
     (uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595, uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb,
     *(int *)&(this->GroomCaches).field_0x8 != *(int *)&(this->GroomCaches).field_0x34)) {
    puVar10 = *(undefined1 **)&(this->GroomCaches).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->GroomCaches).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->GroomCaches).field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      while (plVar9 = (longlong *)((longlong)iVar5 * 0x80 + *(longlong *)&this->GroomCaches),
            (UPrimitiveComponent *)*plVar9 != param_1) {
        iVar5 = (int)plVar9[0xf];
        if (iVar5 == -1) {
          return;
        }
      }
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      pTVar12 = (TReferenceControllerBase<1> *)(plVar9 + 1);
      if (plVar9 == (longlong *)0x0) {
        pTVar12 = pTVar11;
      }
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        pTStack_28 = ::operator_new(0x30);
        if (pTStack_28 == (TReferenceControllerBase<1> *)0x0) {
          local_30 = ___xmm_00000000000000000000000000000010;
          pTStack_28 = _UNK_150651568;
        }
        else {
          pTStack_28->SharedReferenceCount = (atomic<int>)0x1;
          pTStack_28->WeakReferenceCount = (atomic<int>)0x1;
          pTStack_28->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFStrandsPositionOutput___00_SharedPointerInternals__6B_
          ;
          pTStack_28[2].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_28[1]._padding_ = 0;
          pTStack_28[1].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_28[1].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_28[2]._padding_ = 0;
          pTStack_28[2].SharedReferenceCount = (atomic<int>)0xffffffff;
          if ((pTStack_28 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          LOCK();
          pTStack_28->SharedReferenceCount =
               (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
          UNLOCK();
          pTVar11 = pTStack_28;
          local_30 = pTStack_28 + 1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        if (((*(TReferenceControllerBase<1> ***)&pTVar12[4].SharedReferenceCount <= &local_30) &&
            (&local_30 <
             *(TReferenceControllerBase<1> ***)&pTVar12[4].SharedReferenceCount +
             (longlong)*(int *)((longlong)&pTVar12[5]._padding_ + 4) * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (int)pTVar12[5]._padding_;
        piVar1 = (int *)((longlong)&pTVar12[5]._padding_ + 4);
        if (iVar5 == *piVar1) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&pTVar12[4].SharedReferenceCount,piVar1);
        }
        *(int *)&pTVar12[5]._padding_ = iVar5 + 1;
        lVar2 = *(longlong *)&pTVar12[4].SharedReferenceCount;
        *(TReferenceControllerBase<1> **)(lVar2 + (longlong)iVar5 * 0x10) = local_30;
        *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar5 * 0x10) = pTStack_28;
        if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_28->SharedReferenceCount =
               (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
          UNLOCK();
        }
        aVar13 = (atomic<int>)(float)param_4;
        local_38[0] = aVar13;
        if ((((atomic<int> *)pTVar12[6]._padding_ <= local_38) &&
            (local_38 < (atomic<int> *)pTVar12[6]._padding_ + (int)pTVar12[6].WeakReferenceCount))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar6 = pTVar12[6].SharedReferenceCount;
        if (aVar6 == pTVar12[6].WeakReferenceCount) {
          aVar6 = (atomic<int>)
                  Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(pTVar12 + 6),
                             (int *)&pTVar12[6].WeakReferenceCount);
        }
        pTVar12[6].SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        *(atomic<int> *)(pTVar12[6]._padding_ + (longlong)(int)aVar6 * 4) = local_38[0];
        *(int *)&pTVar12[4]._padding_ = (int)pTVar12[4]._padding_ + 1;
        pTVar12[3].SharedReferenceCount = aVar13;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_28);
      }
    }
  }
  return;
}

// SetRestState @ 14e256900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UE::Groom::FGroomCacheAdapter::SetRestState
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          TTransform<double> *param_3,double param_4)

{
  UGroomCache *pUVar1;
  UGroomComponent *this_00;
  float fVar2;
  
  if ((((this->bIsLoading != false) &&
       (this_00 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1),
       this_00 != (UGroomComponent *)0x0)) &&
      (pUVar1 = (this_00->GroomCache).field0_0x0.DebugPtr, pUVar1 != (UGroomCache *)0x0)) &&
     (fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_),
     param_4 < (double)fVar2)) {
    UGroomComponent::TickAtThisTime(this_00,(float)param_4,true,false,true);
    return;
  }
  return;
}

// SupportsComponentClass @ 14e256a50

SupportType __thiscall
UE::Groom::FGroomCacheAdapter::SupportsComponentClass(FGroomCacheAdapter *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = (UClass *)(**(code **)(this->_padding_ + 0x10))();
  if (param_1 == pUVar2) {
    return Direct;
  }
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return Derived;
    }
    return None;
  }
  return None;
}

// ValidForPlayback @ 14e2574e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UE::Groom::FGroomCacheAdapter::ValidForPlayback
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  UGroomComponent *pUVar1;
  
  pUVar1 = CastChecked<UGroomComponent,UPrimitiveComponent>(param_1);
  return pUVar1 != (UGroomComponent *)0x0;
}

// WaitForSolverTasks @ 14e257500

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
UE::Groom::FGroomCacheAdapter::WaitForSolverTasks
          (FGroomCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FTaskGraphInterface *pFVar1;
  
  if ((this->ReadbackTasks).ArrayNum != 0) {
    pFVar1 = FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x00014e25752d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x60))
              (pFVar1,&this->ReadbackTasks,1,*(code **)((longlong)*pFVar1 + 0x60));
    return;
  }
  return;
}

