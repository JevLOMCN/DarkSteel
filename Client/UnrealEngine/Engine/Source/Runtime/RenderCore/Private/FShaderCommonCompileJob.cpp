// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 9

// FShaderCommonCompileJob @ 145e406f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FShaderCommonCompileJob * __thiscall
FShaderCommonCompileJob::FShaderCommonCompileJob
          (FShaderCommonCompileJob *this,EShaderCompileJobType param_1,uint param_2,uint param_3,
          EShaderCompileJobPriority param_4)

{
  undefined1 *puVar1;
  TSharedPtr<FShaderCompileJobStatus,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FShaderCommonCompileJob *pFVar5;
  FShaderCompileJobStatus *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FShaderCompileJobStatus *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->JobIndex = -1;
  (this->PendingShaderMap).Reference = (FPendingShaderMapCompileResults *)0x0;
  (this->RequestOwner).Ptr = (FRequestOwner *)0x0;
  pTVar2 = &this->JobStatusPtr;
  this->_padding_ = (longlong)&___7FShaderCommonCompileJob__6B_;
  this->NextLink = (FShaderCommonCompileJob *)0x0;
  this->PrevLink = (FShaderCommonCompileJob **)0x0;
  (this->NumRefs).Counter = 0;
  this->Priority = param_4;
  this->Hash = param_2;
  this->Id = param_3;
  this->Type = param_1;
  this->PendingPriority = None;
  this->CurrentWorker = None;
  puVar1 = &this->field_0x40;
  this->bFinalized = '\0';
  this->bBypassCache = '\0';
  this->bIsGlobalShader = '\0';
  this->bIsDefaultMaterial = '\0';
  this->bInputHashSet = '\0';
  this->bReleased = '\0';
  this->bErrorsAreLikelyToBeCode = '\0';
  this->bSucceeded = '\0';
  (this->InputHash).Hash[0] = '\0';
  (this->InputHash).Hash[1] = '\0';
  (this->InputHash).Hash[2] = '\0';
  (this->InputHash).Hash[3] = '\0';
  (this->InputHash).Hash[4] = '\0';
  (this->InputHash).Hash[5] = '\0';
  (this->InputHash).Hash[6] = '\0';
  (this->InputHash).Hash[7] = '\0';
  (this->InputHash).Hash[8] = '\0';
  (this->InputHash).Hash[9] = '\0';
  (this->InputHash).Hash[10] = '\0';
  (this->InputHash).Hash[0xb] = '\0';
  (this->InputHash).Hash[0xc] = '\0';
  (this->InputHash).Hash[0xd] = '\0';
  (this->InputHash).Hash[0xe] = '\0';
  (this->InputHash).Hash[0xf] = '\0';
  (this->InputHash).Hash[0x10] = '\0';
  (this->InputHash).Hash[0x11] = '\0';
  (this->InputHash).Hash[0x12] = '\0';
  (this->InputHash).Hash[0x13] = '\0';
  (this->InputHash).Hash[0x14] = '\0';
  (this->InputHash).Hash[0x15] = '\0';
  (this->InputHash).Hash[0x16] = '\0';
  (this->InputHash).Hash[0x17] = '\0';
  (this->InputHash).Hash[0x18] = '\0';
  (this->InputHash).Hash[0x19] = '\0';
  (this->InputHash).Hash[0x1a] = '\0';
  (this->InputHash).Hash[0x1b] = '\0';
  (this->InputHash).Hash[0x1c] = '\0';
  (this->InputHash).Hash[0x1d] = '\0';
  (this->InputHash).Hash[0x1e] = '\0';
  (this->InputHash).Hash[0x1f] = '\0';
  this->TimeAddedToPendingQueue = 0.0;
  this->TimeAssignedToExecution = 0.0;
  this->TimeExecutionCompleted = 0.0;
  this->TimeTaskSubmitJobs = 0.0;
  this->TimeTaskSubmitJobsStall = 0.0;
  (this->JobCacheRef).Block = (FShaderJobDataBlock *)0x0;
  (this->JobCacheRef).IndexInBlock = -1;
  (this->JobCacheRef).DuplicateIndex = -1;
  pTVar2->Object = (FShaderCompileJobStatus *)0x0;
  (this->JobStatusPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (param_4 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPriority != EShaderCompileJobPriority::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerJobTypes.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FShaderCommonCompileJob *)(*pcVar3)();
      return pFVar5;
    }
  }
  FStack_20.ReferenceController = ::operator_new(0x20);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FShaderCompileJobStatus *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar6 = (FShaderCompileJobStatus *)(FStack_20.ReferenceController + 1);
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFShaderCompileJobStatus___00_SharedPointerInternals__6B_
    ;
    FStack_20.ReferenceController[1]._padding_ = 0;
    FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if (pFVar6 == (FShaderCompileJobStatus *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FShaderCommonCompileJob *)(*pcVar3)();
        return pFVar5;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = FStack_20.ReferenceController;
    local_28 = pFVar6;
  }
  if (pTVar2 != (TSharedPtr<FShaderCompileJobStatus,1> *)&local_28) {
    pTVar2->Object = pFVar6;
    local_28 = (FShaderCompileJobStatus *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->JobStatusPtr).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~FShaderCommonCompileJob @ 145e43770

void __thiscall FShaderCommonCompileJob::~FShaderCommonCompileJob(FShaderCommonCompileJob *this)

{
  undefined1 *puVar1;
  int iVar2;
  FRequestOwner *pFVar3;
  FPendingShaderMapCompileResults *pFVar4;
  
  this->_padding_ = (longlong)&___7FShaderCommonCompileJob__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JobStatusPtr).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->RequestOwner).Ptr;
  if (pFVar3 != (FRequestOwner *)0x0) {
    (*(code *)pFVar3[-2].Owner.Ptr)(pFVar3 + -2);
  }
  pFVar4 = (this->PendingShaderMap).Reference;
  if (pFVar4 != (FPendingShaderMapCompileResults *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145e437cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
      return;
    }
  }
  return;
}

