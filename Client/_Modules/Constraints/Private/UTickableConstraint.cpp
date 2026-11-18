// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 24

// StaticClass @ 14648e2b0

UClass * __cdecl UTickableConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableConstraint",
               &Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton,
               StaticRegisterNativesUTickableConstraint,0x90,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableConstraint>,
               InternalVTableHelperCtorCaller<UTickableConstraint>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton;
}

// UTickableConstraint @ 14649e7d0

UTickableConstraint * __thiscall
UTickableConstraint::UTickableConstraint(UTickableConstraint *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Active = true;
  this->bValid = false;
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  (this->ConstraintID).A = 0;
  (this->ConstraintID).B = 0;
  (this->ConstraintID).C = 0;
  (this->ConstraintID).D = 0;
  *(undefined8 *)&this->ConstraintTicks = 0;
  *(undefined8 *)&(this->ConstraintTicks).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintTicks).field_0x20 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintTicks).field_0x34 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstraintTicks).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x48 = 0;
  return this;
}

// UTickableConstraint @ 14649e840

UTickableConstraint * __thiscall UTickableConstraint::UTickableConstraint(UTickableConstraint *this)

{
  UObject::UObject((UObject *)this);
  this->Active = true;
  this->bValid = false;
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  (this->ConstraintID).A = 0;
  (this->ConstraintID).B = 0;
  (this->ConstraintID).C = 0;
  (this->ConstraintID).D = 0;
  *(undefined8 *)&this->ConstraintTicks = 0;
  *(undefined8 *)&(this->ConstraintTicks).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintTicks).field_0x20 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintTicks).field_0x34 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstraintTicks).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintTicks).field_0x48 = 0;
  return this;
}

// ~UTickableConstraint @ 14649fad0

void __thiscall UTickableConstraint::~UTickableConstraint(UTickableConstraint *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&(this->ConstraintTicks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintTicks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintTicks);
  UObject::~UObject((UObject *)this);
  return;
}

// AddedToWorld @ 1464a4530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UTickableConstraint::AddedToWorld(UTickableConstraint *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x6e,L"Pure virtual not implemented (%s)");
  return;
}

// Duplicate @ 1464adc50

UTickableConstraint * __thiscall
UTickableConstraint::Duplicate(UTickableConstraint *this,UObject *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  UTickableConstraint *pUVar3;
  
  FVar1 = (FName)this->_padding_;
  pUVar2 = StaticClass();
  pUVar3 = (UTickableConstraint *)DuplicateObject_Internal(pUVar2,(UObject *)this,param_1,FVar1);
  return pUVar3;
}

// Evaluate @ 1464ae7f0

void __thiscall UTickableConstraint::Evaluate(UTickableConstraint *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FWeakObjectPtr *this_00;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->ConstraintTicks).field_0x28;
  puVar1 = &(this->ConstraintTicks).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConstraintTicks).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464ae88d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1464ae88d:
  uVar10 = *(uint *)&(this->ConstraintTicks).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ConstraintTicks).field_0x8 -
                       *(int *)&(this->ConstraintTicks).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ConstraintTicks).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConstraintTicks).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464ae990;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1464ae990:
  while( true ) {
    if (*(int *)&(this->ConstraintTicks).field_0x8 - *(int *)&(this->ConstraintTicks).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (FWeakObjectPtr *)
              (*(longlong *)&this->ConstraintTicks + (longlong)TStack_50.CurrentBitIndex * 0x50);
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      FConstraintTickFunction::EvaluateFunctions((FConstraintTickFunction *)(this_00 + 1));
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// GetFunction @ 1464b3430

TFunction<void___cdecl(void)> * __thiscall
UTickableConstraint::GetFunction
          (UTickableConstraint *this,TFunction<void___cdecl(void)> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x52,L"Pure virtual not implemented (%s)");
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b5ca0

UClass * __cdecl UTickableConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableConstraint",
               &Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton,
               StaticRegisterNativesUTickableConstraint,0x90,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableConstraint>,
               InternalVTableHelperCtorCaller<UTickableConstraint>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableConstraint.InnerSingleton;
}

// GetTargetHash @ 1464b6e20

uint __thiscall UTickableConstraint::GetTargetHash(UTickableConstraint *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,100,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetTickFunction @ 1464b6ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintTickFunction * __thiscall
UTickableConstraint::GetTickFunction(UTickableConstraint *this,UWorld *param_1)

{
  FConstraintTickFunction *pFVar1;
  FWeakObjectPtr local_res8;
  ULevel *local_res18 [2];
  
  local_res18[0] = UWorld::GetCurrentLevel(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pFVar1 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
           ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                     ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                       *)&this->ConstraintTicks,
                      local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                      (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_res8);
  return pFVar1;
}

// GetTickFunction @ 1464b6f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintTickFunction * __thiscall
UTickableConstraint::GetTickFunction(UTickableConstraint *this,UWorld *param_1)

{
  FConstraintTickFunction *pFVar1;
  FWeakObjectPtr local_res8;
  ULevel *local_res18 [2];
  
  local_res18[0] = UWorld::GetCurrentLevel(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pFVar1 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
           ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                     ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                       *)&this->ConstraintTicks,
                      local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                      (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_res8);
  return pFVar1;
}

// HasBoundObjects @ 1464b7910

bool __thiscall UTickableConstraint::HasBoundObjects(UTickableConstraint *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x5f,L"Pure virtual not implemented (%s)");
  return false;
}

// InitConstraint @ 1464b85b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UTickableConstraint::InitConstraint(UTickableConstraint *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x6a,L"Pure virtual not implemented (%s)");
  return;
}

