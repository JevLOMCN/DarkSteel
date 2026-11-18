// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 30

// StaticClass @ 14648e770

UClass * __cdecl UConstraintSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintSubsystem",
               &Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton,
               StaticRegisterNativesUConstraintSubsystem,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstraintSubsystem>,
               InternalVTableHelperCtorCaller<UConstraintSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton;
}

// UConstraintSubsystem @ 14649e610

UConstraintSubsystem * __thiscall
UConstraintSubsystem::UConstraintSubsystem(UConstraintSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UConstraintSubsystem__6B_;
  (this->ConstraintsInWorld).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsInWorld).ArrayNum = 0;
  (this->ConstraintsInWorld).ArrayMax = 0;
  this->bNeedsCleanup = false;
  *(undefined8 *)&this->ConstraintsConfig = 0;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x20 = 0;
  this->OnConstraintAddedToSystem_BP = (FOnConstraintAddedToSystem)0x0;
  this->OnConstraintRemovedFromSystem_BP = (FOnConstraintRemovedFromSystem)0x0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x34 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x48 = 0;
  return this;
}

// UConstraintSubsystem @ 14649e680

UConstraintSubsystem * __thiscall
UConstraintSubsystem::UConstraintSubsystem(UConstraintSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UConstraintSubsystem__6B_;
  (this->ConstraintsInWorld).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsInWorld).ArrayNum = 0;
  (this->ConstraintsInWorld).ArrayMax = 0;
  this->bNeedsCleanup = false;
  *(undefined8 *)&this->ConstraintsConfig = 0;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x20 = 0;
  this->OnConstraintAddedToSystem_BP = (FOnConstraintAddedToSystem)0x0;
  this->OnConstraintRemovedFromSystem_BP = (FOnConstraintRemovedFromSystem)0x0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x34 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstraintsConfig).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x48 = 0;
  return this;
}

// ~UConstraintSubsystem @ 14649fa00

void __thiscall UConstraintSubsystem::~UConstraintSubsystem(UConstraintSubsystem *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UConstraintSubsystem__6B_;
  *(undefined4 *)&(this->ConstraintsConfig).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintsConfig).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintsConfig);
  DestructItems<FConstraintsInWorld,int>
            ((FConstraintsInWorld *)(this->ConstraintsInWorld).AllocatorInstance.Data,
             (this->ConstraintsInWorld).ArrayNum);
  pFVar2 = (this->ConstraintsInWorld).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 1464a1d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UConstraintSubsystem::CleanupInvalidConstraints'::__l9::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *this_00;
  bool bVar1;
  UTickableConstraint *this_01;
  FTickFunction *local_res10;
  FConstraintTickFunction *local_res18;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsStale(&param_1->WeakPtr,true,false);
    if (!bVar1) {
      if (*(longlong *)this != 0) {
        this_00 = *(TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> **
                   )((longlong)this + 8);
        this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
        local_res18 = UTickableConstraint::GetTickFunction(this_01,*(UWorld **)this);
        TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
        Emplace<FTickFunction_*>(this_00,&local_res10,(bool *)&local_res18);
        return false;
      }
      return false;
    }
  }
  return true;
}