// ForEachSingleShaderJob @ 145e558e0

void __thiscall
FShaderCommonCompileJob::ForEachSingleShaderJob
          (FShaderCommonCompileJob *this,TFunction<void___cdecl(FShaderCompileJob_&)> *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  FPendingShaderMapCompileResults *pFVar5;
  FShaderCommonCompileJob *pFVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  pFVar6 = (FShaderCommonCompileJob *)0x0;
  if (this->Type == Single) {
    pFVar6 = this;
  }
  if (pFVar6 == (FShaderCommonCompileJob *)0x0) {
    pFVar6 = (FShaderCommonCompileJob *)0x0;
    if (this->Type == Pipeline) {
      pFVar6 = this;
    }
    if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
      pFVar5 = pFVar6[1].PendingShaderMap.Reference;
      iVar1 = pFVar6[1].NumRefs.Counter;
      plVar3 = (longlong *)&pFVar5->field_0x0;
      while( true ) {
        if (pFVar6[1].NumRefs.Counter != iVar1) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == (FPendingShaderMapCompileResults *)(plVar3 + iVar1)) break;
        lVar7 = 0;
        if (*(char *)(*(longlong *)pFVar5 + 0x30) == '\0') {
          lVar7 = *(longlong *)pFVar5;
        }
        if (lVar7 != 0) {
          UE::Core::Private::Function::CheckCallable(*(void **)param_1);
          UNRECOVERED_JUMPTABLE = *(code **)param_1;
          plVar4 = *(longlong **)&param_1->field_0x28;
          if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
            plVar4 = (longlong *)&param_1->field_0x10;
          }
          uVar2 = (**(code **)(*plVar4 + 8))();
          (*UNRECOVERED_JUMPTABLE)(uVar2,lVar7);
        }
        pFVar5 = (FPendingShaderMapCompileResults *)&pFVar5->field_0x8;
      }
    }
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar3 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_1->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000145e5592e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,pFVar6);
  return;
}

// GetInputHash @ 145e58ba0

FBlake3Hash * __thiscall
FShaderCommonCompileJob::GetInputHash
          (FShaderCommonCompileJob *this,FBlake3Hash *__return_storage_ptr__)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  __return_storage_ptr__->Hash[0x14] = '\0';
  __return_storage_ptr__->Hash[0x15] = '\0';
  __return_storage_ptr__->Hash[0x16] = '\0';
  __return_storage_ptr__->Hash[0x17] = '\0';
  __return_storage_ptr__->Hash[0x18] = '\0';
  __return_storage_ptr__->Hash[0x19] = '\0';
  __return_storage_ptr__->Hash[0x1a] = '\0';
  __return_storage_ptr__->Hash[0x1b] = '\0';
  __return_storage_ptr__->Hash[0x1c] = '\0';
  __return_storage_ptr__->Hash[0x1d] = '\0';
  __return_storage_ptr__->Hash[0x1e] = '\0';
  __return_storage_ptr__->Hash[0x1f] = '\0';
  return __return_storage_ptr__;
}

// GetNextJobId @ 145e59650

uint __cdecl FShaderCommonCompileJob::GetNextJobId(void)

{
  uint uVar1;
  
  LOCK();
  UNLOCK();
  uVar1 = JobIdCounter.Counter + 1;
  JobIdCounter.Counter = JobIdCounter.Counter + 1;
  if (uVar1 == 0xffffffff) {
    LOCK();
    JobIdCounter.Counter = 2;
    UNLOCK();
  }
  return uVar1;
}

// GetShaderPipelineJob @ 145e5aeb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderPipelineCompileJob * __thiscall
FShaderCommonCompileJob::GetShaderPipelineJob(FShaderCommonCompileJob *this)

{
  FShaderPipelineCompileJob *pFVar1;
  
  pFVar1 = (FShaderPipelineCompileJob *)0x0;
  if (this->Type == Pipeline) {
    pFVar1 = (FShaderPipelineCompileJob *)this;
  }
  return pFVar1;
}

// GetSingleShaderJob @ 145e5bc30

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderCompileJob * __thiscall
FShaderCommonCompileJob::GetSingleShaderJob(FShaderCommonCompileJob *this)

{
  FShaderCompileJob *pFVar1;
  
  pFVar1 = (FShaderCompileJob *)0x0;
  if (this->Type == Single) {
    pFVar1 = (FShaderCompileJob *)this;
  }
  return pFVar1;
}

// Release @ 145e6a400

uint __thiscall FShaderCommonCompileJob::Release(FShaderCommonCompileJob *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  LOCK();
  pFVar1 = &this->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar5 = iVar2 - 1;
  if (uVar5 == 0) {
    if ((this->Type == Single) || (this->Type == Pipeline)) {
      (**(code **)(this->_padding_ + 0x30))(this,1);
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerJobTypes.h"
                         ,0x1d1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
  }
  return uVar5;
}

// SerializeOutput @ 145e6c2b0

void __thiscall
FShaderCommonCompileJob::SerializeOutput
          (FShaderCommonCompileJob *this,FShaderCacheSerializeContext *param_1)

{
  return;
}