// IsFullyActive @ 1464b93d0

bool __thiscall UTickableConstraint::IsFullyActive(UTickableConstraint *this)

{
  return this->Active;
}

// IsValid @ 1464b9570

bool __thiscall UTickableConstraint::IsValid(UTickableConstraint *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x58,L"Pure virtual not implemented (%s)");
  return false;
}

// PostDuplicate @ 1464bb560

void __thiscall UTickableConstraint::PostDuplicate(UTickableConstraint *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if (!param_1) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->ConstraintID).A = pFVar4->A;
    (this->ConstraintID).B = uVar1;
    (this->ConstraintID).C = uVar2;
    (this->ConstraintID).D = uVar3;
  }
  return;
}

// PostInitProperties @ 1464bb5f0

void __thiscall UTickableConstraint::PostInitProperties(UTickableConstraint *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x410) == 0) &&
     ((((this->ConstraintID).D == 0 && (this->ConstraintID).C == 0) && (this->ConstraintID).B == 0)
      && (this->ConstraintID).A == 0)) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->ConstraintID).A = pFVar4->A;
    (this->ConstraintID).B = uVar1;
    (this->ConstraintID).C = uVar2;
    (this->ConstraintID).D = uVar3;
  }
  return;
}

// PostLoad @ 1464bb6d0

void __thiscall UTickableConstraint::PostLoad(UTickableConstraint *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  if ((((this->ConstraintID).D == 0 && (this->ConstraintID).C == 0) && (this->ConstraintID).B == 0)
      && (this->ConstraintID).A == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->ConstraintID).A = pFVar4->A;
    (this->ConstraintID).B = uVar1;
    (this->ConstraintID).C = uVar2;
    (this->ConstraintID).D = uVar3;
  }
  return;
}

// ReferencesObject @ 1464bc760

bool __thiscall
UTickableConstraint::ReferencesObject
          (UTickableConstraint *this,TWeakObjectPtr<UObject,FWeakObjectPtr> param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x66,L"Pure virtual not implemented (%s)");
  return false;
}

// ResolveBoundObjects @ 1464bf8a0

void __thiscall
UTickableConstraint::ResolveBoundObjects
          (UTickableConstraint *this,FMovieSceneSequenceID param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x61,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetActive @ 1464bfea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UTickableConstraint::SetActive(UTickableConstraint *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FWeakObjectPtr *this_00;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  this->Active = param_1;
  iVar3 = *(int *)&(this->ConstraintTicks).field_0x28;
  puVar1 = &(this->ConstraintTicks).field_0x10;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ConstraintTicks).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464bff4d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1464bff4d:
  uVar10 = *(uint *)&(this->ConstraintTicks).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ConstraintTicks).field_0x8 -
                       *(int *)&(this->ConstraintTicks).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ConstraintTicks).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ConstraintTicks).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1464c0050;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1464c0050:
  while( true ) {
    if (*(int *)&(this->ConstraintTicks).field_0x8 - *(int *)&(this->ConstraintTicks).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (FWeakObjectPtr *)
              (*(longlong *)&this->ConstraintTicks + (longlong)TStack_60.CurrentBitIndex * 0x50);
    bVar5 = FWeakObjectPtr::IsValid(this_00);
    if (bVar5) {
      FTickFunction::SetTickFunctionEnable((FTickFunction *)(this_00 + 1),param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// StaticRegisterNativesUTickableConstraint @ 1464c1fe0

void __cdecl UTickableConstraint::StaticRegisterNativesUTickableConstraint(void)

{
  return;
}

// TeardownConstraint @ 1464c2070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UTickableConstraint::TeardownConstraint(UTickableConstraint *this,UWorld *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Public\\ConstraintsManager.h"
             ,0x6c,L"Pure virtual not implemented (%s)");
  return;
}

