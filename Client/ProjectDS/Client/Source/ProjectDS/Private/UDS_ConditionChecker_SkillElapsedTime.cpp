// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b46c700

UClass * __cdecl UDS_ConditionChecker_SkillElapsedTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_SkillElapsedTime",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_SkillElapsedTime,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_SkillElapsedTime>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_SkillElapsedTime>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton;
}

// UDS_ConditionChecker_SkillElapsedTime @ 14b470d10

UDS_ConditionChecker_SkillElapsedTime * __thiscall
UDS_ConditionChecker_SkillElapsedTime::UDS_ConditionChecker_SkillElapsedTime
          (UDS_ConditionChecker_SkillElapsedTime *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_SkillElapsedTime__6B_;
  (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetSkillData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_ConditionChecker_SkillElapsedTime @ 14b470d50

UDS_ConditionChecker_SkillElapsedTime * __thiscall
UDS_ConditionChecker_SkillElapsedTime::UDS_ConditionChecker_SkillElapsedTime
          (UDS_ConditionChecker_SkillElapsedTime *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_SkillElapsedTime__6B_;
  (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetSkillData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_ConditionChecker_SkillElapsedTime @ 14b4726c0

void __thiscall
UDS_ConditionChecker_SkillElapsedTime::~UDS_ConditionChecker_SkillElapsedTime
          (UDS_ConditionChecker_SkillElapsedTime *this)

{
  this->_padding_ = (longlong)&___7UDS_ConditionChecker__6B_;
  UDS_ConditionChecker::UnInit((UDS_ConditionChecker *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b475ad0

UClass * __cdecl UDS_ConditionChecker_SkillElapsedTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_SkillElapsedTime",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_SkillElapsedTime,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_SkillElapsedTime>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_SkillElapsedTime>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_SkillElapsedTime.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_SkillElapsedTime @ 14b476db0

void __cdecl
UDS_ConditionChecker_SkillElapsedTime::StaticRegisterNativesUDS_ConditionChecker_SkillElapsedTime
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ConditionChecker_SkillElapsedTime_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnSkillElapsedTime @ 14b4792e0

void __cdecl
UDS_ConditionChecker_SkillElapsedTime::execOnSkillElapsedTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnSkillElapsedTime((UDS_ConditionChecker_SkillElapsedTime *)param_1);
  return;
}

// OnActivateSkill @ 14c091cd0

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
UDS_ConditionChecker_SkillElapsedTime::OnActivateSkill
          (UDS_ConditionChecker_SkillElapsedTime *this,
          TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FTimerManager *this_00;
  float fVar5;
  FWeakObjectPtr local_res10;
  UDS_ConditionChecker_SkillElapsedTime *local_res20;
  FTimerHandle local_48;
  FDelegateAllocation local_40 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    local_48.Handle = 0;
    fVar5 = (float)(int)this->_padding_ * __real_3c23d70a;
    this_00 = FDS_TimerManager::RealTimerManager;
    if (FDS_TimerManager::RealTimerManager == (FTimerManager *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4385932787773866013>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_TimerManager.cpp"
                         ,0x1d,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = &FDS_TimerManager::DummyTimerManager;
    }
    local_40[0].DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40[0].DelegateSize = 0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,local_40);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ConditionChecker_SkillElapsedTime____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res20);
      puVar3[4] = OnSkillElapsedTime;
    }
    FTimerManager::SetTimer
              (this_00,&local_48,
               (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)local_40,
               fVar5,false,__real_bf800000);
    if ((local_40[0].DelegateSize != 0) &&
       (local_40[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40[0].DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)local_40,0,0,0x10);
      local_40[0].DelegateSize = 0;
    }
    if (local_40[0].DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40[0].DelegateAllocator);
    }
  }
  return;
}

// OnCheckCondition @ 14c092ce0

bool __thiscall
UDS_ConditionChecker_SkillElapsedTime::OnCheckCondition(UDS_ConditionChecker_SkillElapsedTime *this)

{
  bool bVar1;
  UDS_SkillData *this_00;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TargetSkillData).WeakPtr);
  if (bVar1) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->TargetSkillData).WeakPtr);
    bVar1 = UDS_SkillData::IsSkillActive(this_00);
    return bVar1;
  }
  return false;
}

// OnInit @ 14c095e90

void __thiscall
UDS_ConditionChecker_SkillElapsedTime::OnInit(UDS_ConditionChecker_SkillElapsedTime *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 6;
  return;
}

// OnSkillElapsedTime @ 14c09bc80

void __thiscall
UDS_ConditionChecker_SkillElapsedTime::OnSkillElapsedTime
          (UDS_ConditionChecker_SkillElapsedTime *this)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnUnInit @ 14c09c4e0

void __thiscall
UDS_ConditionChecker_SkillElapsedTime::OnUnInit(UDS_ConditionChecker_SkillElapsedTime *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->TargetSkillData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->TargetSkillData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[10].field_0x10,this);
    (this->TargetSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// OnUpdateTargetData @ 14c09de60

void __thiscall
UDS_ConditionChecker_SkillElapsedTime::OnUpdateTargetData
          (UDS_ConditionChecker_SkillElapsedTime *this,
          TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_DataBase *this_00;
  ulong64 uVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [2];
  
  local_res10[0] = param_1.WeakPtr;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_ConditionHelper_SkillUse_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      uVar2 = *(undefined4 *)&pUVar4[2].field_0x20;
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
      uVar6 = UDS_DataBase::GetDataContainerKey(this_00);
      UDS_SkillData::GetData((ulong64)&local_res8,uVar6,SUB41(uVar2,0));
      bVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar3) {
        bVar3 = FWeakObjectPtr::IsValid(&(this->TargetSkillData).WeakPtr);
        if (bVar3) {
          pUVar4 = FWeakObjectPtr::Get(&(this->TargetSkillData).WeakPtr);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[10].field_0x10,
                     this);
        }
        (this->TargetSkillData).WeakPtr = local_res8;
        pUVar4 = FWeakObjectPtr::Get(&(this->TargetSkillData).WeakPtr);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_ConditionChecker_SkillElapsedTime>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,bool),FDefaultDelegateUserPolicy>
                    *)&pUVar4[10].field_0x10,
                   (UDS_ConditionChecker_SkillElapsedTime *)(local_res10 + 1),(pmf_1e153582)this);
      }
    }
  }
  bVar3 = (bool)(**(code **)(this->_padding_ + 0x2c0))(this);
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar3);
  return;
}