// AddConstraint @ 1464a34e0

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
UConstraintSubsystem::AddConstraint
          (UConstraintSubsystem *this,UWorld *param_1,UTickableConstraint *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *this_00;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  FConstraintsInWorld *pFVar7;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar8;
  FScriptContainerElement *this_01;
  UTickableConstraint *local_res8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  UConstraintSubsystem *local_48;
  UTickableConstraint *local_40;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_38;
  
  pFVar7 = ConstraintsInWorldFindOrAdd(this,param_1);
  this_01 = (pFVar7->Constraints).AllocatorInstance.Data;
  pFVar2 = this_01 + (longlong)(pFVar7->Constraints).ArrayNum * 8;
  for (; this_01 != pFVar2; this_01 = this_01 + 8) {
    bVar5 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableConstraint,bool>
                      ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_01,param_2);
    if (bVar5) goto LAB_1464a35f4;
  }
  iVar6 = (pFVar7->Constraints).ArrayNum;
  piVar1 = &(pFVar7->Constraints).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(pFVar7->Constraints).AllocatorInstance,piVar1);
  }
  (pFVar7->Constraints).ArrayNum = iVar6 + 1;
  this_00 = (FWeakObjectPtr *)((pFVar7->Constraints).AllocatorInstance.Data + (longlong)iVar6 * 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UTickableConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UTickableConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  if ((pFVar7->EvaluationGraph).Object != (FConstraintsEvaluationGraph *)0x0) {
    local_68 = 0;
    FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pFVar7->EvaluationGraph != (TSharedPtr<FConstraintsEvaluationGraph,1> *)&local_68) {
      (pFVar7->EvaluationGraph).Object = (FConstraintsEvaluationGraph *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar7->EvaluationGraph).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
  }
  FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
LAB_1464a35f4:
  local_78 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->OnConstraintAddedToSystem_BP != (FOnConstraintAddedToSystem)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnConstraintAddedToSystem_BP");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintAddedToSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintAddedToSystemInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar8 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_38,(UObject *)this,FVar4);
    local_50.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_78 = pTVar8->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (local_78 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((local_78 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48 = this;
    local_40 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_78,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  return;
}

// CleanupInvalidConstraints @ 1464a8ee0

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

void __thiscall UConstraintSubsystem::CleanupInvalidConstraints(UConstraintSubsystem *this)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  int iVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  bool bVar6;
  UWorld *this_00;
  ulonglong uVar7;
  UObject *pUVar8;
  ULevel *pUVar9;
  FConstraintTickFunction *pFVar10;
  UConstraintSubsystem *pUVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  FWeakObjectPtr FVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  ForElementType<unsigned_int> FVar24;
  uint uVar25;
  int iVar26;
  FWeakObjectPtr *pFVar27;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  undefined1 local_157 [3];
  uint local_154;
  int local_150;
  FWeakObjectPtr local_14c;
  uint local_144;
  FWeakObjectPtr *local_140;
  int local_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_130;
  undefined4 local_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  UWorld *local_118;
  FWeakObjectPtr local_110;
  UConstraintSubsystem *local_108;
  undefined4 local_100;
  int local_fc;
  ULevel *local_f8;
  longlong local_f0;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr *local_e0;
  UConstraintSubsystem *local_d8;
  UWorld *local_d0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c8;
  FWeakObjectPtr local_c0;
  FSharedReferencer<1> FStack_b8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_d8 = this;
  local_108 = Get();
  if (local_108 != (UConstraintSubsystem *)0x0) {
    local_144 = (local_108->ConstraintsInWorld).ArrayNum;
    uVar20 = (ulonglong)(int)local_144;
    pFVar27 = (FWeakObjectPtr *)(local_108->ConstraintsInWorld).AllocatorInstance.Data;
    local_e0 = pFVar27 + uVar20 * 5;
    while( true ) {
      pFVar1 = local_e0;
      local_140 = pFVar27;
      if ((local_108->ConstraintsInWorld).ArrayNum != (int)uVar20) {
        local_158 = 0;
        `TCheckedPointerIterator<FConstraintsInWorld,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_158);
      }
      if (pFVar27 == pFVar1) break;
      this_00 = (UWorld *)FWeakObjectPtr::Get(pFVar27);
      uVar12 = pFVar27[2].ObjectIndex;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.AllocationFlags.NumBits = 0;
      local_88.AllocationFlags.MaxBits = 0x80;
      local_88.FirstFreeIndex = -1;
      local_88.NumFreeIndices = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      local_118 = this_00;
      if (uVar12 != 0) {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve(&local_88,uVar12);
        if (uVar12 < 4) {
          uVar20 = 1;
        }
        else {
          uVar20 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_100 = (undefined4)lVar17;
          uVar20 = (ulonglong)(uint)(1 << ((byte)lVar17 & 0x1f));
        }
        uVar12 = (uint)uVar20;
        if ((local_40 == 0) || ((int)local_40 < (int)uVar12)) {
          local_40 = uVar12;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar12 != 0) {
            uVar14 = uVar12;
            if (uVar12 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar14 = 0;
                goto LAB_1464a9065;
              }
            }
            else {
LAB_1464a9065:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar14,4);
            }
            if (0 < (int)uVar12) {
              uVar21 = 0;
              do {
                FVar15.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_48.Data;
                }
                uVar7 = uVar21 & (longlong)(int)uVar12 - 1U;
                uVar21 = uVar21 + 1;
                *(undefined4 *)(FVar15.Data + uVar7 * 4) = 0xffffffff;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
          }
          if (local_40 != 0) {
            pTStack_130 = &local_88.AllocationFlags;
            uStack_134 = 1;
            local_138 = 0;
            iStack_124 = 0;
            iStack_120 = 0;
            if (local_88.AllocationFlags.NumBits != 0) {
              FVar24 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
              if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar24 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar12 = *(uint *)FVar24;
              iStack_120 = 0;
              local_138 = 0;
              while (uVar12 == 0) {
                iStack_120 = iStack_120 + 0x20;
                lVar17 = (longlong)local_138;
                local_138 = local_138 + 1;
                if ((int)(local_88.AllocationFlags.NumBits + -1 +
                         (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_138)
                goto LAB_1464a9172;
                uVar12 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar17 * 4);
              }
              uStack_134 = -uVar12 & uVar12;
              uVar20 = (ulonglong)uStack_134 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_fc = (int)lVar17;
              iStack_124 = local_fc + -1 + iStack_120;
              if (local_88.AllocationFlags.NumBits < iStack_124) {
LAB_1464a9172:
                iStack_124 = local_88.AllocationFlags.NumBits;
              }
            }
            local_128 = 0xffffffff;
            local_a8._padding_ = CONCAT44(uStack_134,local_138);
            local_a8.CurrentBitIndex = iStack_124;
            local_a8.UnvisitedBitMask = 0xffffffff;
            local_a8._28_4_ = uStack_11c;
            local_a8.BaseBitIndex = iStack_120;
            local_b0 = &local_88;
            local_a8.Array = pTStack_130;
            iVar13 = iStack_124;
            if (iStack_124 < local_88.AllocationFlags.NumBits) {
              do {
                pFVar22 = (local_b0->Data).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
                uVar12 = ((uint)(*(ulonglong *)pFVar22 >> 0x14) & 0xffff ^
                         (uint)(*(ulonglong *)pFVar22 >> 4)) * -0x7a143595;
                uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
                uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_40 - 1;
                *(uint *)(pFVar22 + 0xc) = uVar12;
                FVar15.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_48.Data;
                }
                uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
                *(undefined4 *)(pFVar22 + 8) = *(undefined4 *)(FVar15.Data + uVar20 * 4);
                *(int *)(FVar15.Data + uVar20 * 4) = iVar13;
                local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
                iVar13 = local_a8.CurrentBitIndex;
              } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
            }
          }
        }
      }
      iVar13 = pFVar27[2].ObjectIndex;
      iVar26 = 0;
      local_d0 = this_00;
      local_c8 = &local_88;
      if (iVar13 != 0) {
        FVar19 = pFVar27[1];
        iVar26 = 0;
        local_150 = iVar13;
        bVar5 = `UConstraintSubsystem::CleanupInvalidConstraints'::__l9::<lambda_1>::operator()
                          (&local_d0,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)FVar19);
        bVar5 = !bVar5;
        iVar18 = 0;
        do {
          iVar3 = iVar18;
          do {
            iVar3 = iVar3 + 1;
            if (iVar13 <= iVar3) break;
            bVar6 = `UConstraintSubsystem::CleanupInvalidConstraints'::__l9::<lambda_1>::operator()
                              (&local_d0,
                               (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                               ((longlong)FVar19 + (longlong)iVar3 * 8));
          } while (bVar5 == !bVar6);
          if (bVar5 != false) {
            if (iVar26 != iVar18) {
              memmove((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                      ((longlong)FVar19 + (longlong)iVar26 * 8),
                      (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                      ((longlong)FVar19 + (longlong)iVar18 * 8),(longlong)(iVar3 - iVar18) << 3);
            }
            iVar26 = iVar26 + (iVar3 - iVar18);
          }
          bVar5 = (bool)(bVar5 ^ 1);
          iVar18 = iVar3;
        } while (iVar3 < iVar13);
        local_140[2].ObjectIndex = iVar26;
        pFVar27 = local_140;
        this_00 = local_118;
      }
      local_150 = iVar26;
      if (this_00 != (UWorld *)0x0) {
        FVar19 = pFVar27[1];
        local_e8 = (FWeakObjectPtr)((longlong)FVar19 + (longlong)iVar26 * 8);
        while( true ) {
          FVar4 = local_e8;
          local_110 = FVar19;
          if (pFVar27[2].ObjectIndex != iVar26) {
            local_157[0] = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_157);
          }
          if (FVar19 == FVar4) break;
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar19);
          pUVar9 = UWorld::GetCurrentLevel(this_00);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (ULevel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_14c.ObjectIndex = 0;
          local_14c.ObjectSerialNumber = 0;
          local_f8 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (ULevel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_14c,(FObjectPtr)&local_f8);
          pFVar10 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                    ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                              ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                                *)&pUVar8[1].field_0x18,
                               local_14c.ObjectSerialNumber ^ local_14c.ObjectIndex,
                               (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_14c);
          uVar12 = 0;
          iVar13 = (int)pFVar10->_padding_;
          if (0 < iVar13) {
            lVar17 = 0;
            do {
              local_154 = ~uVar12;
              uVar25 = local_154 >> 0x1f;
              uVar14 = 0;
              if ((int)uVar12 < iVar13) {
                uVar14 = uVar25;
              }
              if ((uVar14 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar27 = (FWeakObjectPtr *)(pFVar10->_padding_ + lVar17);
              local_f0 = lVar17;
              pUVar11 = (UConstraintSubsystem *)FWeakObjectPtr::Get(pFVar27,true);
              if (pUVar11 == (UConstraintSubsystem *)0x0) {
                uVar14 = 0;
                if ((int)uVar12 < (int)pFVar10->_padding_) {
                  uVar14 = uVar25;
                }
                if ((uVar14 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar13 = (int)pFVar10->_padding_;
                iVar26 = local_154 + iVar13;
                lVar23 = pFVar10->_padding_;
                if (1 < iVar26) {
                  iVar26 = 1;
                }
                if (iVar26 != 0) {
                  iVar13 = iVar13 - iVar26;
                  lVar16 = local_f0;
LAB_1464a959e:
                  memmove((void *)(lVar16 + lVar23),(void *)((longlong)iVar13 * 0x10 + lVar23),
                          (longlong)iVar26 << 4);
                }
LAB_1464a95b4:
                uVar12 = uVar12 - 1;
                lVar17 = lVar17 + -0x10;
                *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(ForAnyElementType *)&pFVar10->_padding_,(int)pFVar10->_padding_,
                           (int *)((longlong)&pFVar10->_padding_ + 4));
              }
              else if (pUVar11 == local_108) {
                FVar19 = pFVar27[1];
                uVar14 = ((uint)((ulonglong)FVar19 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)FVar19 >> 4)) * -0x7a143595;
                uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
                  FVar15.Data = local_50;
                  if (local_48.Data != (FScriptContainerElement *)0x0) {
                    FVar15.Data = local_48.Data;
                  }
                  for (iVar13 = *(int *)(FVar15.Data +
                                        (ulonglong)(local_40 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4);
                      iVar13 != -1;
                      iVar13 = *(int *)(local_88.Data.AllocatorInstance.Data +
                                       (longlong)iVar13 * 0x10 + 8)) {
                    if (*(FWeakObjectPtr *)
                         (local_88.Data.AllocatorInstance.Data + (longlong)iVar13 * 0x10) == FVar19)
                    goto LAB_1464a95d7;
                  }
                }
                uVar14 = 0;
                if ((int)uVar12 < (int)pFVar10->_padding_) {
                  uVar14 = uVar25;
                }
                if ((uVar14 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar13 = (int)pFVar10->_padding_;
                iVar26 = local_154 + iVar13;
                lVar23 = pFVar10->_padding_;
                if (1 < iVar26) {
                  iVar26 = 1;
                }
                if (iVar26 != 0) {
                  iVar13 = iVar13 - iVar26;
                  lVar16 = (longlong)(int)uVar12 << 4;
                  goto LAB_1464a959e;
                }
                goto LAB_1464a95b4;
              }
LAB_1464a95d7:
              iVar13 = (int)pFVar10->_padding_;
              uVar12 = uVar12 + 1;
              lVar17 = lVar17 + 0x10;
              pFVar27 = local_140;
              this_00 = local_118;
              iVar26 = local_150;
            } while ((int)uVar12 < iVar13);
          }
          FVar19 = (FWeakObjectPtr)((longlong)local_110 + 8);
        }
      }
      pFVar1 = pFVar27 + 3;
      if (pFVar27[3] != (FWeakObjectPtr)0x0) {
        local_c0.ObjectIndex = 0;
        local_c0.ObjectSerialNumber = 0;
        FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar1 != &local_c0) {
          pFVar1->ObjectIndex = 0;
          pFVar1->ObjectSerialNumber = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar27 + 4),&FStack_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_b8.ReferenceController);
      }
      FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_88);
      pFVar27 = pFVar27 + 5;
      uVar20 = (ulonglong)local_144;
    }
    local_d8->bNeedsCleanup = false;
  }
  return;
}

// ConstraintsInWorldFind @ 1464aab40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintsInWorld * __thiscall
UConstraintSubsystem::ConstraintsInWorldFind(UConstraintSubsystem *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FConstraintsInWorld *pFVar5;
  
  if (this->bNeedsCleanup != false) {
    CleanupInvalidConstraints(this);
  }
  uVar3 = GetConstraintsInWorldIndex(this,param_1);
  pFVar5 = (FConstraintsInWorld *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->ConstraintsInWorld).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FConstraintsInWorld *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = (FConstraintsInWorld *)
             ((this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28);
  }
  return pFVar5;
}

// ConstraintsInWorldFind @ 1464aabe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintsInWorld * __thiscall
UConstraintSubsystem::ConstraintsInWorldFind(UConstraintSubsystem *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FConstraintsInWorld *pFVar5;
  
  if (this->bNeedsCleanup != false) {
    CleanupInvalidConstraints(this);
  }
  uVar3 = GetConstraintsInWorldIndex(this,param_1);
  pFVar5 = (FConstraintsInWorld *)0x0;
  if (uVar3 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar3 < (this->ConstraintsInWorld).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FConstraintsInWorld *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = (FConstraintsInWorld *)
             ((this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x28);
  }
  return pFVar5;
}

// ConstraintsInWorldFindOrAdd @ 1464aac80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintsInWorld * __thiscall
UConstraintSubsystem::ConstraintsInWorldFindOrAdd(UConstraintSubsystem *this,UWorld *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FConstraintsInWorld *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  UWorld *local_res18;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  if (this->bNeedsCleanup != false) {
    CleanupInvalidConstraints(this);
  }
  uVar5 = GetConstraintsInWorldIndex(this,param_1);
  iVar6 = (this->ConstraintsInWorld).ArrayNum;
  if (uVar5 != 0xffffffff) {
    uVar10 = 0;
    if ((int)uVar5 < iVar6) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FConstraintsInWorld *)(*pcVar3)();
        return pFVar7;
      }
    }
    return (FConstraintsInWorld *)
           ((this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28);
  }
  piVar1 = &(this->ConstraintsInWorld).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->ConstraintsInWorld).AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar6;
  (this->ConstraintsInWorld).ArrayNum = iVar6 + 1;
  pFVar9 = (this->ConstraintsInWorld).AllocatorInstance.Data;
  *(undefined8 *)(pFVar9 + lVar8 * 0x28) = 0;
  *(undefined8 *)(pFVar9 + lVar8 * 0x28 + 8) = 0;
  *(undefined8 *)(pFVar9 + lVar8 * 0x28 + 0x10) = 0;
  pFVar7 = (FConstraintsInWorld *)(pFVar9 + lVar8 * 0x28);
  (pFVar7->EvaluationGraph).Object = (FConstraintsEvaluationGraph *)0x0;
  (pFVar7->EvaluationGraph).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar7,(FObjectPtr)&local_res18);
  iVar6 = (this->ConstraintsInWorld).ArrayNum;
  pFVar11 = (this->ConstraintsInWorld).AllocatorInstance.Data;
  pFVar9 = pFVar11 + 0x18;
  pFVar2 = pFVar11 + (longlong)iVar6 * 0x28;
  while( true ) {
    if ((this->ConstraintsInWorld).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FConstraintsInWorld,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar2) break;
    if (*(longlong *)pFVar9 != 0) {
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar9 != (FScriptContainerElement *)&local_38) {
        *(longlong *)pFVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar9 + 8),&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
    FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
    pFVar11 = pFVar11 + 0x28;
    pFVar9 = pFVar9 + 0x28;
  }
  return pFVar7;
}

// Deinitialize @ 1464ac620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintSubsystem::Deinitialize(UConstraintSubsystem *this)

{
  TArray<FConstraintsInWorld,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FConstraintsInWorld *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  UWorld *pUVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar10;
  longlong lVar11;
  
  pTVar1 = &this->ConstraintsInWorld;
  uVar10 = (this->ConstraintsInWorld).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 0x28;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->ConstraintsInWorld).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)uVar10 < (this->ConstraintsInWorld).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar9 = (UWorld *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + lVar11));
      FConstraintsInWorld::RemoveConstraints((FConstraintsInWorld *)(pFVar4 + lVar11),pUVar9);
      lVar11 = lVar11 + -0x28;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  piVar2 = &(this->ConstraintsInWorld).ArrayMax;
  pFVar5 = (FConstraintsInWorld *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->ConstraintsInWorld).ArrayNum;
  if ((this->ConstraintsInWorld).ArrayMax < 0) {
    DestructItems<FConstraintsInWorld,int>(pFVar5,iVar3);
    (this->ConstraintsInWorld).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FConstraintsInWorld,int>(pFVar5,iVar3);
    (this->ConstraintsInWorld).ArrayNum = 0;
  }
  if (OnWorldInitHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPreWorldInitialization,OnWorldInitHandle);
  }
  if (OnWorldCleanupHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldCleanup,OnWorldCleanupHandle);
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  if (OnPostGarbageCollectHandle.ID == 0) {
    return;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
            (this_00,OnPostGarbageCollectHandle);
  return;
}

// FOnConstraintAddedToSystem_DelegateWrapper @ 1464af820

void __cdecl
UConstraintSubsystem::FOnConstraintAddedToSystem_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UConstraintSubsystem *param_2,UTickableConstraint *param_3)

{
  UConstraintSubsystem *local_18;
  UTickableConstraint *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnConstraintRemovedFromSystem_DelegateWrapper @ 1464af880

void __cdecl
UConstraintSubsystem::FOnConstraintRemovedFromSystem_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UConstraintSubsystem *param_2,UTickableConstraint *param_3,bool param_4)

{
  UConstraintSubsystem *local_28;
  UTickableConstraint *local_20;
  undefined1 local_18;
  
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  return;
}

// Get @ 1464b0e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstraintSubsystem * __cdecl UConstraintSubsystem::Get(void)

{
  int iVar1;
  bool bVar2;
  UEngine *pUVar3;
  char cVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UConstraintSubsystem *pUVar7;
  
  if (GEngine == (UEngine *)0x0) {
    return (UConstraintSubsystem *)0x0;
  }
  cVar4 = (**(code **)(GEngine->_padding_ + 0x2c0))();
  pUVar3 = GEngine;
  if (cVar4 == '\0') {
    return (UConstraintSubsystem *)0x0;
  }
  pUVar5 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_1464b0e8b;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_1464b0e8b:
    pUVar6 = StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1464b0ebb;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_1464b0ebb:
  pUVar7 = (UConstraintSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar5);
  return pUVar7;
}

// GetConfig @ 1464b1a40

UTickableConstraint * __thiscall
UConstraintSubsystem::GetConfig(UConstraintSubsystem *this,UClass *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UTickableConstraint *pUVar5;
  uint uVar6;
  longlong *plVar7;
  TObjectPtr<UClass_const_>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar4 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                    ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                      *)&this->ConstraintsConfig,uVar6 >> 0x10 ^ uVar6,
                     (TObjectPtr<UClass_const_> *)&local_res8.ObjectPtr);
  if (iVar4 == -1) {
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar1 = *(longlong *)&this->ConstraintsConfig + (longlong)iVar4 * 0x18;
    plVar7 = (longlong *)(lVar1 + 8);
    if (lVar1 == 0) {
      plVar7 = (longlong *)0x0;
    }
    if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) goto LAB_1464b1b32;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5752364834721103928>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.cpp"
                     ,0x38,"ObjectKey && ObjectKey->Get()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UTickableConstraint *)(*pcVar2)();
    return pUVar5;
  }
  if (plVar7 == (longlong *)0x0) {
    return (UTickableConstraint *)0x0;
  }
LAB_1464b1b32:
  return (UTickableConstraint *)*plVar7;
}

// GetConstraints @ 1464b2280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UConstraintSubsystem::GetConstraints
          (UConstraintSubsystem *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UWorld *param_1)

{
  int *piVar1;
  FConstraintsInWorld *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UConstraintSubsystem::GetConstraints'::__l2::
             _dynamic_atexit_destructor_for__DummyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar2 = ConstraintsInWorldFind(this,param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = DummyArray.AllocatorInstance;
  if (pFVar2 == (FConstraintsInWorld *)0x0) {
    iVar3 = DummyArray.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,piVar1);
      goto LAB_1464b2360;
    }
  }
  else {
    iVar3 = (pFVar2->Constraints).ArrayNum;
    _Src.Data = (pFVar2->Constraints).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar3;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,piVar1);
LAB_1464b2360:
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar3 << 3);
      return __return_storage_ptr__;
    }
  }
  *piVar1 = 0;
  return __return_storage_ptr__;
}

// GetConstraintsArray @ 1464b2510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UConstraintSubsystem::GetConstraintsArray(UConstraintSubsystem *this,UWorld *param_1)

{
  FConstraintsInWorld *pFVar1;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UConstraintSubsystem::GetConstraintsArray'::__l2::
             _dynamic_atexit_destructor_for__DummyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = ConstraintsInWorldFind(this,param_1);
  pTVar2 = &DummyArray;
  if (pFVar1 != (FConstraintsInWorld *)0x0) {
    pTVar2 = &pFVar1->Constraints;
  }
  return pTVar2;
}

// GetConstraintsInWorldIndex @ 1464b26f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UConstraintSubsystem::GetConstraintsInWorldIndex(UConstraintSubsystem *this,UWorld *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  UWorld *pUVar3;
  FWeakObjectPtr *this_00;
  
  pFVar2 = (FWeakObjectPtr *)(this->ConstraintsInWorld).AllocatorInstance.Data;
  iVar1 = (this->ConstraintsInWorld).ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar1 * 5) {
      return -1;
    }
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(this_00);
    if (pUVar3 == param_1) break;
    this_00 = this_00 + 5;
  }
  return (int)(((longlong)this_00 - (longlong)pFVar2) / 0x28);
}

// GetEvaluationGraph @ 1464b2ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintsEvaluationGraph * __thiscall
UConstraintSubsystem::GetEvaluationGraph(UConstraintSubsystem *this,UWorld *param_1)

{
  FConstraintsInWorld *this_00;
  FConstraintsEvaluationGraph *pFVar1;
  
  this_00 = ConstraintsInWorldFindOrAdd(this,param_1);
  pFVar1 = FConstraintsInWorld::GetEvaluationGraph(this_00);
  return pFVar1;
}

// GetPrivateStaticClass @ 1464b5a70

UClass * __cdecl UConstraintSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintSubsystem",
               &Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton,
               StaticRegisterNativesUConstraintSubsystem,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstraintSubsystem>,
               InternalVTableHelperCtorCaller<UConstraintSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintSubsystem.InnerSingleton;
}

// HasConstraint @ 1464b79c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UConstraintSubsystem::HasConstraint
          (UConstraintSubsystem *this,UWorld *param_1,UTickableConstraint *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *this_00;
  
  pTVar3 = GetConstraintsArray(this,param_1);
  this_00 = (pTVar3->AllocatorInstance).Data;
  pFVar1 = this_00 + (longlong)pTVar3->ArrayNum * 8;
  while( true ) {
    if (this_00 == pFVar1) {
      return false;
    }
    bVar2 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::UEOpEquals<UTickableConstraint,bool>
                      ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_00,param_2);
    if (bVar2) break;
    this_00 = this_00 + 8;
  }
  return true;
}

// Initialize @ 1464b88d0

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
UConstraintSubsystem::Initialize(UConstraintSubsystem *this,FSubsystemCollectionBase *param_1)

{
  char cVar1;
  
  if (GEngine != (UEngine *)0x0) {
    cVar1 = (**(code **)(GEngine->_padding_ + 0x2c0))();
    if (cVar1 != '\0') {
      InitializeInternal(this);
      UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
      return;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UConstraintSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(UConstraintSubsystem *)&stack0x00000018,
             (pmf_1a40a2a5)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  return;
}

// InitializeInternal @ 1464b8940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UConstraintSubsystem::InitializeInternal(UConstraintSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UConstraintSubsystem *pUVar4;
  TObjectPtr<UClass_const_>_u_0 TVar5;
  FDelegateHandle FVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  uint uVar7;
  undefined1 local_res10 [24];
  undefined1 local_120 [8];
  TObjectPtr<UClass_const_>_u_0 local_118;
  TObjectPtr<UClass_const_>_u_0 local_110;
  UTickableTranslationConstraint *local_108;
  TObjectPtr<UClass_const_>_u_0 local_100;
  TObjectPtr<UClass_const_>_u_0 local_f8;
  UTickableRotationConstraint *local_f0;
  TObjectPtr<UClass_const_>_u_0 local_e8;
  TObjectPtr<UClass_const_>_u_0 local_e0;
  UTickableScaleConstraint *local_d8;
  TObjectPtr<UClass_const_>_u_0 local_d0;
  TObjectPtr<UClass_const_>_u_0 local_c8;
  UTickableParentConstraint *local_c0;
  TObjectPtr<UClass_const_>_u_0 local_b8;
  TObjectPtr<UClass_const_>_u_0 local_b0;
  UTickableLookAtConstraint *local_a8;
  TObjectPtr<UClass_const_>_u_0 *local_a0;
  UTickableTranslationConstraint **local_98;
  TObjectPtr<UClass_const_>_u_0 *local_90;
  UTickableRotationConstraint **local_88;
  TObjectPtr<UClass_const_>_u_0 *local_80;
  UTickableScaleConstraint **local_78;
  TObjectPtr<UClass_const_>_u_0 *local_70;
  UTickableParentConstraint **local_68;
  TObjectPtr<UClass_const_>_u_0 *local_60;
  UTickableLookAtConstraint **local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  pUVar4 = Get();
  if (pUVar4 != (UConstraintSubsystem *)0x0) {
    TVar5.DebugPtr = UTickableTranslationConstraint::StaticClass();
    local_110.DebugPtr = TVar5.DebugPtr;
    if (((TVar5.DebugPtr)->ClassFlags & CLASS_Abstract) == CLASS_None) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      local_118.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar5.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
      }
      uVar7 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                          *)&this->ConstraintsConfig,uVar7 >> 0x10 ^ uVar7,
                         (TObjectPtr<UClass_const_> *)&local_118.ObjectPtr);
      if (iVar3 == -1) {
        local_108 = NewObject<UTickableTranslationConstraint>
                              ((UObject *)pUVar4,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                               (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_a0 = &local_110;
        local_98 = &local_108;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_&,UTickableTranslationConstraint_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                    *)&this->ConstraintsConfig,
                   (TPairInitializer<UClass_*_&,UTickableTranslationConstraint_*_&&> *)local_res10,
                   (bool *)&local_a0);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2569469905728438176>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.h"
                         ,0x60,"!ConstraintClass->HasAnyClassFlags(CLASS_Abstract)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pUVar4 = Get();
  if (pUVar4 != (UConstraintSubsystem *)0x0) {
    TVar5.DebugPtr = UTickableRotationConstraint::StaticClass();
    local_f8.DebugPtr = TVar5.DebugPtr;
    if (((TVar5.DebugPtr)->ClassFlags & CLASS_Abstract) == CLASS_None) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      local_100.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar5.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
      }
      uVar7 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                          *)&this->ConstraintsConfig,uVar7 >> 0x10 ^ uVar7,
                         (TObjectPtr<UClass_const_> *)&local_100.ObjectPtr);
      if (iVar3 == -1) {
        local_f0 = NewObject<UTickableRotationConstraint>
                             ((UObject *)pUVar4,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_90 = &local_f8;
        local_88 = &local_f0;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_&,UTickableRotationConstraint_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                    *)&this->ConstraintsConfig,
                   (TPairInitializer<UClass_*_&,UTickableRotationConstraint_*_&&> *)
                   (local_res10 + 8),(bool *)&local_90);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2569469905728438176>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.h"
                         ,0x60,"!ConstraintClass->HasAnyClassFlags(CLASS_Abstract)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pUVar4 = Get();
  if (pUVar4 != (UConstraintSubsystem *)0x0) {
    TVar5.DebugPtr = UTickableScaleConstraint::StaticClass();
    local_e0.DebugPtr = TVar5.DebugPtr;
    if (((TVar5.DebugPtr)->ClassFlags & CLASS_Abstract) == CLASS_None) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      local_e8.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar5.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
      }
      uVar7 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                          *)&this->ConstraintsConfig,uVar7 >> 0x10 ^ uVar7,
                         (TObjectPtr<UClass_const_> *)&local_e8.ObjectPtr);
      if (iVar3 == -1) {
        local_d8 = NewObject<UTickableScaleConstraint>
                             ((UObject *)pUVar4,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_80 = &local_e0;
        local_78 = &local_d8;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_&,UTickableScaleConstraint_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                    *)&this->ConstraintsConfig,
                   (TPairInitializer<UClass_*_&,UTickableScaleConstraint_*_&&> *)
                   (local_res10 + 0x10),(bool *)&local_80);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2569469905728438176>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.h"
                         ,0x60,"!ConstraintClass->HasAnyClassFlags(CLASS_Abstract)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pUVar4 = Get();
  if (pUVar4 != (UConstraintSubsystem *)0x0) {
    TVar5.DebugPtr = UTickableParentConstraint::StaticClass();
    local_c8.DebugPtr = TVar5.DebugPtr;
    if (((TVar5.DebugPtr)->ClassFlags & CLASS_Abstract) == CLASS_None) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      local_d0.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar5.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
      }
      uVar7 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                          *)&this->ConstraintsConfig,uVar7 >> 0x10 ^ uVar7,
                         (TObjectPtr<UClass_const_> *)&local_d0.ObjectPtr);
      if (iVar3 == -1) {
        local_c0 = NewObject<UTickableParentConstraint>
                             ((UObject *)pUVar4,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_70 = &local_c8;
        local_68 = &local_c0;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_&,UTickableParentConstraint_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                    *)&this->ConstraintsConfig,
                   (TPairInitializer<UClass_*_&,UTickableParentConstraint_*_&&> *)local_120,
                   (bool *)&local_70);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2569469905728438176>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.h"
                         ,0x60,"!ConstraintClass->HasAnyClassFlags(CLASS_Abstract)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pUVar4 = Get();
  if (pUVar4 != (UConstraintSubsystem *)0x0) {
    TVar5.DebugPtr = UTickableLookAtConstraint::StaticClass();
    local_b0.DebugPtr = TVar5.DebugPtr;
    if (((TVar5.DebugPtr)->ClassFlags & CLASS_Abstract) == CLASS_None) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      local_b8.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar5.DebugPtr != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar5.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
        }
      }
      uVar7 = ((uint)((ulonglong)TVar5.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar5.DebugPtr >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar3 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                          *)&this->ConstraintsConfig,uVar7 >> 0x10 ^ uVar7,
                         (TObjectPtr<UClass_const_> *)&local_b8.ObjectPtr);
      if (iVar3 == -1) {
        local_a8 = NewObject<UTickableLookAtConstraint>
                             ((UObject *)pUVar4,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                              (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        local_60 = &local_b0;
        local_58 = &local_a8;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_*_&,UTickableLookAtConstraint_*_&&>_>
                  ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<UTickableConstraint>,0>,FDefaultSetAllocator>
                    *)&this->ConstraintsConfig,
                   (TPairInitializer<UClass_*_&,UTickableLookAtConstraint_*_&&> *)(local_120 + 4),
                   (bool *)&local_60);
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2569469905728438176>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintSubsystem.h"
                         ,0x60,"!ConstraintClass->HasAnyClassFlags(CLASS_Abstract)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_50);
                    /* WARNING: Load size is inaccurate */
  OnWorldInitHandle.ID = *FVar6.ID;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnWorldCleanup,
                        (_func___cdecl_void_UWorld_ptr_bool_bool *)local_48);
                    /* WARNING: Load size is inaccurate */
  OnWorldCleanupHandle.ID = *FVar6.ID;
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar6 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)this_00,(_func___cdecl_void *)local_40);
                    /* WARNING: Load size is inaccurate */
  OnPostGarbageCollectHandle.ID = *FVar6.ID;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// InvalidateConstraints @ 1464b9000

void __thiscall UConstraintSubsystem::InvalidateConstraints(UConstraintSubsystem *this)

{
  this->bNeedsCleanup = true;
  return;
}

// OnPostGarbageCollect @ 1464bb280

void __cdecl UConstraintSubsystem::OnPostGarbageCollect(void)

{
  UConstraintSubsystem *pUVar1;
  
  pUVar1 = Get();
  if (pUVar1 != (UConstraintSubsystem *)0x0) {
    pUVar1->bNeedsCleanup = true;
  }
  return;
}

// OnWorldCleanup @ 1464bb320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UConstraintSubsystem::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UConstraintSubsystem *this;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  undefined1 local_res20 [8];
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  this = Get();
  if (this != (UConstraintSubsystem *)0x0) {
    uVar5 = GetConstraintsInWorldIndex(this,param_1);
    if (uVar5 != 0xffffffff) {
      uVar10 = ~uVar5 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar5 < (this->ConstraintsInWorld).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FConstraintsInWorld::RemoveConstraints
                ((FConstraintsInWorld *)
                 ((this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28),
                 param_1);
      uVar6 = 0;
      if ((int)uVar5 < (this->ConstraintsInWorld).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar8 + 0x20));
      if (*(void **)(pFVar8 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar8 + 8));
      }
      iVar7 = (this->ConstraintsInWorld).ArrayNum + ~uVar5;
      if (iVar7 != 0) {
        memmove(pFVar8,pFVar8 + 0x28,(longlong)iVar7 * 0x28);
      }
      piVar1 = &(this->ConstraintsInWorld).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&(this->ConstraintsInWorld).AllocatorInstance,
                 (this->ConstraintsInWorld).ArrayNum,&(this->ConstraintsInWorld).ArrayMax);
      iVar7 = (this->ConstraintsInWorld).ArrayNum;
      pFVar9 = (this->ConstraintsInWorld).AllocatorInstance.Data;
      pFVar8 = pFVar9 + 0x18;
      pFVar2 = pFVar9 + (longlong)iVar7 * 0x28;
      while( true ) {
        if ((this->ConstraintsInWorld).ArrayNum != iVar7) {
          `TCheckedPointerIterator<FConstraintsInWorld,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar9 == pFVar2) break;
        if (*(longlong *)pFVar8 != 0) {
          local_38 = 0;
          FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pFVar8 != (FScriptContainerElement *)&local_38) {
            *(longlong *)pFVar8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(pFVar8 + 8),&FStack_30);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_30.ReferenceController);
        }
        FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
        pFVar9 = pFVar9 + 0x28;
        pFVar8 = pFVar8 + 0x28;
      }
    }
  }
  return;
}

