// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// SimpleProcessorRun<UMassTestProcessor_Floats> @ 1470eecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

int __cdecl
FMassProcessorTest::SimpleProcessorRun<UMassTestProcessor_Floats>(FMassEntityManager *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  UObject *pUVar4;
  UMassTestProcessor_Floats *this;
  TSharedRef<FMassEntityManager,1> *pTVar5;
  TNotNull<UObject_*> TVar6;
  longlong *plVar7;
  undefined1 auStack_668 [32];
  int local_648 [2];
  TSharedRef<FMassEntityManager,1> local_640;
  longlong local_628;
  longlong lStack_620;
  longlong local_618;
  longlong lStack_610;
  undefined8 local_608;
  longlong *plStack_600;
  FProcessingContext local_5f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_668;
  local_648[0] = 0;
  pUVar4 = GetTransientPackageAsObject();
  this = NewObject<UMassTestProcessor_Floats>(pUVar4);
  pTVar5 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_640);
  TVar6.Val = (UObject *)GetTransientPackage();
  if (TVar6.Val != (UObject *)0x0) {
    UMassProcessor::CallInitialize((UMassProcessor *)this,TVar6,pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_640.SharedReferenceCount.ReferenceController);
    local_628 = this->_padding_;
    lVar2 = this->_padding_;
    local_618 = this->_padding_;
    lStack_610 = this->_padding_;
    lVar1 = this->_padding_;
    plStack_600 = (longlong *)this->_padding_;
    this->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMassProcessorTest::SimpleProcessorRun<UMassTestProcessor_Floats>'::__l2::<lambda_1>,void,FMassExecutionContext_&>
         ::Call;
    this->_padding_ = lStack_620;
    *(undefined4 *)&this->_padding_ = 0x51564248;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    this->_padding_ = (longlong)local_648;
    *(undefined4 *)&this->_padding_ = (undefined4)local_608;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_608._4_4_;
    *(undefined4 *)&this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
    local_608 = lVar1;
    lStack_620 = lVar2;
    if (local_628 != 0) {
      plVar7 = &local_618;
      if (plStack_600 != (longlong *)0x0) {
        plVar7 = plStack_600;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    pTVar5 = TSharedFromThis<FMassEntityManager,1>::AsShared
                       ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_640);
    local_5f8.EntityManager.Object = pTVar5->Object;
    local_5f8.EntityManager.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_5f8.EntityManager.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.EntityManager.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5f8.DeltaSeconds = 0.0;
    FInstancedStruct::FInstancedStruct(&local_5f8.AuxData);
    local_5f8.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
    local_5f8.CommandBuffer.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_5f8.bFlushCommandBuffer = true;
    local_5f8.ExecutionContextPtr = (FMassExecutionContext *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_640.SharedReferenceCount.ReferenceController);
    UE::Mass::Executor::Run((UMassProcessor *)this,&local_5f8);
    iVar3 = local_648[0];
    UE::Mass::FProcessingContext::~FProcessingContext(&local_5f8);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

