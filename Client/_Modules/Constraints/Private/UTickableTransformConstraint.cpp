// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 42

// StaticClass @ 14648d600

UClass * __cdecl UTickableTransformConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableTransformConstraint",
               &Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton,
               StaticRegisterNativesUTickableTransformConstraint,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableTransformConstraint>,
               InternalVTableHelperCtorCaller<UTickableTransformConstraint>,local_res8,
               UTickableConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton;
}

// UTickableTransformConstraint @ 14649ec60

UTickableTransformConstraint * __thiscall
UTickableTransformConstraint::UTickableTransformConstraint
          (UTickableTransformConstraint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UTickableTransformConstraint__6B_;
  (this->ParentTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
  (this->ChildTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
  this->bMaintainOffset = true;
  this->Weight = 1.0;
  this->bDynamicOffset = false;
  this->Type = Parent;
  this->bUseCurrentOffset = true;
  return this;
}

// UTickableTransformConstraint @ 14649ed00

UTickableTransformConstraint * __thiscall
UTickableTransformConstraint::UTickableTransformConstraint(UTickableTransformConstraint *this)

{
  UObject::UObject((UObject *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UTickableTransformConstraint__6B_;
  (this->ParentTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
  (this->ChildTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
  this->bMaintainOffset = true;
  this->Weight = 1.0;
  this->bDynamicOffset = false;
  this->Type = Parent;
  this->bUseCurrentOffset = true;
  return this;
}

// ~UTickableTransformConstraint @ 14649fcb0

void __thiscall
UTickableTransformConstraint::~UTickableTransformConstraint(UTickableTransformConstraint *this)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddedToWorld @ 1464a4560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::AddedToWorld(UTickableTransformConstraint *this,UWorld *param_1)

{
  if (param_1 != (UWorld *)0x0) {
    FDependencyBuilder::BuildDependencies(param_1,this);
    return;
  }
  return;
}

// ComputeOffset @ 1464aa0e0

void __thiscall UTickableTransformConstraint::ComputeOffset(UTickableTransformConstraint *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\Transform\\TransformConstraint.h"
             ,0x86,L"Pure virtual not implemented (%s)");
  return;
}

// Duplicate @ 1464adca0

UTickableConstraint * __thiscall
UTickableTransformConstraint::Duplicate(UTickableTransformConstraint *this,UObject *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UTransformableHandle *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UTickableConstraint *pUVar11;
  UObject *pUVar12;
  longlong lVar13;
  FWeakObjectPtr *this_00;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pUVar10 = StaticClass();
  iVar14 = 0;
  pUVar11 = (UTickableConstraint *)
            DuplicateObject_Internal(pUVar10,(UObject *)this,param_1,(FName)0x0);
  pUVar5 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar5 != (UTransformableHandle *)0x0) {
    pUVar12 = (UObject *)(**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5,pUVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    pUVar11[1]._padding_ = (longlong)pUVar12;
  }
  pUVar5 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar5 != (UTransformableHandle *)0x0) {
    pUVar12 = (UObject *)(**(code **)(pUVar5->_padding_ + 0x2e8))(pUVar5,pUVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    pUVar11[1]._padding_ = (longlong)pUVar12;
  }
  iVar3 = (int)this->_padding_;
  plVar1 = &this->_padding_;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = iVar14;
  if (iVar3 != 0) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    uVar15 = (uint)*plVar17;
    iVar16 = 0;
    iVar14 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1464addce;
      uVar15 = *(uint *)((longlong)plVar17 + lVar13 * 4 + 4);
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar13;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1464addce:
  uVar15 = (uint)this->_padding_;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  uVar8 = uVar15 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar11 = (UTickableConstraint *)(*pcVar6)();
    return pUVar11;
  }
  uVar4 = (uint)this->_padding_;
  if (uVar15 != uVar4) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = plVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar8 = uVar8 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1464aded0;
      uVar15 = *(uint *)((longlong)plVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_1464aded0:
  while( true ) {
    if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    this_00 = (FWeakObjectPtr *)(this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0x50);
    bVar7 = FWeakObjectPtr::IsValid(this_00);
    if (bVar7) {
      pUVar12 = FWeakObjectPtr::Get(this_00);
      pUVar10 = Z_Construct_UClass_UWorld_NoRegister();
      UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar12,pUVar10);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return pUVar11;
}

// EnsurePrimaryDependency @ 1464ae070

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

void __thiscall
UTickableTransformConstraint::EnsurePrimaryDependency
          (UTickableTransformConstraint *this,UWorld *param_1)

{
  UTransformableHandle *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  FConstraintTickFunction *this_00;
  UObject *pUVar8;
  undefined1 auStackY_f8 [32];
  FWeakObjectPtr local_c8;
  ULevel *local_c0;
  FWeakObjectPtr local_b8;
  FTickFunction *local_b0;
  void *local_a8 [2];
  void *local_98 [2];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_1 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1231886488388501857>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraint.cpp"
                       ,0x161,"InWorld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
    lVar7 = 0;
    lVar6 = lVar7;
    if (((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) &&
       (pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr,
       cVar5 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1), cVar5 != '\0')) {
      lVar6 = (**(code **)(((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
    }
    pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
    if (((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) &&
       (pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr,
       cVar5 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1), cVar5 != '\0')) {
      lVar7 = (**(code **)(((this->ChildTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
    }
    if ((lVar6 != 0) && (lVar7 != lVar6)) {
      local_c0 = UWorld::GetCurrentLevel(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_c0);
      }
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_c0);
      }
      FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_c0);
      this_00 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                          ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                            *)&this->_padding_,local_c8.ObjectSerialNumber ^ local_c8.ObjectIndex,
                           (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_c8);
      if ((int)this_00->_padding_ == 0) {
        pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,&local_b8);
        bVar4 = FWeakObjectPtr::IsValid(&local_b8,true,false);
        if ((bVar4) && (local_b0 != (FTickFunction *)0x0)) {
          local_88._0_8_ = (FScriptContainerElement *)0x0;
          local_88._8_8_ = 0;
          local_68 = (void *)0x0;
          local_60 = 0;
          local_5c = 0x80;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = (ForElementType<FSetElementId>)0x0;
          local_40 = 0;
          bVar4 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                            ((FTickFunction *)this_00,local_b0,
                             (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                              *)local_88);
          if (!bVar4) {
            if ((DependencyLocals::bDebugDependencies != false) && (2 < (byte)LogTemp._0_1_)) {
              (**(code **)(this_00->_padding_ + 0x20))(this_00,local_98);
              (**(code **)(local_b0->_padding_ + 0x20))(local_b0,local_a8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              if (local_a8[0] != (void *)0x0) {
                FMemory::Free(local_a8[0]);
              }
              if (local_98[0] != (void *)0x0) {
                FMemory::Free(local_98[0]);
              }
            }
            pUVar8 = FWeakObjectPtr::Get(&local_b8);
            FTickFunction::AddPrerequisite((FTickFunction *)this_00,pUVar8,local_b0);
          }
          local_40 = 0;
          if (local_48 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_48);
          }
          iVar3 = SUB84(local_88._8_8_,4);
          local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
          if (iVar3 != 0) {
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
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_88._0_8_);
          }
        }
      }
    }
  }
  return;
}

// Evaluate @ 1464aea20

void __thiscall
UTickableTransformConstraint::Evaluate(UTickableTransformConstraint *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  FWeakObjectPtr *this_00;
  USkeletalMeshComponent *pUVar4;
  UClass *pUVar5;
  FAnimationEvaluationCache *this_01;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (cVar3 != '\0') {
    if (param_1) {
      lVar2 = ((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_;
      if (TransformableHandleUtils::bNewEvaluation == false) {
        (**(code **)(lVar2 + 0x2f0))();
      }
      else {
        this_00 = (FWeakObjectPtr *)(**(code **)(lVar2 + 0x330))();
        pUVar4 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
        if (pUVar4 != (USkeletalMeshComponent *)0x0) {
          pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar5->_padding_)) {
            pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) {
              this_01 = UE::Anim::FAnimationEvaluationCache::Get();
              UE::Anim::FAnimationEvaluationCache::MarkForEvaluation(this_01,pUVar4);
            }
          }
        }
      }
    }
    UTickableConstraint::Evaluate((UTickableConstraint *)this,false);
  }
  return;
}

// GetChannelsToKey @ 1464b13d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EMovieSceneTransformChannel __thiscall
UTickableTransformConstraint::GetChannelsToKey(UTickableTransformConstraint *this)

{
  undefined4 uVar1;
  EMovieSceneTransformChannel *pEVar2;
  ETransformConstraintType *pEVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  ETransformConstraintType local_98 [8];
  EMovieSceneTransformChannel local_90 [6];
  initializer_list<TPairInitializer<ETransformConstraintType_const_&,EMovieSceneTransformChannel_const_&>_>
  local_78;
  TPairInitializer<ETransformConstraintType_const_&,EMovieSceneTransformChannel_const_&> local_68;
  ETransformConstraintType *local_58;
  EMovieSceneTransformChannel *local_50;
  ETransformConstraintType *local_48;
  EMovieSceneTransformChannel *local_40;
  ETransformConstraintType *local_38;
  EMovieSceneTransformChannel *local_30;
  ETransformConstraintType *local_28;
  EMovieSceneTransformChannel *local_20;
  TPairInitializer<ETransformConstraintType_const_&,EMovieSceneTransformChannel_const_&> local_18;
  
  local_18.Key = (ETransformConstraintType *)(__security_cookie.value ^ (ulonglong)auStack_b8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_68.Key = local_98;
    local_98[0] = Translation;
    local_68.Value = local_90;
    local_90[0] = Translation;
    local_58 = local_98 + 1;
    local_98[1] = 1;
    local_50 = local_90 + 1;
    local_48 = local_98 + 2;
    local_40 = local_90 + 2;
    local_38 = local_98 + 3;
    local_30 = local_90 + 3;
    local_28 = local_98 + 4;
    local_20 = local_90 + 4;
    local_78._First = &local_68;
    local_78._Last = &local_18;
    local_90[1] = 0x38;
    local_98[2] = 2;
    local_90[2] = 0x1c0;
    local_98[3] = 3;
    local_90[3] = 0x1ff;
    local_98[4] = 4;
    local_90[4] = 0x38;
    TMap<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel,0>_>
    ::
    TMap<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ETransformConstraintType,enum_EMovieSceneTransformChannel,0>_>
              (&ConstraintToChannels,&local_78);
    atexit(`UTickableTransformConstraint::GetChannelsToKey'::__l2::
           _dynamic_atexit_destructor_for__ConstraintToChannels__);
    _Init_thread_footer(&::_TSS0);
  }
  if (ConstraintToChannels._8_4_ != ConstraintToChannels._52_4_) {
    lVar4 = 0x1551af348;
    if (ConstraintToChannels._64_8_ != 0) {
      lVar4 = ConstraintToChannels._64_8_;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(ConstraintToChannels._72_4_ - 1) & (ulonglong)this->Type)
                             * 4);
    while (uVar1 != 0xffffffff) {
      pEVar3 = (ETransformConstraintType *)
               ((longlong)(int)uVar1 * 0x10 + ConstraintToChannels._0_8_);
      if (*pEVar3 == this->Type) {
        pEVar2 = (EMovieSceneTransformChannel *)(pEVar3 + 4);
        if (pEVar3 == (ETransformConstraintType *)0x0) {
          pEVar2 = (EMovieSceneTransformChannel *)0x0;
        }
        if (pEVar2 == (EMovieSceneTransformChannel *)0x0) {
          return AllTransform;
        }
        return *pEVar2;
      }
      uVar1 = *(undefined4 *)(pEVar3 + 8);
    }
  }
  return AllTransform;
}

// GetChildGlobalTransform @ 1464b15a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UTickableTransformConstraint::GetChildGlobalTransform
          (UTickableTransformConstraint *this,TTransform<double> *__return_storage_ptr__)

{
  UTransformableHandle *pUVar1;
  double dVar2;
  char cVar3;
  double *pdVar4;
  undefined1 auStack_f8 [32];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar3 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      pdVar4 = (double *)(**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,local_78);
      goto LAB_1464b1647;
    }
  }
  pdVar4 = local_d8;
  local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
LAB_1464b1647:
  dVar2 = pdVar4[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar4;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar4[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar4[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar4[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar4[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar4[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// GetChildHandleTickFunction @ 1464b16a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UTickableTransformConstraint::GetChildHandleTickFunction(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  FTickFunction *pFVar3;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001464b16e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar3 = (FTickFunction *)
               (**(code **)(((this->ChildTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
      return pFVar3;
    }
  }
  return (FTickFunction *)0x0;
}

// GetChildLocalTransform @ 1464b1700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UTickableTransformConstraint::GetChildLocalTransform
          (UTickableTransformConstraint *this,TTransform<double> *__return_storage_ptr__)

{
  UTransformableHandle *pUVar1;
  double dVar2;
  char cVar3;
  double *pdVar4;
  undefined1 auStack_f8 [32];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar3 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      pdVar4 = (double *)(**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,local_78);
      goto LAB_1464b17a7;
    }
  }
  pdVar4 = local_d8;
  local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
LAB_1464b17a7:
  dVar2 = pdVar4[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar4;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar4[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar4[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar4[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar4[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar4[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// GetHandleTickFunction @ 1464b4250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UTickableTransformConstraint::GetHandleTickFunction
          (UTickableTransformConstraint *this,TObjectPtr<UTransformableHandle> *param_1)

{
  char cVar1;
  FTickFunction *pFVar2;
  
  if (((param_1->field0_0x0).DebugPtr != (UTransformableHandle *)0x0) &&
     (((uint)((param_1->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
    cVar1 = (**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 0x2b0))
                      ((param_1->field0_0x0).DebugPtr,1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001464b4287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar2 = (FTickFunction *)(**(code **)(((param_1->field0_0x0).DebugPtr)->_padding_ + 800))();
      return pFVar2;
    }
  }
  return (FTickFunction *)0x0;
}

// GetParentGlobalTransform @ 1464b5270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UTickableTransformConstraint::GetParentGlobalTransform
          (UTickableTransformConstraint *this,TTransform<double> *__return_storage_ptr__)

{
  UTransformableHandle *pUVar1;
  double dVar2;
  char cVar3;
  double *pdVar4;
  undefined1 auStack_f8 [32];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar3 != '\0') {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      pdVar4 = (double *)(**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,local_78);
      goto LAB_1464b5317;
    }
  }
  pdVar4 = local_d8;
  local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
LAB_1464b5317:
  dVar2 = pdVar4[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar4;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar4[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar4[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar4[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar4[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar4[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// GetParentHandleTickFunction @ 1464b5370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall
UTickableTransformConstraint::GetParentHandleTickFunction(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  FTickFunction *pFVar3;
  
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001464b53b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar3 = (FTickFunction *)
               (**(code **)(((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
      return pFVar3;
    }
  }
  return (FTickFunction *)0x0;
}

// GetParentLocalTransform @ 1464b53d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UTickableTransformConstraint::GetParentLocalTransform
          (UTickableTransformConstraint *this,TTransform<double> *__return_storage_ptr__)

{
  UTransformableHandle *pUVar1;
  double dVar2;
  char cVar3;
  double *pdVar4;
  undefined1 auStack_f8 [32];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar3 != '\0') {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      pdVar4 = (double *)(**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,local_78);
      goto LAB_1464b5477;
    }
  }
  pdVar4 = local_d8;
  local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
LAB_1464b5477:
  dVar2 = pdVar4[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar4;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar4[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar4[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar4[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar4[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar4[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar4[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b6050

UClass * __cdecl UTickableTransformConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableTransformConstraint",
               &Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton,
               StaticRegisterNativesUTickableTransformConstraint,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTickableTransformConstraint>,
               InternalVTableHelperCtorCaller<UTickableTransformConstraint>,local_res8,
               UTickableConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableTransformConstraint.InnerSingleton;
}

// GetTargetHash @ 1464b6e50

uint __thiscall UTickableTransformConstraint::GetTargetHash(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  uint uVar3;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001464b6e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(((this->ChildTRSHandle).field0_0x0.DebugPtr)->_padding_ + 0x328))();
      return uVar3;
    }
  }
  return 0;
}

// GetType @ 1464b7030

long64 __thiscall UTickableTransformConstraint::GetType(UTickableTransformConstraint *this)

{
  return (ulonglong)this->Type;
}

// HasBoundObjects @ 1464b7940

bool __thiscall UTickableTransformConstraint::HasBoundObjects(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    return cVar2 != '\0';
  }
  return false;
}

// InitConstraint @ 1464b85e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::InitConstraint(UTickableTransformConstraint *this,UWorld *param_1)

{
  int *piVar1;
  UTransformableHandle *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ULevel *pUVar6;
  FConstraintTickFunction *this_00;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr local_88;
  ULevel *local_80;
  UTickableTransformConstraint *local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [48];
  
  if ((param_1 == (UWorld *)0x0) ||
     (pUVar6 = UWorld::GetCurrentLevel(param_1), pUVar6 == (ULevel *)0x0)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1231886488388502155>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraint.cpp"
                       ,0x28b,"Level");
    if (!bVar4) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_88.ObjectIndex = 0;
  local_88.ObjectSerialNumber = 0;
  local_80 = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_80);
  this_00 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
            ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                      ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                        *)&this->_padding_,local_88.ObjectSerialNumber ^ local_88.ObjectIndex,
                       (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_88);
  if ((this_00->ConstraintFunctions).ArrayNum == 0) {
    pFVar7 = (FScriptContainerElement *)(**(code **)(this->_padding_ + 0x2b0))(this,local_58);
    if ((this_00->ConstraintFunctions).ArrayNum == 0) {
      pFVar8 = (this_00->ConstraintFunctions).AllocatorInstance.Data;
      if (((pFVar8 <= pFVar7) &&
          (pFVar7 < pFVar8 + (longlong)(this_00->ConstraintFunctions).ArrayMax * 0x30)) &&
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
      iVar5 = (this_00->ConstraintFunctions).ArrayNum;
      piVar1 = &(this_00->ConstraintFunctions).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1030,&(this_00->ConstraintFunctions).AllocatorInstance,piVar1);
      }
      (this_00->ConstraintFunctions).ArrayNum = iVar5 + 1;
      pFVar8 = (this_00->ConstraintFunctions).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
      *(longlong *)pFVar8 = *(longlong *)pFVar7;
      *(longlong *)(pFVar8 + 0x28) = 0;
      if (*(longlong *)pFVar8 != 0) {
        pFVar8 = pFVar7 + 0x10;
        if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
          pFVar8 = *(FScriptContainerElement **)(pFVar7 + 0x28);
        }
        (*(code *)**(undefined8 **)pFVar8)();
      }
    }
    if (*(longlong *)pFVar7 != 0) {
      pFVar8 = pFVar7 + 0x10;
      if (*(FScriptContainerElement **)(pFVar7 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar8 = *(FScriptContainerElement **)(pFVar7 + 0x28);
      }
      (**(code **)(*(longlong *)pFVar8 + 0x10))();
    }
  }
  if (((byte *)this_00->_padding_ == (byte *)0x0) || ((*(byte *)this_00->_padding_ & 1) == 0)) {
    FTickFunction::RegisterTickFunction((FTickFunction *)this_00,pUVar6);
  }
  local_78 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UTickableTransformConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(this_00->Constraint).WeakPtr,(FObjectPtr)&local_78);
  SetupDependencies(this,param_1);
  pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHandleModified,this)
    ;
  }
  pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnHandleModified,this)
    ;
  }
  pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
    ::AddUObject<UTickableTransformConstraint>
              (&pUVar2->OnHandleModified,(UTickableTransformConstraint *)local_70,(pmf_cd390aa9)this
              );
  }
  pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
    ::AddUObject<UTickableTransformConstraint>
              (&pUVar2->OnHandleModified,(UTickableTransformConstraint *)(local_70 + 8),
               (pmf_cd390aa9)this);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return;
}

// IsFullyActive @ 1464b93e0

bool __thiscall UTickableTransformConstraint::IsFullyActive(UTickableTransformConstraint *this)

{
  char cVar1;
  
  if ((char)this->_padding_ != '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x2c0))(this,1);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsValid @ 1464b95a0

bool __thiscall
UTickableTransformConstraint::IsValid(UTickableTransformConstraint *this,bool param_1)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  bool bVar3;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    cVar2 = (**(code **)(((this->ChildTRSHandle).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
    if ((cVar2 != '\0') &&
       ((pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr, pUVar1 != (UTransformableHandle *)0x0
        && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)))) {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,param_1);
      if (cVar2 != '\0') {
        bVar3 = true;
        goto LAB_1464b960c;
      }
    }
  }
  bVar3 = false;
LAB_1464b960c:
  if (param_1) {
    if ((bVar3 != false) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
      return true;
    }
    bVar3 = false;
  }
  return bVar3;
}

// NeedsCompensation @ 1464ba110

bool __thiscall UTickableTransformConstraint::NeedsCompensation(UTickableTransformConstraint *this)

{
  return true;
}

// OnActiveStateChanged @ 1464ba3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::OnActiveStateChanged(UTickableTransformConstraint *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UWorld *pUVar5;
  <lambda_1> <Var6;
  FConstraintTickFunction *pFVar7;
  UTickableConstraint *this_00;
  FConstraintTickFunction *pFVar8;
  UTickableTransformConstraint *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  ForAnyElementType this_01;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [8];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_a0;
  TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
  TStack_88;
  ulonglong uStack_38;
  
  if ((((this != (UTickableTransformConstraint *)0x0) &&
       (uStack_38 = __security_cookie.value ^ (ulonglong)auStack_c8,
       ((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
      (pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(), pUVar5 != (UWorld *)0x0)) &&
     ((((uint)pUVar5->_padding_ >> 0x1e & 1) == 0 &&
      (<Var6.ChildTickFunction = GetChildHandleTickFunction(this),
      <Var6.ChildTickFunction != (FTickFunction *)0x0)))) {
    ::Singleton.World = pUVar5;
    FConstraintsManagerController::
    GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>
              (&::Singleton,&TStack_a0,<Var6,false);
    iVar3 = TStack_a0.ArrayNum;
    uVar11 = (ulonglong)TStack_a0.ArrayNum;
    if (TStack_a0.ArrayNum != 0) {
      TStack_88.Elements._0_8_ = 0;
      pFVar1 = (FWeakObjectPtr *)(TStack_a0.AllocatorInstance.Data + uVar11 * 8);
      TStack_88.Elements._8_8_ = 0;
      TStack_88.Elements._32_8_ = 0;
      TStack_88.Elements._40_4_ = 0;
      TStack_88.Elements._44_4_ = 0x80;
      TStack_88.Elements._48_4_ = 0xffffffff;
      TStack_88.Elements._52_4_ = 0;
      TStack_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      TStack_88.HashSize = 0;
      this_01.Data = TStack_a0.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar11 != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(auStack_a8);
        }
        if ((FWeakObjectPtr *)this_01.Data == pFVar1) break;
        pFVar7 = UTickableConstraint::GetTickFunction((UTickableConstraint *)this,pUVar5);
        this_00 = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
        pFVar8 = UTickableConstraint::GetTickFunction(this_00,pUVar5);
        bVar4 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                          ((FTickFunction *)pFVar8,(FTickFunction *)pFVar7,&TStack_88);
        if (bVar4) {
          pUVar9 = (UTickableTransformConstraint *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.Data);
          if (pUVar9 == (UTickableTransformConstraint *)0x0) {
LAB_1464a8e3f:
            pUVar9 = (UTickableTransformConstraint *)0x0;
          }
          else {
            pUVar10 = StaticClass();
            iVar2 = (int)pUVar10->_padding_;
            if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) goto LAB_1464a8e3f;
          }
          FConstraintCycleChecker::UpdateCyclingDependency(pUVar5,pUVar9);
        }
        uVar11 = (ulonglong)(uint)TStack_a0.ArrayNum;
        this_01.Data = this_01.Data + 8;
      }
      TStack_88.HashSize = 0;
      if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_88.Elements);
    }
    if ((FWeakObjectPtr *)TStack_a0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(TStack_a0.AllocatorInstance.Data);
    }
  }
  return;
}

// OnHandleModified @ 1464bb000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::OnHandleModified
          (UTickableTransformConstraint *this,UTransformableHandle *param_1,EHandleEvent param_2)

{
  UTransformableHandle *pUVar1;
  UTransformableHandle *pUVar2;
  FWeakObjectPtr *pFVar3;
  UObject *pUVar4;
  UWorld *pUVar5;
  UObject *pUVar6;
  undefined1 local_res10 [8];
  
  if (param_1 == (UTransformableHandle *)0x0) {
    return;
  }
  pFVar3 = (FWeakObjectPtr *)(**(code **)(param_1->_padding_ + 0x330))(param_1,local_res10);
  pUVar4 = FWeakObjectPtr::Get(pFVar3);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  pUVar5 = (UWorld *)(**(code **)(*(longlong *)pUVar4 + 0x180))(pUVar4);
  if (pUVar5 == (UWorld *)0x0) {
    return;
  }
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 == (UTransformableHandle *)0x0 || pUVar1 != param_1) &&
     (pUVar2 == (UTransformableHandle *)0x0 || pUVar2 != param_1)) {
    return;
  }
  if (param_2 == ComponentUpdated) {
    SetupDependencies(this,pUVar5);
    FDependencyBuilder::BuildDependencies(pUVar5,this);
    return;
  }
  if (pUVar1 != (UTransformableHandle *)0x0 && pUVar1 == param_1) {
    if (param_2 == UpperDependencyUpdated) {
      if ((pUVar2 != (UTransformableHandle *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
        pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
        pFVar3 = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,local_res10);
        pUVar6 = FWeakObjectPtr::Get(pFVar3);
        if ((pUVar6 != (UObject *)0x0) && (pUVar6 != pUVar4)) goto LAB_1464bb109;
      }
    }
    else if (param_2 == GlobalTransformUpdated) goto LAB_1464bb109;
  }
  if (pUVar2 == (UTransformableHandle *)0x0 || pUVar2 != param_1) {
    return;
  }
  if ((param_2 - GlobalTransformUpdated & 0xfd) != 0) {
    return;
  }
LAB_1464bb109:
  ::Singleton.World = pUVar5;
  FConstraintsManagerController::MarkConstraintForEvaluation
            (&::Singleton,(UTickableConstraint *)this);
  return;
}

// PostDuplicate @ 1464bb590

void __thiscall
UTickableTransformConstraint::PostDuplicate(UTickableTransformConstraint *this,bool param_1)

{
  undefined8 uVar1;
  FGuid *pFVar2;
  FGuid local_18;
  
  if (!param_1) {
    pFVar2 = FGuid::NewGuid(&local_18);
    uVar1 = *(undefined8 *)&pFVar2->C;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)pFVar2;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar1;
  }
  return;
}

// PostEvaluate @ 1464bb5c0

void __thiscall UTickableTransformConstraint::PostEvaluate(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  
  if ((!TransformableHandleUtils::bNewEvaluation) &&
     (pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr, pUVar1 != (UTransformableHandle *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001464bb5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2f0))();
    return;
  }
  return;
}

// PostLoad @ 1464bb710

void __thiscall UTickableTransformConstraint::PostLoad(UTickableTransformConstraint *this)

{
  undefined8 uVar1;
  FGuid *pFVar2;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  if ((((int)this->_padding_ == 0 && *(int *)((longlong)&this->_padding_ + 4) == 0) &&
      (int)this->_padding_ == 0) && *(int *)((longlong)&this->_padding_ + 4) == 0) {
    pFVar2 = FGuid::NewGuid(&local_18);
    uVar1 = *(undefined8 *)&pFVar2->C;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = *(undefined8 *)pFVar2;
    *(undefined8 *)((longlong)&this->_padding_ + 4) = uVar1;
  }
  return;
}

// PreEvaluate @ 1464bb9e0

void __thiscall UTickableTransformConstraint::PreEvaluate(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  
  if (TransformableHandleUtils::bNewEvaluation) {
    pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
    if ((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,0);
    }
    if (TransformableHandleUtils::bNewEvaluation != false) {
      return;
    }
  }
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTransformableHandle *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x0001464bba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,0);
    return;
  }
  return;
}

// ReferencesObject @ 1464bc790

bool __thiscall
UTickableTransformConstraint::ReferencesObject
          (UTickableTransformConstraint *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  bool bVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  undefined1 local_20 [16];
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  local_res10 = param_1.WeakPtr;
  if (pUVar1 == (UTransformableHandle *)0x0) {
LAB_1464bc7d2:
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    pFVar4 = &local_res8;
  }
  else {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 == '\0') goto LAB_1464bc7d2;
    pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
    pFVar4 = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,local_20);
  }
  local_res20 = *pFVar4;
  bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res20,
                     (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
  if (bVar3) {
    return true;
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      pFVar4 = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,local_20);
      goto LAB_1464bc85b;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  pFVar4 = &local_res8;
LAB_1464bc85b:
  local_28 = *pFVar4;
  bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                    ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_28,
                     (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res10);
  return bVar3;
}

// RegisterDelegates @ 1464bd050

void __thiscall UTickableTransformConstraint::RegisterDelegates(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,this)
    ;
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,this)
    ;
  }
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
    ::AddUObject<UTickableTransformConstraint>
              (&pUVar1->OnHandleModified,(UTickableTransformConstraint *)&stack0x00000008,
               (pmf_cd390aa9)this);
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(UTransformableHandle_*,enum_EHandleEvent),FDefaultDelegateUserPolicy>
    ::AddUObject<UTickableTransformConstraint>
              (&pUVar1->OnHandleModified,(UTickableTransformConstraint *)&stack0x00000008,
               (pmf_cd390aa9)this);
  }
  return;
}

// ResolveBoundObjects @ 1464bf8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::ResolveBoundObjects
          (UTickableTransformConstraint *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_2,UObject *param_3)

{
  UTransformableHandle *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  UTickableTransformConstraint *pUVar5;
  UObject *pUVar6;
  UWorld *pUVar7;
  UTickableTransformConstraint *local_res8;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  char local_28;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UTickableTransformConstraint *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UTickableTransformConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  local_30.ObjectIndex = 0;
  local_30.ObjectSerialNumber = 0;
  local_res8 = (UTickableTransformConstraint *)0x0;
  FWeakObjectPtr::operator=(&local_30,(FObjectPtr)&local_res8);
  if (this == (UTickableTransformConstraint *)0x0) {
    local_28 = '\0';
  }
  else {
    local_28 = (**(code **)(this->_padding_ + 0x2c0))(this,1);
  }
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    if (cVar3 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
      local_48 = param_2->Object;
      local_40 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pUVar1,param_1.Value,&local_48,param_3);
    }
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    if (cVar3 != '\0') {
      pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x2e0);
      local_48 = param_2->Object;
      local_40 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pUVar1,param_1.Value,&local_48,param_3);
    }
  }
  if (local_28 == '\0') {
    bVar4 = FWeakObjectPtr::IsValid(&local_38);
    if (bVar4) {
      pUVar5 = (UTickableTransformConstraint *)FWeakObjectPtr::Get(&local_38);
      if (pUVar5 != (UTickableTransformConstraint *)0x0) {
        cVar3 = (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,1);
        if (cVar3 != '\0') {
          pUVar6 = DependencyLocals::GetHandleTarget(&pUVar5->ChildTRSHandle);
          bVar4 = FWeakObjectPtr::IsValid(&local_30);
          if (bVar4) {
            pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_30);
          }
          else {
            if (pUVar6 == (UObject *)0x0) goto LAB_1464bfab3;
            pUVar7 = (UWorld *)(**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6);
          }
          if ((pUVar7 != (UWorld *)0x0) && (((uint)pUVar7->_padding_ >> 0x1e & 1) == 0)) {
            FDependencyBuilder::BuildDependencies(pUVar7,pUVar5);
          }
        }
      }
    }
  }
LAB_1464bfab3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetActive @ 1464c00e0

void __thiscall
UTickableTransformConstraint::SetActive(UTickableTransformConstraint *this,bool param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  UTickableConstraint::SetActive((UTickableConstraint *)this,param_1);
  if ((bool)(char)lVar1 != param_1) {
    FConstraintCycleChecker::CheckAndFixCycles(this);
  }
  return;
}

// SetChildGlobalTransform @ 1464c0130

void __thiscall
UTickableTransformConstraint::SetChildGlobalTransform
          (UTickableTransformConstraint *this,TTransform<double> *param_1)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,param_1);
    }
  }
  return;
}

// SetChildLocalTransform @ 1464c0180

void __thiscall
UTickableTransformConstraint::SetChildLocalTransform
          (UTickableTransformConstraint *this,TTransform<double> *param_1)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,param_1);
    }
  }
  return;
}

// Setup @ 1464c0c20

void __thiscall UTickableTransformConstraint::Setup(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  char cVar2;
  
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if ((pUVar1 != (UTransformableHandle *)0x0) &&
     ((this->ChildTRSHandle).field0_0x0.DebugPtr != (UTransformableHandle *)0x0)) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
    if (cVar2 != '\0') {
      pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      cVar2 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1);
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001464c0c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(this->_padding_ + 0x328))(this);
        return;
      }
    }
  }
  return;
}

// SetupDependencies @ 1464c0c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::SetupDependencies(UTickableTransformConstraint *this,UWorld *param_1)

{
  int iVar1;
  UTransformableHandle *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UTickableTransformConstraint *pUVar7;
  FTickFunction *pFVar8;
  FTickFunction *this_00;
  FConstraintTickFunction *pFVar9;
  UObject *pUVar10;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  ULevel *local_res18;
  ULevel *local_res20;
  undefined1 local_48 [16];
  
  pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    pUVar6 = StaticClass();
    pUVar7 = (UTickableTransformConstraint *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar6);
    if (pUVar7 != this) {
      pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,this,0x10);
    }
  }
  pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar2 != (UTransformableHandle *)0x0) {
    pUVar6 = StaticClass();
    pUVar7 = (UTickableTransformConstraint *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar6);
    if (pUVar7 != this) {
      pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,this,0x10);
    }
  }
  if (param_1 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1231886488388501823>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraint.cpp"
                       ,0x13f,"InWorld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
    this_00 = (FTickFunction *)0x0;
    pFVar8 = this_00;
    if (((pUVar2 != (UTransformableHandle *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
       (pUVar2 = (this->ParentTRSHandle).field0_0x0.DebugPtr,
       cVar5 = (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,1), cVar5 != '\0')) {
      pFVar8 = (FTickFunction *)
               (**(code **)(((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
    }
    pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
    if (((pUVar2 != (UTransformableHandle *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
       (pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr,
       cVar5 = (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,1), cVar5 != '\0')) {
      this_00 = (FTickFunction *)
                (**(code **)(((this->ChildTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))();
    }
    if (((TransformableHandleUtils::bNewEvaluation == false) && (pFVar8 != (FTickFunction *)0x0)) &&
       (this_00 != pFVar8)) {
      local_res18 = UWorld::GetCurrentLevel(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      pFVar9 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
               ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                         ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                           *)&this->_padding_,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex
                          ,(TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_res8);
      pUVar10 = (UObject *)
                (**(code **)(((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 0x318))();
      FTickFunction::AddPrerequisite((FTickFunction *)pFVar9,pUVar10,pFVar8);
    }
    if (this_00 != (FTickFunction *)0x0) {
      pUVar2 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
      this_01 = (FWeakObjectPtr *)(**(code **)(pUVar2->_padding_ + 0x330))(pUVar2,local_48);
      pUVar10 = FWeakObjectPtr::Get(this_01);
      if (pUVar10 != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar6->_padding_)) && (TransformableHandleUtils::bNewEvaluation == false)) {
          return;
        }
      }
      local_res20 = UWorld::GetCurrentLevel(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (ULevel *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      pFVar9 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
               ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                         ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                           *)&this->_padding_,
                          local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                          (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_res10);
      FTickFunction::AddPrerequisite(this_00,(UObject *)this,(FTickFunction *)pFVar9);
    }
  }
  return;
}

// StaticRegisterNativesUTickableTransformConstraint @ 1464c2030

void __cdecl UTickableTransformConstraint::StaticRegisterNativesUTickableTransformConstraint(void)

{
  return;
}

// TeardownConstraint @ 1464c20a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UTickableTransformConstraint::TeardownConstraint(UTickableTransformConstraint *this,UWorld *param_1)

{
  UTransformableHandle *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ULevel *pUVar5;
  FTickFunction *pFVar6;
  UObject *pUVar7;
  FTickFunction *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  ULevel *local_res20;
  FWeakObjectPtr local_48;
  ULevel *local_40;
  FWeakObjectPtr local_38 [2];
  
  if (param_1 == (UWorld *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1231886488388502182>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraint.cpp"
                       ,0x2a6,"InWorld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar5 = UWorld::GetCurrentLevel(param_1);
    if (pUVar5 != (ULevel *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      local_48 = local_res10;
      iVar4 = TSet<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<ULevel_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>,FDefaultSetAllocator>
                          *)&this->_padding_,
                         local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                         (TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *)&local_48);
      pFVar6 = (FTickFunction *)0x0;
      if (iVar4 != -1) {
        pFVar6 = (FTickFunction *)((longlong)iVar4 * 0x50 + this->_padding_);
      }
      this_00 = (FTickFunction *)&pFVar6->TickGroup;
      if (pFVar6 == (FTickFunction *)0x0) {
        this_00 = (FTickFunction *)0x0;
      }
      if (this_00 != (FTickFunction *)0x0) {
        FTickFunction::UnRegisterTickFunction(this_00);
        FTickFunction::SetTickFunctionEnable(this_00,false);
        pFVar6 = GetChildHandleTickFunction(this);
        if (pFVar6 != (FTickFunction *)0x0) {
          FTickFunction::RemovePrerequisite(pFVar6,(UObject *)this,this_00);
        }
        pFVar6 = GetParentHandleTickFunction(this);
        if (pFVar6 != (FTickFunction *)0x0) {
          pUVar7 = (UObject *)
                   (**(code **)(((this->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 0x318))()
          ;
          FTickFunction::RemovePrerequisite(this_00,pUVar7,pFVar6);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_40 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
        local_38[0] = local_res18;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          TSet<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>,FDefaultSetAllocator>
          ::RemoveImpl<TWeakObjectPtr<ULevel_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>,FDefaultSetAllocator>
                      *)&this->_padding_,local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                     (TWeakObjectPtr<ULevel_const_,FWeakObjectPtr> *)local_38);
        }
      }
    }
    pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
    if (pUVar1 != (UTransformableHandle *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,
                 this);
    }
    pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
    if (pUVar1 != (UTransformableHandle *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,
                 this);
      return;
    }
  }
  return;
}

// UnregisterDelegates @ 1464c3c90

void __thiscall
UTickableTransformConstraint::UnregisterDelegates(UTickableTransformConstraint *this)

{
  UTransformableHandle *pUVar1;
  
  pUVar1 = (this->ChildTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,this)
    ;
  }
  pUVar1 = (this->ParentTRSHandle).field0_0x0.DebugPtr;
  if (pUVar1 != (UTransformableHandle *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHandleModified,this)
    ;
    return;
  }
  return;
}

