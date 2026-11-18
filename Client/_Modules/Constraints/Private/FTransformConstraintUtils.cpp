// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 11

// AddConstraint @ 1464a32a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FTransformConstraintUtils::AddConstraint
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3,
          UTickableTransformConstraint *param_4,bool param_5,bool param_6)

{
  bool bVar1;
  
  bVar1 = UE::TransformConstraintUtil::AddConstraint
                    (param_1,param_2,param_3,param_4,param_5,param_6);
  return bVar1;
}

// ComputeRelativeTransform @ 1464aa1d0

TTransform<double> * __cdecl
FTransformConstraintUtils::ComputeRelativeTransform
          (TTransform<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3,
          UTickableTransformConstraint *param_4)

{
  UE::TransformConstraintUtil::ComputeRelativeTransform
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateAndAddFromObjects @ 1464aae40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001464aaf75) */
/* WARNING: Removing unreachable block (ram,0x0001464aaf8c) */
/* WARNING: Removing unreachable block (ram,0x0001464aaf90) */
/* WARNING: Removing unreachable block (ram,0x0001464ab075) */
/* WARNING: Removing unreachable block (ram,0x0001464ab082) */
/* WARNING: Removing unreachable block (ram,0x0001464ab086) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTransformConstraint * __cdecl
FTransformConstraintUtils::CreateAndAddFromObjects
          (UWorld *param_1,UObject *param_2,FName *param_3,UObject *param_4,FName *param_5,
          ETransformConstraintType param_6,bool param_7,bool param_8)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UTransformableHandle *this;
  UTransformableHandle *this_00;
  UTickableTransformConstraint *this_01;
  
  if (((param_1 == (UWorld *)0x0) || (param_2 == (UObject *)0x0)) || (param_4 == (UObject *)0x0)) {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    this = UE::TransformConstraintUtil::Private::GetHandle(param_2,param_3);
    if ((this != (UTransformableHandle *)0x0) &&
       (this_00 = UE::TransformConstraintUtil::Private::GetHandle(param_4,param_5),
       this_00 != (UTransformableHandle *)0x0)) {
      pcVar1 = *(code **)(this_00->_padding_ + 0x328);
      iVar4 = (**(code **)(this->_padding_ + 0x328))(this);
      iVar5 = (*pcVar1)(this_00);
      if (iVar5 == iVar4) {
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
      }
      else {
        cVar2 = (**(code **)(this->_padding_ + 0x338))(this,this_00);
        if ((cVar2 == '\0') &&
           (bVar3 = UE::TransformConstraintUtil::Private::HasConstraintDependencyWith
                              (param_1,this,this_00), !bVar3)) {
          this_01 = UE::TransformConstraintUtil::CreateFromType(param_1,param_6,param_8);
          if (this_01 == (UTickableTransformConstraint *)0x0) {
            return (UTickableTransformConstraint *)0x0;
          }
          cVar2 = (**(code **)(this->_padding_ + 0x2b0))(this,1);
          if (cVar2 == '\0') {
            return this_01;
          }
          cVar2 = (**(code **)(this_00->_padding_ + 0x2b0))
                            (this_00,CONCAT71((int7)((ulonglong)this_00->_padding_ >> 8),1));
          if (cVar2 == '\0') {
            return this_01;
          }
          bVar3 = UE::TransformConstraintUtil::AddConstraint
                            (param_1,this,this_00,this_01,param_7,param_8);
          if (bVar3) {
            return this_01;
          }
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_01);
          return (UTickableTransformConstraint *)0x0;
        }
      }
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
    }
  }
  return (UTickableTransformConstraint *)0x0;
}

// CreateFromType @ 1464abd10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTransformConstraint * __cdecl
FTransformConstraintUtils::CreateFromType
          (UWorld *param_1,ETransformConstraintType param_2,bool param_3)

{
  code *pcVar1;
  FNameEntryId FVar2;
  bool bVar3;
  UEnum *this;
  UTickableTransformConstraint *pUVar4;
  UClass *pUVar5;
  FName FVar6;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar7;
  UClass *pUVar8;
  UTickableParentConstraint *pUVar9;
  ForAnyElementType FVar10;
  UTickableParentConstraint *pUVar11;
  FName FStackX_8;
  FName FStackX_20;
  FName FStack_e8;
  FName FStack_e0;
  FName FStack_d8;
  FName FStack_d0;
  FString FStack_c8;
  FString FStack_b8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_a8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_98;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_78;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_68;
  undefined1 auStack_58 [48];
  
  if (param_1 == (UWorld *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTickableTransformConstraint *)0x0;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return (UTickableTransformConstraint *)0x0;
  }
  this = StaticEnum<enum_ETransformConstraintType>();
  bVar3 = UEnum::IsValidEnumValue(this,(ulonglong)param_2);
  if (!bVar3) {
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTickableTransformConstraint *)0x0;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    return (UTickableTransformConstraint *)0x0;
  }
  UEnum::GetNameStringByValue(this,&FStack_b8,(ulonglong)param_2);
  ::FString::PrintfImpl(&FStack_c8,L"%sConstraint");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (FStack_c8.Data.ArrayNum != 0) {
    FVar10.Data = FStack_c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStackX_8,(wchar_t *)FVar10.Data);
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  pUVar9 = (UTickableParentConstraint *)0x0;
  pUVar11 = (UTickableParentConstraint *)0x0;
  ::Singleton.World = param_1;
  if (param_2 == Translation) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = FStackX_8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableTranslationConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&FStack_d0,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints
              ((UConstraintSubsystem *)pUVar5,&TStack_68,::Singleton.World);
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>_::__l2::<lambda_1>_>
                       (&TStack_68,(<lambda_1>)FStack_d0);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableTranslationConstraint::StaticClass();
      FStack_d0 = MakeUniqueObjectName
                            ((UObject *)(auStack_58 + 0x20),pUVar5,FVar6,
                             FStackX_8.ComparisonIndex.Value);
      FStack_d0 = *(FName *)FStack_d0;
    }
    if (param_3) {
      pUVar8 = UTickableTranslationConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableTranslationConstraint>
                        ((UObject *)pUVar5,FStack_d0,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    TStack_a8.AllocatorInstance.Data = TStack_68.AllocatorInstance.Data;
  }
  else if (param_2 == Rotation) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = FStackX_8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableRotationConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&FStack_d8,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints
              ((UConstraintSubsystem *)pUVar5,&TStack_78,::Singleton.World);
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>_::__l2::<lambda_1>_>
                       (&TStack_78,(<lambda_1>)FStack_d8);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableRotationConstraint::StaticClass();
      FStack_d8 = MakeUniqueObjectName
                            ((UObject *)(auStack_58 + 0x18),pUVar5,FVar6,
                             FStackX_8.ComparisonIndex.Value);
      FStack_d8 = *(FName *)FStack_d8;
    }
    if (param_3) {
      pUVar8 = UTickableRotationConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableRotationConstraint>
                        ((UObject *)pUVar5,FStack_d8,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    TStack_a8.AllocatorInstance.Data = TStack_78.AllocatorInstance.Data;
  }
  else if (param_2 == Scale) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = FStackX_8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableScaleConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&FStack_e0,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints
              ((UConstraintSubsystem *)pUVar5,&TStack_88,::Singleton.World);
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>_::__l2::<lambda_1>_>
                       (&TStack_88,(<lambda_1>)FStack_e0);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableScaleConstraint::StaticClass();
      FStack_e0 = MakeUniqueObjectName
                            ((UObject *)(auStack_58 + 0x10),pUVar5,FVar6,
                             FStackX_8.ComparisonIndex.Value);
      FStack_e0 = *(FName *)FStack_e0;
    }
    if (param_3) {
      pUVar8 = UTickableScaleConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableScaleConstraint>
                        ((UObject *)pUVar5,FStack_e0,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    TStack_a8.AllocatorInstance.Data = TStack_88.AllocatorInstance.Data;
  }
  else if (param_2 == Parent) {
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = FStackX_8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableParentConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&FStack_e8,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints
              ((UConstraintSubsystem *)pUVar5,&TStack_98,::Singleton.World);
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>_::__l2::<lambda_1>_>
                       (&TStack_98,(<lambda_1>)FStack_e8);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableParentConstraint::StaticClass();
      FStack_e8 = MakeUniqueObjectName
                            ((UObject *)(auStack_58 + 8),pUVar5,FVar6,
                             FStackX_8.ComparisonIndex.Value);
      FStack_e8 = *(FName *)FStack_e8;
    }
    if (param_3) {
      pUVar8 = UTickableParentConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = NewObject<UTickableParentConstraint>
                        ((UObject *)pUVar5,FStack_e8,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
    TStack_a8.AllocatorInstance.Data = TStack_98.AllocatorInstance.Data;
  }
  else {
    pUVar11 = pUVar9;
    if (param_2 != LookAt) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6003528814179647138>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraintUtil.cpp"
                         ,0x15e,"false");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UTickableTransformConstraint *)(*pcVar1)();
        return pUVar4;
      }
      goto LAB_1464ac26f;
    }
    pUVar5 = (UClass *)UConstraintSubsystem::Get();
    FVar2.Value = FStackX_8.ComparisonIndex.Value;
    if (pUVar5 == (UClass *)0x0) goto LAB_1464ac26f;
    FVar6 = (FName)UTickableLookAtConstraint::StaticClass();
    MakeUniqueObjectName((UObject *)&FStackX_20,pUVar5,FVar6,FVar2.Value);
    UConstraintSubsystem::GetConstraints
              ((UConstraintSubsystem *)pUVar5,&TStack_a8,::Singleton.World);
    pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             ::
             FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>_::__l2::<lambda_1>_>
                       (&TStack_a8,(<lambda_1>)FStackX_20);
    if (pTVar7 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
      FVar6 = (FName)UTickableLookAtConstraint::StaticClass();
      FStackX_20 = MakeUniqueObjectName
                             ((UObject *)auStack_58,pUVar5,FVar6,FStackX_8.ComparisonIndex.Value);
      FStackX_20 = *(FName *)FStackX_20;
    }
    if (param_3) {
      pUVar8 = UTickableLookAtConstraint::StaticClass();
      pUVar9 = (UTickableParentConstraint *)
               UConstraintSubsystem::GetConfig((UConstraintSubsystem *)pUVar5,pUVar8);
    }
    pUVar11 = (UTickableParentConstraint *)
              NewObject<UTickableLookAtConstraint>
                        ((UObject *)pUVar5,FStackX_20,RF_Transactional,(UObject *)pUVar9,
                         pUVar9 != (UTickableParentConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                         (UPackage *)0x0);
  }
  if (TStack_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_a8.AllocatorInstance.Data);
  }
LAB_1464ac26f:
  if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
    return (UTickableTransformConstraint *)pUVar11;
  }
  return (UTickableTransformConstraint *)pUVar11;
}

// CreateHandleForSceneComponent @ 1464ac2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTransformableComponentHandle * __cdecl
FTransformConstraintUtils::CreateHandleForSceneComponent(USceneComponent *param_1,FName *param_2)

{
  FName FVar1;
  FName FVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UTransformableComponentHandle *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName FStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (USceneComponent *)0x0) {
    pUVar5 = (UTransformableComponentHandle *)0x0;
  }
  else {
    FStack_a8.ComparisonIndex.Value = 0;
    FStack_a8.Number = 0;
    pUVar3 = GetTransientPackage();
    FVar1 = FStack_a8;
    if (FStack_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar3,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = UTransformableComponentHandle::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
    FVar2 = FStack_a8;
    auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_98._56_8_ = (UPackage *)0x0;
    FStack_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    FStack_a8.Number = FVar1.Number;
    auStack_98._16_4_ = FStack_a8.ComparisonIndex.Value;
    auStack_98._20_4_ = FStack_a8.Number;
    auStack_98._24_4_ = RF_Transactional;
    auStack_98._40_8_ = (UObject *)0x0;
    auStack_98[0x20] = false;
    FStack_a8 = FVar2;
    auStack_98._8_8_ = pUVar3;
    pUVar5 = (UTransformableComponentHandle *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    FStack_a8 = (FName)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pUVar5->Component).WeakPtr,(FObjectPtr)&FStack_a8);
    pUVar5->SocketName = *param_2;
    (**(code **)(param_1->_padding_ + 0x5f8))(param_1,2);
  }
  return pUVar5;
}

// GetChildrenConstraints @ 1464b1800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FTransformConstraintUtils::GetChildrenConstraints
          (UWorld *param_1,UTickableTransformConstraint *param_2,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_3,bool param_4)

{
  UTransformableHandle *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FWeakObjectPtr *this;
  undefined1 auStackX_10 [8];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_88;
  UTickableTransformConstraint *pUStack_78;
  UTransformableHandle *pUStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  UObject *pUStack_60;
  UWorld *pUStack_58;
  <lambda_1> <Stack_48;
  
  if ((param_2 != (UTickableTransformConstraint *)0x0) &&
     (cVar3 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1), cVar3 != '\0')) {
    pUVar1 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    uVar5 = (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1);
    this = (FWeakObjectPtr *)(**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,auStackX_10);
    uStack_64 = CONCAT31(uStack_64._1_3_,param_4);
    pUStack_78 = param_2;
    pUStack_70 = pUVar1;
    uStack_68 = uVar5;
    pUStack_60 = FWeakObjectPtr::Get(this);
    <Stack_48._20_4_ = uStack_64;
    <Stack_48.ParentHash = uStack_68;
    <Stack_48.InConstraint = pUStack_78;
    <Stack_48.Handle = pUStack_70;
    ::Singleton.World = param_1;
    pUStack_58 = param_1;
    <Stack_48.ParentTarget = pUStack_60;
    <Stack_48.World = param_1;
    FConstraintsManagerController::
    GetConstraintsByPredicate<_UE::TransformConstraintUtil::GetChildrenConstraints_::__l2::<lambda_1>_>
              (&::Singleton,&TStack_88,&<Stack_48,false);
    if ((param_3 == &TStack_88) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (TStack_88.ArrayNum != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,TStack_88.ArrayNum,&param_3->AllocatorInstance,&param_3->ArrayNum,
                         &param_3->ArrayMax);
      memcpy((param_3->AllocatorInstance).Data + (longlong)iVar6 * 8,
             TStack_88.AllocatorInstance.Data,(longlong)TStack_88.ArrayNum << 3);
    }
    if (TStack_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_88.AllocatorInstance.Data);
    }
  }
  return;
}

// GetConstraintsRelativeTransform @ 1464b2780

TOptional<UE::Math::TTransform<double>_> * __cdecl
FTransformConstraintUtils::GetConstraintsRelativeTransform
          (TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,TTransform<double> *param_2,TTransform<double> *param_3)

{
  UE::TransformConstraintUtil::GetConstraintsRelativeTransform
            (__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetLastActiveConstraintIndex @ 1464b43d0

int __cdecl
FTransformConstraintUtils::GetLastActiveConstraintIndex
          (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *param_1)

{
  int iVar1;
  <lambda_1> local_res8;
  
  iVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (param_1,local_res8,param_1->ArrayNum);
  return iVar1;
}

// GetParentConstraints @ 1464b5150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FTransformConstraintUtils::GetParentConstraints
          (UWorld *param_1,AActor *param_2,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  FName FStackX_8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_18;
  
  if ((param_1 != (UWorld *)0x0) && (param_2 != (AActor *)0x0)) {
    FStackX_8.ComparisonIndex.Value = 0;
    FStackX_8.Number = 0;
    uVar4 = UE::TransformConstraintUtil::Private::GetHandleHash((UObject *)param_2,&FStackX_8);
    if (uVar4 != 0) {
      ::Singleton.World = param_1;
      pTVar6 = FConstraintsManagerController::GetParentConstraints
                         (&::Singleton,&TStack_18,uVar4,true);
      if ((param_3 == pTVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = pTVar6->ArrayNum;
      if (iVar1 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,iVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,
                           &param_3->ArrayMax);
        memmove((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8,
                (pTVar6->AllocatorInstance).Data,(longlong)iVar1 << 3);
        pTVar6->ArrayNum = 0;
      }
      if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetRelativeTransform @ 1464b6560

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

TOptional<UE::Math::TTransform<double>_> * __cdecl
FTransformConstraintUtils::GetRelativeTransform
          (TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,UWorld *param_1,
          uint param_2)

{
  int iVar1;
  UTickableTransformConstraint *this;
  UClass *pUVar2;
  undefined1 auStack_128 [48];
  <lambda_1> local_f8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_f0;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 == (UWorld *)0x0) || (param_2 == 0)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  ::Singleton.World = param_1;
  FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_f0,param_2,true);
  if (local_f0.ArrayNum == 0) {
    __return_storage_ptr__->bIsSet = false;
    if (local_f0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_f0.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  iVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (&local_f0,local_f8,local_f0.ArrayNum);
  if ((iVar1 < 0) || (local_f0.ArrayNum <= iVar1)) {
    __return_storage_ptr__->bIsSet = false;
    goto LAB_1464b666f;
  }
  this = (UTickableTransformConstraint *)
         FWeakObjectPtr::Get((FWeakObjectPtr *)
                             (local_f0.AllocatorInstance.Data + (longlong)iVar1 * 8));
  if (this == (UTickableTransformConstraint *)0x0) {
LAB_1464b6630:
    this = (UTickableTransformConstraint *)0x0;
  }
  else {
    pUVar2 = UTickableTransformConstraint::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) goto LAB_1464b6630;
  }
  UTickableTransformConstraint::GetChildLocalTransform(this,&local_d8);
  UTickableTransformConstraint::GetChildGlobalTransform(this,&local_78);
  UE::TransformConstraintUtil::GetConstraintsRelativeTransform
            (__return_storage_ptr__,&local_f0,&local_d8,&local_78);
LAB_1464b666f:
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateTransformBasedOnConstraint @ 1464c3fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FTransformConstraintUtils::UpdateTransformBasedOnConstraint
          (TTransform<double> *param_1,USceneComponent *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *pAVar5;
  UWorld *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  int iVar9;
  longlong lVar10;
  FWeakObjectPtr *this;
  undefined1 auStack_128 [32];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_108;
  TOptional<UE::Math::TTransform<double>_> TStack_f8;
  TTransform<double> TStack_88;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  pAVar5 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar4);
  if (pAVar5 != (AActor *)0x0) {
    TStack_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_108.ArrayNum = 0;
    TStack_108.ArrayMax = 0;
    pUVar6 = (UWorld *)param_2->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_2);
    }
    UE::TransformConstraintUtil::GetParentConstraints(pUVar6,pAVar5,&TStack_108);
    lVar10 = (longlong)TStack_108.ArrayNum;
    if ((TStack_108.ArrayNum < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar2.Data = TStack_108.AllocatorInstance.Data;
    this = (FWeakObjectPtr *)(TStack_108.AllocatorInstance.Data + lVar10 * 8);
    do {
      do {
        if (this == (FWeakObjectPtr *)FVar2.Data) goto LAB_1464c416a;
        this = this + -1;
        pUVar7 = FWeakObjectPtr::Get(this);
      } while (pUVar7 == (UObject *)0x0);
      pUVar4 = UTickableTransformConstraint::StaticClass();
      iVar9 = (int)pUVar4->_padding_;
    } while ((((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar9) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
               &pUVar4->_padding_)) ||
             (pUVar8 = FWeakObjectPtr::Get(this), *(char *)(pUVar8 + 1) == '\0')) ||
            (pUVar7[4].field_0x8 == '\0'));
    iVar9 = (int)((longlong)this - (longlong)FVar2.Data >> 3);
    if ((-1 < iVar9) && (iVar9 < TStack_108.ArrayNum)) {
      (**(code **)(param_2->_padding_ + 0x520))(param_2,&TStack_88,param_2->AttachSocketName,0);
      UE::TransformConstraintUtil::GetConstraintsRelativeTransform
                (&TStack_f8,&TStack_108,param_1,&TStack_88);
      if (TStack_f8.bIsSet != false) {
        (param_1->Rotation).XY.m128d_f64[0] = TStack_f8.TypedValue.Rotation.XY.m128d_f64[0];
        (param_1->Rotation).XY.m128d_f64[1] = TStack_f8.TypedValue.Rotation.XY.m128d_f64[1];
        (param_1->Rotation).ZW.m128d_f64[0] = TStack_f8.TypedValue.Rotation.ZW.m128d_f64[0];
        (param_1->Rotation).ZW.m128d_f64[1] = TStack_f8.TypedValue.Rotation.ZW.m128d_f64[1];
        (param_1->Translation).XY.m128d_f64[0] = TStack_f8.TypedValue.Translation.XY.m128d_f64[0];
        (param_1->Translation).XY.m128d_f64[1] = TStack_f8.TypedValue.Translation.XY.m128d_f64[1];
        (param_1->Translation).ZW.m128d_f64[0] = TStack_f8.TypedValue.Translation.ZW.m128d_f64[0];
        (param_1->Translation).ZW.m128d_f64[1] = TStack_f8.TypedValue.Translation.ZW.m128d_f64[1];
        (param_1->Scale3D).XY.m128d_f64[0] = TStack_f8.TypedValue.Scale3D.XY.m128d_f64[0];
        (param_1->Scale3D).XY.m128d_f64[1] = TStack_f8.TypedValue.Scale3D.XY.m128d_f64[1];
        (param_1->Scale3D).ZW.m128d_f64[0] = TStack_f8.TypedValue.Scale3D.ZW.m128d_f64[0];
        (param_1->Scale3D).ZW.m128d_f64[1] = TStack_f8.TypedValue.Scale3D.ZW.m128d_f64[1];
      }
    }
LAB_1464c416a:
    if ((FWeakObjectPtr *)TStack_108.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(TStack_108.AllocatorInstance.Data);
    }
  }
  return;
}