// OnWorldInit @ 1464bb530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UConstraintSubsystem::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  UConstraintSubsystem *this;
  
  this = Get();
  if (this != (UConstraintSubsystem *)0x0) {
    ConstraintsInWorldFindOrAdd(this,param_1);
    return;
  }
  return;
}

// RemoveConstraint @ 1464bf020

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
UConstraintSubsystem::RemoveConstraint
          (UConstraintSubsystem *this,UWorld *param_1,UTickableConstraint *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar6;
  uint uVar7;
  FWeakObjectPtr local_res8;
  UTickableConstraint *local_res18;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_88;
  FSharedReferencer<1> FStack_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_58;
  UConstraintSubsystem *local_48;
  UTickableConstraint *local_40;
  undefined1 local_38;
  
  local_88 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this->OnConstraintRemovedFromSystem_BP != (FOnConstraintRemovedFromSystem)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnConstraintRemovedFromSystem_BP");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintSubsystem::FOnConstraintRemovedFromSystem_MCSignature,UConstraintSubsystem,UConstraintSubsystem::FOnConstraintRemovedFromSystemInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DelegateOwner->IsValidLowLevelFast(false)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                         ,0xd7,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar6 = FSparseDelegateStorage::GetSharedMulticastDelegate(&local_58,(UObject *)this,FVar3);
    local_70.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_88 = pTVar6->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_80,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_88 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if (local_88 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_48 = this;
    local_40 = param_2;
    local_38 = param_3;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (local_88,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  (**(code **)(param_2->_padding_ + 0x308))(param_2,param_1);
  (**(code **)(param_2->_padding_ + 0x2c8))(param_2,0);
  if (this->bNeedsCleanup != false) {
    CleanupInvalidConstraints(this);
  }
  uVar5 = GetConstraintsInWorldIndex(this,param_1);
  if (uVar5 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar5 < (this->ConstraintsInWorld).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ConstraintsInWorld).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x28;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
                ((TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(pFVar1 + 8),(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)&local_res8);
      if (*(longlong *)(pFVar1 + 0x18) != 0) {
        local_68 = 0;
        FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar1 + 0x18 != (FScriptContainerElement *)&local_68) {
          *(undefined8 *)(pFVar1 + 0x18) = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar1 + 0x20),&FStack_60);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_60.ReferenceController);
      }
      FConstraintsManagerController::Notify(GraphUpdated,(UObject *)0x0);
    }
  }
  return;
}

// SetConstraintDependencies @ 1464c01d0

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
UConstraintSubsystem::SetConstraintDependencies
          (UConstraintSubsystem *this,FConstraintTickFunction *param_1,
          FConstraintTickFunction *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != (FConstraintTickFunction *)0x0) && (param_2 != (FConstraintTickFunction *)0x0))
     && (param_1 != param_2)) {
    lVar1 = param_2->_padding_;
    lVar2 = (longlong)(int)param_2->_padding_ * 0x10 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar1 + 8) == param_1) {
        return;
      }
    }
    lVar1 = param_1->_padding_;
    lVar2 = (longlong)(int)param_1->_padding_ * 0x10 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar1 + 8) == param_2) {
        FTickFunction::RemovePrerequisite
                  ((FTickFunction *)param_1,(UObject *)this,(FTickFunction *)param_2);
        break;
      }
    }
    FTickFunction::AddPrerequisite
              ((FTickFunction *)param_2,(UObject *)this,(FTickFunction *)param_1);
  }
  return;
}

// StaticRegisterNativesUConstraintSubsystem @ 1464c1f80

void __cdecl UConstraintSubsystem::StaticRegisterNativesUConstraintSubsystem(void)

{
  return;
}

