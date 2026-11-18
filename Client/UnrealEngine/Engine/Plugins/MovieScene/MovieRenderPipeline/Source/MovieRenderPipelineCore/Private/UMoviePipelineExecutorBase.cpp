// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 52

// StaticClass @ 14dcf4070

UClass * __cdecl UMoviePipelineExecutorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorBase",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorBase,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineExecutorBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton;
}

// UMoviePipelineExecutorBase @ 14dd0cb60

UMoviePipelineExecutorBase * __thiscall
UMoviePipelineExecutorBase::UMoviePipelineExecutorBase
          (UMoviePipelineExecutorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorBase__6B_;
  *(undefined8 *)&this->OnExecutorFinishedDelegate = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorErroredDelegate = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorErroredDelegateNative = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x10 = 0;
  *(undefined8 *)&this->SocketMessageRecievedDelegate = 0;
  *(undefined8 *)&(this->SocketMessageRecievedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SocketMessageRecievedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HTTPResponseRecievedDelegate = 0;
  *(undefined8 *)&(this->HTTPResponseRecievedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HTTPResponseRecievedDelegate).field_0x10 = 0;
  (this->DebugWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).bRenderViewport = false;
  (this->UserData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserData).Data.ArrayNum = 0;
  (this->UserData).Data.ArrayMax = 0;
  (this->TargetPipelineClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StatusMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusMessage).Data.ArrayNum = 0;
  (this->StatusMessage).Data.ArrayMax = 0;
  (this->RecvMessageData).Object = (FArrayReader *)0x0;
  (this->RecvMessageData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OutstandingRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingRequests).ArrayNum = 0;
  (this->OutstandingRequests).ArrayMax = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x18 = 2;
  return this;
}

// ~UMoviePipelineExecutorBase @ 14dd0e5b0

void __thiscall
UMoviePipelineExecutorBase::~UMoviePipelineExecutorBase(UMoviePipelineExecutorBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorBase__6B_;
  DestructItems<UMoviePipelineExecutorBase::FOutstandingRequest,int>
            ((FOutstandingRequest *)(this->OutstandingRequests).AllocatorInstance.Data,
             (this->OutstandingRequests).ArrayNum);
  pFVar1 = (this->OutstandingRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RecvMessageData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->StatusMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UserData).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->HTTPResponseRecievedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HTTPResponseRecievedDelegate);
  pvVar2 = *(void **)&(this->SocketMessageRecievedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SocketMessageRecievedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExecutorErroredDelegateNative).field_0x8,
             *(int *)&(this->OnExecutorErroredDelegateNative).field_0x10);
  pvVar2 = *(void **)&(this->OnExecutorErroredDelegateNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecutorErroredDelegateNative);
  pvVar2 = *(void **)&(this->OnExecutorErroredDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecutorErroredDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExecutorFinishedDelegateNative).field_0x8,
             *(int *)&(this->OnExecutorFinishedDelegateNative).field_0x10);
  pvVar2 = *(void **)&(this->OnExecutorFinishedDelegateNative).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecutorFinishedDelegateNative);
  pvVar2 = *(void **)&(this->OnExecutorFinishedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExecutorFinishedDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14dd158f0

void __thiscall UMoviePipelineExecutorBase::BeginDestroy(UMoviePipelineExecutorBase *this)

{
  if (this->ExternalSocket != (FSocket *)0x0) {
    (**(code **)(this->ExternalSocket->_padding_ + 0x10))();
    this->ExternalSocket = (FSocket *)0x0;
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BlockingSendSocketMessageImpl @ 14dd15ea0

bool __thiscall
UMoviePipelineExecutorBase::BlockingSendSocketMessageImpl
          (UMoviePipelineExecutorBase *this,uchar *param_1,int param_2)

{
  FSocket *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int local_res18 [4];
  
  if (((this->ExternalSocket == (FSocket *)0x0) ||
      (iVar6 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))(), iVar6 != 1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSocketConnected()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineExecutor.cpp"
                         ,0x52,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (0 < param_2) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = __real_416312d010000000;
    auVar7 = roundpd(auVar7,auVar7,1);
    do {
      while( true ) {
        cVar5 = (**(code **)(this->ExternalSocket->_padding_ + 0x80))
                          (this->ExternalSocket,1,(longlong)auVar7._0_8_);
        pFVar1 = this->ExternalSocket;
        if (cVar5 != '\0') break;
        iVar6 = (**(code **)(pFVar1->_padding_ + 0x88))();
        if (iVar6 == 2) {
          return false;
        }
      }
      local_res18[0] = 0;
      cVar5 = (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,param_1,param_2,local_res18);
      if (cVar5 == '\0') {
        return false;
      }
      param_2 = param_2 - local_res18[0];
      param_1 = param_1 + local_res18[0];
    } while (0 < param_2);
  }
  return true;
}

// CancelAllJobs @ 14dd18920

void __thiscall UMoviePipelineExecutorBase::CancelAllJobs(UMoviePipelineExecutorBase *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_CancelAllJobs);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014dd18963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd18974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x300))(this);
  return;
}

// CancelAllJobs_Implementation @ 14dd18990

void __thiscall
UMoviePipelineExecutorBase::CancelAllJobs_Implementation(UMoviePipelineExecutorBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineExecutor.h"
             ,0xf9,L"Pure virtual not implemented (%s)");
  return;
}

// CancelCurrentJob @ 14dd189c0

void __thiscall UMoviePipelineExecutorBase::CancelCurrentJob(UMoviePipelineExecutorBase *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_CancelCurrentJob);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014dd18a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd18a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f8))(this);
  return;
}

// CancelCurrentJob_Implementation @ 14dd18a30

void __thiscall
UMoviePipelineExecutorBase::CancelCurrentJob_Implementation(UMoviePipelineExecutorBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineExecutor.h"
             ,0xf8,L"Pure virtual not implemented (%s)");
  return;
}

// ConnectSocket @ 14dd18ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMoviePipelineExecutorBase::ConnectSocket
          (UMoviePipelineExecutorBase *this,FString *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  undefined4 extraout_var;
  FSocket *pFVar7;
  wchar_t *pwVar8;
  char local_res8 [8];
  FName local_res20;
  undefined4 local_38;
  undefined4 local_34;
  FName local_30;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  if (this->ExternalSocket != (FSocket *)0x0) {
    iVar3 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))();
    if (iVar3 == 1) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      return false;
    }
  }
  if (this->ExternalSocket != (FSocket *)0x0) {
    (**(code **)(this->ExternalSocket->_padding_ + 0x10))();
    this->ExternalSocket = (FSocket *)0x0;
  }
  pFVar5 = ::FName::FName(&local_res20,L"WINDOWS");
  pIVar6 = ISocketSubsystem::Get(pFVar5);
  (**(code **)(pIVar6->_padding_ + 0x90))(pIVar6,&local_28);
  local_res8[0] = '\0';
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)(*local_28 + 0x10))(local_28,pwVar8,local_res8);
  (**(code **)(*local_28 + 0x28))(local_28,param_2);
  if (local_res8[0] == '\0') {
    if (1 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    uVar2 = 0;
  }
  else {
    pFVar5 = ::FName::FName(&local_30,L"WINDOWS");
    pIVar6 = ISocketSubsystem::Get(pFVar5);
    pcVar1 = *(code **)(pIVar6->_padding_ + 0x28);
    ::FString::FString(&local_18,L"MoviePipelineExternalSocket");
    FVar4 = FNameEntryId::FromValidEName((EName)&local_res20);
    local_38 = *(undefined4 *)CONCAT44(extraout_var,FVar4.Value);
    local_34 = 0;
    pFVar7 = (FSocket *)(*pcVar1)(pIVar6,&local_38,&local_18,0);
    this->ExternalSocket = pFVar7;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    uVar2 = (**(code **)(this->ExternalSocket->_padding_ + 0x28))(this->ExternalSocket,local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return (bool)uVar2;
}

// DisconnectSocket @ 14dd1b100

void __thiscall UMoviePipelineExecutorBase::DisconnectSocket(UMoviePipelineExecutorBase *this)

{
  if (this->ExternalSocket != (FSocket *)0x0) {
    (**(code **)(this->ExternalSocket->_padding_ + 0x10))();
    this->ExternalSocket = (FSocket *)0x0;
  }
  return;
}

// Execute @ 14dd1d530

void __thiscall
UMoviePipelineExecutorBase::Execute(UMoviePipelineExecutorBase *this,UMoviePipelineQueue *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  UMoviePipelineQueue *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UMoviePipelineExecutorBase_Execute);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd1d5a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  return;
}

// Execute_Implementation @ 14dd1db90

void __thiscall
UMoviePipelineExecutorBase::Execute_Implementation
          (UMoviePipelineExecutorBase *this,UMoviePipelineQueue *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineExecutor.h"
             ,0xf1,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 14dd2e2a0

UClass * __cdecl UMoviePipelineExecutorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineExecutorBase",
               &Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineExecutorBase,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMoviePipelineExecutorBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineExecutorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineExecutorBase.InnerSingleton;
}

// GetStatusMessage @ 14dd30030

FString * __thiscall
UMoviePipelineExecutorBase::GetStatusMessage
          (UMoviePipelineExecutorBase *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_GetStatusMessage);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    _Src = local_18;
    lVar3 = (longlong)(int)local_10;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    if ((int)local_10 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_10,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2e8))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetStatusMessage_Implementation @ 14dd30130

FString * __thiscall
UMoviePipelineExecutorBase::GetStatusMessage_Implementation
          (UMoviePipelineExecutorBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StatusMessage);
  return __return_storage_ptr__;
}

// GetStatusProgress @ 14dd30160

float __thiscall UMoviePipelineExecutorBase::GetStatusProgress(UMoviePipelineExecutorBase *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  float fVar2;
  float local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_GetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd301c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2f0))(this);
  return fVar2;
}

// GetStatusProgress_Implementation @ 14dd301e0

float __thiscall
UMoviePipelineExecutorBase::GetStatusProgress_Implementation(UMoviePipelineExecutorBase *this)

{
  return this->StatusProgress;
}

// IsRendering @ 14dd33a00

bool __thiscall UMoviePipelineExecutorBase::IsRendering(UMoviePipelineExecutorBase *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_IsRendering);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd33a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2c8))(this);
  return (bool)uVar1;
}

// IsRendering_Implementation @ 14dd33a80

bool __thiscall
UMoviePipelineExecutorBase::IsRendering_Implementation(UMoviePipelineExecutorBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineExecutor.h"
             ,0xf2,L"Pure virtual not implemented (%s)");
  return false;
}

// IsSocketConnected @ 14dd33d80

bool __thiscall UMoviePipelineExecutorBase::IsSocketConnected(UMoviePipelineExecutorBase *this)

{
  int iVar1;
  
  if (this->ExternalSocket != (FSocket *)0x0) {
    iVar1 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))();
    if (iVar1 == 1) {
      return true;
    }
  }
  return false;
}

// OnBeginFrame @ 14dd37830

void __thiscall UMoviePipelineExecutorBase::OnBeginFrame(UMoviePipelineExecutorBase *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_OnBeginFrame);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014dd37873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd37884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return;
}

// OnBeginFrame_Implementation @ 14dd378a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorBase::OnBeginFrame_Implementation(UMoviePipelineExecutorBase *this)

{
  uint uVar1;
  int *piVar2;
  FSocket *pFVar3;
  longlong lVar4;
  uchar *_Str;
  code *pcVar5;
  ISocketSubsystem *pIVar6;
  ForAnyElementType _Src;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ESocketErrors EVar11;
  FName *pFVar12;
  FArrayReader *this_00;
  size_t sVar13;
  uint *puVar14;
  undefined7 uVar16;
  int *piVar15;
  FArrayReader *pFVar17;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auStackY_2e8 [32];
  FScriptContainerElement aFStack_298 [4];
  int iStack_294;
  uint auStack_290 [2];
  ForAnyElementType FStack_288;
  int iStack_280;
  int iStack_27c;
  ISocketSubsystem *pIStack_278;
  TRawPtrProxy<FArrayReader> TStack_268;
  undefined8 uStack_260;
  FSharedReferencer<1> FStack_258;
  FString FStack_250;
  FString FStack_240;
  FString FStack_230;
  undefined1 auStack_218 [8];
  FFastPathLoadBuffer *pFStack_210;
  uchar *puStack_208;
  uchar *puStack_200;
  uchar *puStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  long64 lStack_1e0;
  FPackageFileVersion FStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  FCustomVersionContainer *pFStack_1c0;
  FCustomPropertyListNode *pFStack_1b8;
  FArchiveSavePackageData *pFStack_1b0;
  FProperty *pFStack_1a8;
  FArchiveSerializedPropertyChain *pFStack_1a0;
  undefined8 uStack_198;
  FArchiveState *pFStack_190;
  undefined8 uStack_188;
  ForAnyElementType FStack_180;
  int aiStack_178 [4];
  FName aFStack_168 [2];
  FScriptContainerElement aFStack_158 [256];
  ForAnyElementType FStack_58;
  FScriptContainerElement *pFStack_50;
  int iStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((this->ExternalSocket != (FSocket *)0x0) &&
     (iVar9 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))(), iVar9 == 1)) {
    pFVar12 = ::FName::FName(aFStack_168,L"WINDOWS");
    pIStack_278 = ISocketSubsystem::Get(pFVar12);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = __real_3fe0000000000000;
    auVar21 = roundpd(auVar21,auVar21,1);
    auStack_290[0] = 0;
    cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x80))
                      (this->ExternalSocket,0,(longlong)auVar21._0_8_);
    if (cVar7 != '\0') {
      piVar2 = &this->RecvMessageDataRemaining;
      do {
        do {
          pFVar17 = (FArrayReader *)0x0;
          iStack_294 = 0;
          if (*piVar2 == 0) {
            puVar14 = auStack_290;
            cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x40))
                              (this->ExternalSocket,puVar14);
            if (cVar7 == '\0') {
              return;
            }
            if (auStack_290[0] < 4) {
              return;
            }
            auStack_218 = (undefined1  [8])0x0;
            pFStack_210 = (FFastPathLoadBuffer *)0x0;
            puStack_208 = (uchar *)0x0;
            puStack_200 = (uchar *)0x0;
            puStack_1f8 = (uchar *)0x0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            lStack_1e0 = 0;
            FStack_1d8.FileVersionUE4 = 0;
            FStack_1d8.FileVersionUE5 = 0;
            uStack_1d0 = 0;
            uStack_1c8._0_2_ = 0;
            uStack_1c8._2_2_ = 0;
            uStack_1c8._4_4_ = 0;
            pFStack_1c0 = (FCustomVersionContainer *)0x0;
            pFStack_1b8 = (FCustomPropertyListNode *)0x0;
            pFStack_1b0 = (FArchiveSavePackageData *)0x0;
            pFStack_1a8 = (FProperty *)0x0;
            pFStack_1a0 = (FArchiveSerializedPropertyChain *)0x0;
            uStack_198 = 0;
            pFStack_190 = (FArchiveState *)0x0;
            FArchiveState::FArchiveState((FArchiveState *)auStack_218);
            aiStack_178[0] = 0;
            aiStack_178[1] = 0;
            uVar16 = (undefined7)((ulonglong)puVar14 >> 8);
            uStack_188 = 0;
            FStack_180.Data = (FScriptContainerElement *)0x0;
            auStack_218 = (undefined1  [8])&___7FArrayReader__6B_;
            FArchiveState::SetIsLoading((FArchiveState *)auStack_218,true);
            (**(code **)((longlong)auStack_218 + 0x108))(auStack_218,CONCAT71(uVar16,1));
            if (aiStack_178[0] < 4) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,4 - aiStack_178[0],&FStack_180,aiStack_178,aiStack_178 + 1);
            }
            else if (4 < aiStack_178[0]) {
              iVar9 = aiStack_178[0] + -4;
              if (iVar9 < 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar8) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              else if (iVar9 == 0) goto LAB_14dd3ae8b;
              iVar10 = (aiStack_178[0] - iVar9) + -4;
              iVar20 = aiStack_178[0];
              if (iVar10 != 0) {
                memmove(FStack_180.Data + 4,FStack_180.Data + 4 + iVar9,(longlong)iVar10);
                iVar20 = aiStack_178[0];
              }
              aiStack_178[0] = iVar20 - iVar9;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,&FStack_180,iVar20 - iVar9,aiStack_178 + 1);
            }
LAB_14dd3ae8b:
            iStack_294 = 0;
            cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x70))
                              (this->ExternalSocket,FStack_180.Data,4,&iStack_294);
            pIVar6 = pIStack_278;
            if (cVar7 == '\0') {
              if (5 < (byte)LogMovieRenderPipeline._0_1_) {
                EVar11 = (**(code **)(pIStack_278->_padding_ + 0xb8))(pIStack_278);
                ISocketSubsystem::GetSocketError(pIVar6,EVar11);
                ::FString::PrintfImpl(&FStack_240,L"%s (%d)");
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                if (FStack_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_240.Data.AllocatorInstance.Data);
                }
              }
LAB_14dd3b452:
              if (FStack_180.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_180.Data);
              }
              FArchive::~FArchive((FArchive *)auStack_218);
              return;
            }
            if ((iStack_294 != 4) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("BytesRead == sizeof(uint32)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineExecutor.cpp"
                                   ,0x99,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            piVar15 = (int *)pFStack_210->StartFastPathLoadBuffer;
            if (pFStack_210->EndFastPathLoadBuffer < piVar15 + 1) {
              piVar15 = piVar2;
              if ((uStack_1f0 & 0x10000) == 0) {
                if (*(code **)((longlong)auStack_218 + 0x188) == FArrayReader::Serialize) {
                  FArrayReader::Serialize((FArrayReader *)auStack_218,piVar2,4);
                }
                else {
                  (**(code **)((longlong)auStack_218 + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)auStack_218,(uint *)piVar2);
              }
            }
            else {
              *piVar2 = *piVar15;
              pFStack_210->StartFastPathLoadBuffer = pFStack_210->StartFastPathLoadBuffer + 4;
            }
            if (*piVar2 < 1) {
              if (1 < (byte)LogMovieRenderPipeline._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
              }
              goto LAB_14dd3b452;
            }
            this_00 = ::operator_new(0xa8);
            if (this_00 != (FArrayReader *)0x0) {
              *(undefined8 *)this_00 = 0;
              *(FFastPathLoadBuffer **)&this_00->field_0x8 = (FFastPathLoadBuffer *)0x0;
              ((FFastPathLoadBuffer *)&this_00->field_0x10)->StartFastPathLoadBuffer = (uchar *)0x0;
              *(uchar **)&this_00->field_0x18 = (uchar *)0x0;
              *(uchar **)&this_00->field_0x20 = (uchar *)0x0;
              *(undefined8 *)&this_00->field_0x28 = 0;
              *(undefined8 *)&this_00->field_0x30 = 0;
              *(long64 *)&this_00->field_0x38 = 0;
              *(int *)&this_00->field_0x40 = 0;
              *(int *)&this_00->field_0x44 = 0;
              *(undefined8 *)&this_00->field_0x48 = 0;
              *(undefined8 *)&this_00->field_0x50 = 0;
              *(FCustomVersionContainer **)&this_00->field_0x58 = (FCustomVersionContainer *)0x0;
              *(FCustomPropertyListNode **)&this_00->field_0x60 = (FCustomPropertyListNode *)0x0;
              *(FArchiveSavePackageData **)&this_00->field_0x68 = (FArchiveSavePackageData *)0x0;
              *(FProperty **)&this_00->field_0x70 = (FProperty *)0x0;
              *(FArchiveSerializedPropertyChain **)&this_00->field_0x78 =
                   (FArchiveSerializedPropertyChain *)0x0;
              *(undefined8 *)&this_00->field_0x80 = 0;
              *(FArchiveState **)&this_00->field_0x88 = (FArchiveState *)0x0;
              FArchiveState::FArchiveState((FArchiveState *)this_00);
              *(undefined8 *)&this_00->field_0x98 = 0;
              uVar16 = (undefined7)((ulonglong)piVar15 >> 8);
              *(undefined8 *)&this_00->field_0xa0 = 0;
              *(undefined8 *)&this_00->field_0x90 = 0;
              *(undefined ***)this_00 = &___7FArrayReader__6B_;
              FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
              (**(code **)(*(longlong *)this_00 + 0x108))(this_00,CONCAT71(uVar16,1));
              pFVar17 = this_00;
            }
            TStack_268.Object = pFVar17;
            TSharedPtr<FArrayReader,1>::operator=<FArrayReader>(&this->RecvMessageData,&TStack_268);
            if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                       &((this->RecvMessageData).Object)->field_0x98,*piVar2,Default);
            if (FStack_180.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_180.Data);
            }
            FArchive::~FArchive((FArchive *)auStack_218);
          }
          pFVar3 = this->ExternalSocket;
          iStack_294 = 0;
          iVar9 = *piVar2;
          pcVar5 = *(code **)(pFVar3->_padding_ + 0x70);
          if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = (this->RecvMessageData).Object;
          lVar4 = *(longlong *)&pFVar17->field_0x98;
          if ((pFVar17 == (FArrayReader *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          cVar7 = (*pcVar5)(pFVar3,((longlong)*(int *)&((this->RecvMessageData).Object)->field_0xa0
                                   - (longlong)*piVar2) + lVar4,iVar9);
          pIVar6 = pIStack_278;
          if (cVar7 == '\0') {
            if ((byte)LogMovieRenderPipeline._0_1_ < 6) {
              return;
            }
            EVar11 = (**(code **)(pIStack_278->_padding_ + 0xb8))(pIStack_278);
            ISocketSubsystem::GetSocketError(pIVar6,EVar11);
            ::FString::PrintfImpl(&FStack_230,L"%s (%d)");
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
            if (FStack_230.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(FStack_230.Data.AllocatorInstance.Data);
            return;
          }
          if (iStack_294 < 1) {
            return;
          }
          if ((*piVar2 < iStack_294) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("BytesRead <= RecvMessageDataRemaining",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineExecutor.cpp"
                                 ,0xb1,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *piVar2 = *piVar2 - iStack_294;
        } while (*piVar2 != 0);
        if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar17 = (this->RecvMessageData).Object;
        puVar18 = &pFVar17->field_0x98;
        aFStack_298[0] = (FScriptContainerElement)0x0;
        if (((*(FScriptContainerElement **)puVar18 <= aFStack_298) &&
            (aFStack_298 < *(FScriptContainerElement **)puVar18 + *(int *)&pFVar17->field_0xa4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)&pFVar17->field_0xa0;
        if (iVar9 == *(int *)&pFVar17->field_0xa4) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,(ForAnyElementType *)puVar18,(int *)&pFVar17->field_0xa4);
        }
        *(int *)&pFVar17->field_0xa0 = iVar9 + 1;
        *(FScriptContainerElement *)(*(longlong *)puVar18 + (longlong)iVar9) = aFStack_298[0];
        if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        _Str = *(uchar **)&((this->RecvMessageData).Object)->field_0x98;
        FStack_58.Data = (FScriptContainerElement *)0x0;
        if (_Str == (uchar *)0x0) {
          iStack_48 = 0;
          pFStack_50 = (FScriptContainerElement *)0x0;
        }
        else {
          sVar13 = strlen((char *)_Str);
          iStack_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar13);
          uVar1 = iStack_48 + 1;
          uVar19 = uVar1;
          if (uVar1 < 0x81) {
            if (FStack_58.Data != (FScriptContainerElement *)0x0) {
              uVar19 = 0;
              goto LAB_14dd3b28c;
            }
          }
          else {
LAB_14dd3b28c:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_58,0,uVar19,2);
          }
          pFStack_50 = aFStack_158;
          if (FStack_58.Data != (FScriptContainerElement *)0x0) {
            pFStack_50 = FStack_58.Data;
          }
          UE::Core::Private::Convert((wchar_t *)pFStack_50,uVar1,_Str,(int)sVar13 + 1);
        }
        ::FString::FString(&FStack_250,(wchar_t *)pFStack_50);
        if (FStack_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_58.Data);
        }
        uStack_260 = 0;
        FStack_258.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->RecvMessageData != (TSharedPtr<FArrayReader,1> *)&uStack_260) {
          (this->RecvMessageData).Object = (FArrayReader *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->RecvMessageData).SharedReferenceCount,&FStack_258);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_258.ReferenceController);
        _Src.Data = FStack_250.Data.AllocatorInstance.Data;
        FStack_288.Data = (FScriptContainerElement *)0x0;
        iStack_27c = 0;
        iVar9 = FStack_250.Data.ArrayNum;
        iStack_280 = iVar9;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,0,&FStack_288,iVar9,&iStack_27c);
          memcpy(FStack_288.Data,_Src.Data,(longlong)iVar9 * 2);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->SocketMessageRecievedDelegate,&FStack_288);
        if (FStack_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_288.Data);
        }
        if (FStack_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_250.Data.AllocatorInstance.Data);
        }
      } while( true );
    }
    (**(code **)(this->ExternalSocket->_padding_ + 0x88))();
  }
  return;
}

// OnExecutorErroredImpl @ 14dd37b90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineExecutorBase::OnExecutorErroredImpl
          (UMoviePipelineExecutorBase *this,UMoviePipeline *param_1,bool param_2,FText *param_3)

{
  ITextData *pIVar1;
  UMoviePipelineExecutorBase *local_18;
  undefined1 local_10;
  
  if (param_2) {
    this->bAnyJobHadFatalError = true;
  }
  TMulticastDelegate<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnExecutorFinishedDelegateNative,this,this->bAnyJobHadFatalError == false);
  local_10 = this->bAnyJobHadFatalError == false;
  local_18 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnExecutorFinishedDelegate,&local_18);
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// OnExecutorFinishedImpl @ 14dd37c10

void __thiscall UMoviePipelineExecutorBase::OnExecutorFinishedImpl(UMoviePipelineExecutorBase *this)

{
  UMoviePipelineExecutorBase *local_18;
  undefined1 local_10;
  
  TMulticastDelegate<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnExecutorFinishedDelegateNative,this,this->bAnyJobHadFatalError == false);
  local_10 = this->bAnyJobHadFatalError == false;
  local_18 = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnExecutorFinishedDelegate,&local_18);
  return;
}

// OnHttpRequestCompletedImpl @ 14dd37c60

void __thiscall
UMoviePipelineExecutorBase::OnHttpRequestCompletedImpl
          (UMoviePipelineExecutorBase *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res20 [8];
  FString local_68;
  FScriptContainerElement *local_58;
  int local_50;
  int local_48;
  undefined4 local_44;
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  iVar2 = (this->OutstandingRequests).ArrayNum;
  pFVar6 = (this->OutstandingRequests).AllocatorInstance.Data;
  iVar7 = -1;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->OutstandingRequests).ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineExecutorBase::FOutstandingRequest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar6 == pFVar1) goto LAB_14dd37cdc;
    if (*(IHttpRequest **)(pFVar6 + 8) == param_1->Object) break;
    pFVar6 = pFVar6 + 0x18;
  }
  iVar7 = *(int *)pFVar6;
LAB_14dd37cdc:
  if ((param_3) && (param_2->Object != (IHttpResponse *)0x0)) {
    uVar5 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if ((param_2->Object == (IHttpResponse *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*param_2->Object + 0x60))(param_2->Object,&local_58);
    pFVar1 = local_58;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_34[0] = 0;
    local_38 = local_50;
    local_48 = iVar7;
    local_44 = uVar5;
    if (local_50 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_40,local_50,local_34);
      memcpy(local_40.Data,pFVar1,(longlong)local_50 * 2);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->HTTPResponseRecievedDelegate,&local_48);
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  else {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FMoviePipelineHttpResponseRecieved::Broadcast
              (&this->HTTPResponseRecievedDelegate,iVar7,-1,&local_68);
    local_58 = local_68.Data.AllocatorInstance.Data;
  }
  if (local_58 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessIncomingSocketData @ 14dd3ac30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMoviePipelineExecutorBase::ProcessIncomingSocketData(UMoviePipelineExecutorBase *this)

{
  uint uVar1;
  int *piVar2;
  FSocket *pFVar3;
  longlong lVar4;
  uchar *_Str;
  code *pcVar5;
  ISocketSubsystem *pIVar6;
  ForAnyElementType _Src;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  ESocketErrors EVar12;
  FName *pFVar13;
  FArrayReader *this_00;
  size_t sVar14;
  uint *puVar15;
  undefined7 uVar17;
  int *piVar16;
  FArrayReader *pFVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auStackY_2e8 [32];
  FScriptContainerElement local_298 [4];
  int local_294;
  uint local_290 [2];
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  ISocketSubsystem *local_278;
  TRawPtrProxy<FArrayReader> local_268;
  undefined8 local_260;
  FSharedReferencer<1> FStack_258;
  FString local_250;
  FString local_240;
  FString local_230;
  undefined1 local_218 [8];
  FFastPathLoadBuffer *pFStack_210;
  uchar *local_208;
  uchar *puStack_200;
  uchar *local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  long64 lStack_1e0;
  FPackageFileVersion local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  FCustomVersionContainer *pFStack_1c0;
  FCustomPropertyListNode *local_1b8;
  FArchiveSavePackageData *pFStack_1b0;
  FProperty *local_1a8;
  FArchiveSerializedPropertyChain *pFStack_1a0;
  undefined8 local_198;
  FArchiveState *pFStack_190;
  undefined8 local_188;
  ForAnyElementType FStack_180;
  int local_178 [4];
  FName local_168 [2];
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((this->ExternalSocket == (FSocket *)0x0) ||
     (iVar10 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))(), iVar10 != 1)) {
    return true;
  }
  pFVar13 = ::FName::FName(local_168,L"WINDOWS");
  local_278 = ISocketSubsystem::Get(pFVar13);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = __real_3fe0000000000000;
  auVar22 = roundpd(auVar22,auVar22,1);
  local_290[0] = 0;
  cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x80))
                    (this->ExternalSocket,0,(longlong)auVar22._0_8_);
  if (cVar7 == '\0') {
    iVar10 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))();
    return iVar10 != 2;
  }
  piVar2 = &this->RecvMessageDataRemaining;
  do {
    do {
      pFVar18 = (FArrayReader *)0x0;
      local_294 = 0;
      if (*piVar2 == 0) {
        puVar15 = local_290;
        cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x40))(this->ExternalSocket,puVar15);
        if (cVar7 == '\0') {
          return true;
        }
        if (local_290[0] < 4) {
          return true;
        }
        local_218 = (undefined1  [8])0x0;
        pFStack_210 = (FFastPathLoadBuffer *)0x0;
        local_208 = (uchar *)0x0;
        puStack_200 = (uchar *)0x0;
        local_1f8 = (uchar *)0x0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        lStack_1e0 = 0;
        local_1d8.FileVersionUE4 = 0;
        local_1d8.FileVersionUE5 = 0;
        uStack_1d0 = 0;
        local_1c8._0_2_ = 0;
        local_1c8._2_2_ = 0;
        local_1c8._4_4_ = 0;
        pFStack_1c0 = (FCustomVersionContainer *)0x0;
        local_1b8 = (FCustomPropertyListNode *)0x0;
        pFStack_1b0 = (FArchiveSavePackageData *)0x0;
        local_1a8 = (FProperty *)0x0;
        pFStack_1a0 = (FArchiveSerializedPropertyChain *)0x0;
        local_198 = 0;
        pFStack_190 = (FArchiveState *)0x0;
        FArchiveState::FArchiveState((FArchiveState *)local_218);
        local_178[0] = 0;
        local_178[1] = 0;
        uVar17 = (undefined7)((ulonglong)puVar15 >> 8);
        local_188 = 0;
        FStack_180.Data = (FScriptContainerElement *)0x0;
        local_218 = (undefined1  [8])&___7FArrayReader__6B_;
        FArchiveState::SetIsLoading((FArchiveState *)local_218,true);
        (**(code **)((longlong)local_218 + 0x108))(local_218,CONCAT71(uVar17,1));
        if (local_178[0] < 4) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,4 - local_178[0],&FStack_180,local_178,local_178 + 1);
        }
        else if (4 < local_178[0]) {
          iVar10 = local_178[0] + -4;
          if (iVar10 < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
          }
          else if (iVar10 == 0) goto LAB_14dd3ae8b;
          iVar11 = (local_178[0] - iVar10) + -4;
          iVar21 = local_178[0];
          if (iVar11 != 0) {
            memmove(FStack_180.Data + 4,FStack_180.Data + 4 + iVar10,(longlong)iVar11);
            iVar21 = local_178[0];
          }
          local_178[0] = iVar21 - iVar10;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&FStack_180,iVar21 - iVar10,local_178 + 1);
        }
LAB_14dd3ae8b:
        local_294 = 0;
        cVar7 = (**(code **)(this->ExternalSocket->_padding_ + 0x70))
                          (this->ExternalSocket,FStack_180.Data,4,&local_294);
        pIVar6 = local_278;
        if (cVar7 == '\0') {
          if (5 < (byte)LogMovieRenderPipeline._0_1_) {
            EVar12 = (**(code **)(local_278->_padding_ + 0xb8))(local_278);
            ISocketSubsystem::GetSocketError(pIVar6,EVar12);
            ::FString::PrintfImpl(&local_240,L"%s (%d)");
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
          }
LAB_14dd3b452:
          if (FStack_180.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_180.Data);
          }
          FArchive::~FArchive((FArchive *)local_218);
          return false;
        }
        if ((local_294 != 4) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BytesRead == sizeof(uint32)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineExecutor.cpp"
                               ,0x99,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        piVar16 = (int *)pFStack_210->StartFastPathLoadBuffer;
        if (pFStack_210->EndFastPathLoadBuffer < piVar16 + 1) {
          piVar16 = piVar2;
          if ((uStack_1f0 & 0x10000) == 0) {
            if (*(code **)((longlong)local_218 + 0x188) == FArrayReader::Serialize) {
              FArrayReader::Serialize((FArrayReader *)local_218,piVar2,4);
            }
            else {
              (**(code **)((longlong)local_218 + 0x188))();
            }
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)local_218,(uint *)piVar2);
          }
        }
        else {
          *piVar2 = *piVar16;
          pFStack_210->StartFastPathLoadBuffer = pFStack_210->StartFastPathLoadBuffer + 4;
        }
        if (*piVar2 < 1) {
          if (1 < (byte)LogMovieRenderPipeline._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          }
          goto LAB_14dd3b452;
        }
        this_00 = ::operator_new(0xa8);
        if (this_00 != (FArrayReader *)0x0) {
          *(undefined8 *)this_00 = 0;
          *(FFastPathLoadBuffer **)&this_00->field_0x8 = (FFastPathLoadBuffer *)0x0;
          ((FFastPathLoadBuffer *)&this_00->field_0x10)->StartFastPathLoadBuffer = (uchar *)0x0;
          *(uchar **)&this_00->field_0x18 = (uchar *)0x0;
          *(uchar **)&this_00->field_0x20 = (uchar *)0x0;
          *(undefined8 *)&this_00->field_0x28 = 0;
          *(undefined8 *)&this_00->field_0x30 = 0;
          *(long64 *)&this_00->field_0x38 = 0;
          *(int *)&this_00->field_0x40 = 0;
          *(int *)&this_00->field_0x44 = 0;
          *(undefined8 *)&this_00->field_0x48 = 0;
          *(undefined8 *)&this_00->field_0x50 = 0;
          *(FCustomVersionContainer **)&this_00->field_0x58 = (FCustomVersionContainer *)0x0;
          *(FCustomPropertyListNode **)&this_00->field_0x60 = (FCustomPropertyListNode *)0x0;
          *(FArchiveSavePackageData **)&this_00->field_0x68 = (FArchiveSavePackageData *)0x0;
          *(FProperty **)&this_00->field_0x70 = (FProperty *)0x0;
          *(FArchiveSerializedPropertyChain **)&this_00->field_0x78 =
               (FArchiveSerializedPropertyChain *)0x0;
          *(undefined8 *)&this_00->field_0x80 = 0;
          *(FArchiveState **)&this_00->field_0x88 = (FArchiveState *)0x0;
          FArchiveState::FArchiveState((FArchiveState *)this_00);
          *(undefined8 *)&this_00->field_0x98 = 0;
          uVar17 = (undefined7)((ulonglong)piVar16 >> 8);
          *(undefined8 *)&this_00->field_0xa0 = 0;
          *(undefined8 *)&this_00->field_0x90 = 0;
          *(undefined ***)this_00 = &___7FArrayReader__6B_;
          FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
          (**(code **)(*(longlong *)this_00 + 0x108))(this_00,CONCAT71(uVar17,1));
          pFVar18 = this_00;
        }
        local_268.Object = pFVar18;
        TSharedPtr<FArrayReader,1>::operator=<FArrayReader>(&this->RecvMessageData,&local_268);
        if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                   &((this->RecvMessageData).Object)->field_0x98,*piVar2,Default);
        if (FStack_180.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_180.Data);
        }
        FArchive::~FArchive((FArchive *)local_218);
      }
      pFVar3 = this->ExternalSocket;
      local_294 = 0;
      iVar10 = *piVar2;
      pcVar5 = *(code **)(pFVar3->_padding_ + 0x70);
      if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar18 = (this->RecvMessageData).Object;
      lVar4 = *(longlong *)&pFVar18->field_0x98;
      if ((pFVar18 == (FArrayReader *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      cVar7 = (*pcVar5)(pFVar3,((longlong)*(int *)&((this->RecvMessageData).Object)->field_0xa0 -
                               (longlong)*piVar2) + lVar4,iVar10);
      pIVar6 = local_278;
      if (cVar7 == '\0') {
        if (5 < (byte)LogMovieRenderPipeline._0_1_) {
          EVar12 = (**(code **)(local_278->_padding_ + 0xb8))(local_278);
          ISocketSubsystem::GetSocketError(pIVar6,EVar12);
          ::FString::PrintfImpl(&local_230,L"%s (%d)");
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
        return false;
      }
      if (local_294 < 1) {
        return true;
      }
      if ((*piVar2 < local_294) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BytesRead <= RecvMessageDataRemaining",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineExecutor.cpp"
                             ,0xb1,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      *piVar2 = *piVar2 - local_294;
    } while (*piVar2 != 0);
    if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar18 = (this->RecvMessageData).Object;
    puVar19 = &pFVar18->field_0x98;
    local_298[0] = (FScriptContainerElement)0x0;
    if (((*(FScriptContainerElement **)puVar19 <= local_298) &&
        (local_298 < *(FScriptContainerElement **)puVar19 + *(int *)&pFVar18->field_0xa4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    iVar10 = *(int *)&pFVar18->field_0xa0;
    if (iVar10 == *(int *)&pFVar18->field_0xa4) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,(ForAnyElementType *)puVar19,(int *)&pFVar18->field_0xa4);
    }
    *(int *)&pFVar18->field_0xa0 = iVar10 + 1;
    *(FScriptContainerElement *)(*(longlong *)puVar19 + (longlong)iVar10) = local_298[0];
    if (((this->RecvMessageData).Object == (FArrayReader *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    _Str = *(uchar **)&((this->RecvMessageData).Object)->field_0x98;
    local_58.Data = (FScriptContainerElement *)0x0;
    if (_Str == (uchar *)0x0) {
      local_48 = 0;
      local_50 = (FScriptContainerElement *)0x0;
    }
    else {
      sVar14 = strlen((char *)_Str);
      local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar14);
      uVar1 = local_48 + 1;
      uVar20 = uVar1;
      if (uVar1 < 0x81) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar20 = 0;
          goto LAB_14dd3b28c;
        }
      }
      else {
LAB_14dd3b28c:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar20,2);
      }
      local_50 = local_158;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        local_50 = local_58.Data;
      }
      UE::Core::Private::Convert((wchar_t *)local_50,uVar1,_Str,(int)sVar14 + 1);
    }
    ::FString::FString(&local_250,(wchar_t *)local_50);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    local_260 = 0;
    FStack_258.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->RecvMessageData != (TSharedPtr<FArrayReader,1> *)&local_260) {
      (this->RecvMessageData).Object = (FArrayReader *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RecvMessageData).SharedReferenceCount,&FStack_258);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_258.ReferenceController);
    _Src.Data = local_250.Data.AllocatorInstance.Data;
    local_288.Data = (FScriptContainerElement *)0x0;
    local_27c = 0;
    iVar10 = local_250.Data.ArrayNum;
    local_280 = iVar10;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar10,0,&local_288,iVar10,&local_27c);
      memcpy(local_288.Data,_Src.Data,(longlong)iVar10 * 2);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->SocketMessageRecievedDelegate,&local_288);
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// SendHTTPRequest @ 14dd3f890

int __thiscall
UMoviePipelineExecutorBase::SendHTTPRequest
          (UMoviePipelineExecutorBase *this,FString *param_1,FString *param_2,FString *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  FHttpModule *pFVar13;
  longlong *plVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar15;
  ulong64 uVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res10 [8];
  int local_res18;
  FString *local_res20;
  UMoviePipelineExecutorBase *local_160;
  FString local_158;
  FString local_148;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  longlong *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined4 local_4c;
  
  local_res20 = param_3;
  pFVar13 = FHttpModule::Get();
  plVar14 = (longlong *)(**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,local_78);
  pTVar7 = (TReferenceControllerBase<1> *)plVar14[1];
  plVar14 = (longlong *)*plVar14;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if ((plVar14 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  pcVar8 = *(code **)(*plVar14 + 0x68);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_d8,pwVar19);
  (*pcVar8)(plVar14,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((plVar14 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  pcVar8 = *(code **)(*plVar14 + 0x60);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_c8,pwVar19);
  (*pcVar8)(plVar14,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  iStack_130 = 0;
  iVar12 = *(int *)&param_4->field_0x28;
  puVar1 = &param_4->field_0x10;
  local_118 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  if (iVar12 != 0) {
    puVar23 = *(uint **)&param_4->field_0x20;
    if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    while (uVar21 == 0) {
      lVar17 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14dd3fa40;
      uVar21 = puVar23[lVar17 + 1];
    }
    uStack_12c = -uVar21 & uVar21;
    uVar5 = (ulonglong)uStack_12c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res18 = (int)lVar17;
    iStack_11c = local_118 + -1 + local_res18;
    if (iVar12 < iStack_11c) {
      iStack_11c = iVar12;
    }
  }
LAB_14dd3fa40:
  uVar21 = *(uint *)&param_4->field_0x28;
  uStack_114 = local_4c;
  iStack_110 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  local_138 = param_4;
  uVar24 = uVar21 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_100.CurrentBitIndex = iStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  local_108 = param_4;
  iVar20 = (int)uVar21 >> 5;
  TStack_100._28_4_ = local_4c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  local_128 = puVar1;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar12 < (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  uVar6 = *(uint *)&param_4->field_0x28;
  if (uVar21 != uVar6) {
    puVar22 = *(undefined1 **)&param_4->field_0x20;
    if (*(undefined1 **)&param_4->field_0x20 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
    while (uVar21 == 0) {
      lVar17 = (longlong)iVar20;
      uVar24 = uVar24 + 0x20;
      iVar20 = iVar20 + 1;
      uVar21 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14dd3fb60;
      uVar21 = *(uint *)(puVar22 + lVar17 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar21 = (int)lVar17 + -1 + uVar24;
    if ((int)uVar6 < (int)uVar21) {
      uVar21 = uVar6;
    }
  }
LAB_14dd3fb60:
  while( true ) {
    pTVar10 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_100.CurrentBitIndex == uVar21) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar10 == param_4)) break;
    pFVar3 = (FString *)(*(longlong *)pTVar10 + (longlong)TStack_100.CurrentBitIndex * 0x28);
    ::FString::FString(&local_158,pFVar3);
    ::FString::FString(&local_148,pFVar3 + 1);
    if ((plVar14 == (longlong *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      iVar12 = (*pcVar8)();
      return iVar12;
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar18.Data = local_148.Data.AllocatorInstance.Data;
    }
    pcVar8 = *(code **)(*plVar14 + 0xb0);
    ::FString::FString(&local_a8,(wchar_t *)FVar18.Data);
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar18.Data = local_158.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_b8,(wchar_t *)FVar18.Data);
    (*pcVar8)(plVar14,&local_b8,&local_a8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if ((plVar14 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  pcVar8 = *(code **)(*plVar14 + 0x90);
  if ((local_res20->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(local_res20->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_98,pwVar19);
  (*pcVar8)(plVar14,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((plVar14 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar14 + 0xf0))(plVar14);
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  EnterCriticalSection(lpCriticalSection);
  puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1))
  ;
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMoviePipelineExecutorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_160 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMoviePipelineExecutorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_160);
    puVar15[4] = OnHttpRequestCompletedImpl;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((plVar14 == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  (**(code **)(*plVar14 + 0xe8))(plVar14);
  iVar12 = (this->OutstandingRequests).ArrayNum;
  piVar2 = &(this->OutstandingRequests).ArrayMax;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(this->OutstandingRequests).AllocatorInstance,piVar2);
  }
  (this->OutstandingRequests).ArrayNum = iVar12 + 1;
  pFVar4 = (this->OutstandingRequests).AllocatorInstance.Data + (longlong)iVar12 * 0x18;
  DefaultConstructItems<UMoviePipelineExecutorBase::FOutstandingRequest,int>(pFVar4,1);
  *(int *)pFVar4 = RequestIndex;
  RequestIndex = RequestIndex + 1;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = *(TReferenceControllerBase<1> **)(pFVar4 + 0x10);
  *(longlong **)(pFVar4 + 8) = plVar14;
  *(TReferenceControllerBase<1> **)(pFVar4 + 0x10) = pTVar7;
  local_88 = plVar14;
  pTStack_80 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  iVar12 = *(int *)pFVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar12;
}

// SendSocketMessage @ 14dd3fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMoviePipelineExecutorBase::SendSocketMessage(UMoviePipelineExecutorBase *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar3;
  size_t sVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 auStack_f8 [32];
  int local_d8;
  FName local_d4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->ExternalSocket == (FSocket *)0x0) ||
     (iVar2 = (**(code **)(this->ExternalSocket->_padding_ + 0x88))(), iVar2 != 1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    pwVar8 = L"";
    if ((param_1->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pTVar3 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_c8,pwVar7);
    sVar4 = strlen(pTVar3->Ptr);
    local_d8 = (int)sVar4;
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    bVar1 = BlockingSendSocketMessageImpl(this,(uchar *)&local_d8,4);
    iVar2 = local_d8;
    if (bVar1) {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pTVar3 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_c8,pwVar8);
      bVar1 = BlockingSendSocketMessageImpl(this,(uchar *)pTVar3->Ptr,iVar2);
      if ((void *)local_c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
      if (bVar1) {
        return true;
      }
      if (5 < (byte)LogMovieRenderPipeline._0_1_) {
        pFVar5 = ::FName::FName(&local_d4,L"WINDOWS");
        pIVar6 = ISocketSubsystem::Get(pFVar5);
        (**(code **)(pIVar6->_padding_ + 0xb8))(pIVar6);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else if (5 < (byte)LogMovieRenderPipeline._0_1_) {
      pFVar5 = ::FName::FName(&local_d4,L"WINDOWS");
      pIVar6 = ISocketSubsystem::Get(pFVar5);
      (**(code **)(pIVar6->_padding_ + 0xb8))(pIVar6);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  return false;
}

// SetStatusMessage @ 14dd407b0

void __thiscall
UMoviePipelineExecutorBase::SetStatusMessage(UMoviePipelineExecutorBase *this,FString *param_1)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  FString local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_SetStatusMessage);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if (&local_18 != param_1) {
      uVar1 = (param_1->Data).ArrayNum;
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_18.Data.ArrayMax = 0;
      local_18.Data.ArrayNum = uVar1;
      if (uVar1 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  }
  return;
}

// SetStatusMessage_Implementation @ 14dd408b0

void __thiscall
UMoviePipelineExecutorBase::SetStatusMessage_Implementation
          (UMoviePipelineExecutorBase *this,FString *param_1)

{
  ::FString::operator=(&this->StatusMessage,param_1);
  return;
}

// SetStatusProgress @ 14dd408d0

void __thiscall
UMoviePipelineExecutorBase::SetStatusProgress(UMoviePipelineExecutorBase *this,float param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  float local_res18 [4];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UMoviePipelineExecutorBase_SetStatusProgress);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dd40942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this,param_1);
  return;
}

// SetStatusProgress_Implementation @ 14dd40950

void __thiscall
UMoviePipelineExecutorBase::SetStatusProgress_Implementation
          (UMoviePipelineExecutorBase *this,float param_1)

{
  this->StatusProgress = param_1;
  return;
}

// StaticRegisterNativesUMoviePipelineExecutorBase @ 14dd45640

void __cdecl UMoviePipelineExecutorBase::StaticRegisterNativesUMoviePipelineExecutorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineExecutorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCancelAllJobs @ 14dd4e040

void __cdecl
UMoviePipelineExecutorBase::execCancelAllJobs(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dd4e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x300))();
  return;
}

// execCancelCurrentJob @ 14dd4e070

void __cdecl
UMoviePipelineExecutorBase::execCancelCurrentJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dd4e088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f8))();
  return;
}

// execConnectSocket @ 14dd4e0e0

void __cdecl
UMoviePipelineExecutorBase::execConnectSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ConnectSocket((UMoviePipelineExecutorBase *)param_1,&local_18,local_res10[0]);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execDisconnectSocket @ 14dd4e270

void __cdecl
UMoviePipelineExecutorBase::execDisconnectSocket(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(param_1 + 7) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 7) + 0x10))();
    *(undefined8 *)(param_1 + 7) = 0;
  }
  return;
}

// execExecute @ 14dd4e6f0

void __cdecl UMoviePipelineExecutorBase::execExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8);
  return;
}

// execGetStatusMessage @ 14dd51f00

void __cdecl
UMoviePipelineExecutorBase::execGetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetStatusProgress @ 14dd51f90

void __cdecl
UMoviePipelineExecutorBase::execGetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execIsRendering @ 14dd55a70

void __cdecl
UMoviePipelineExecutorBase::execIsRendering(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSocketConnected @ 14dd55ab0

void __cdecl
UMoviePipelineExecutorBase::execIsSocketConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(param_1 + 7) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 7) + 0x88))();
    if (iVar1 == 1) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOnBeginFrame @ 14dd55ba0

void __cdecl
UMoviePipelineExecutorBase::execOnBeginFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dd55bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// execOnExecutorErroredImpl @ 14dd55bd0

void __cdecl
UMoviePipelineExecutorBase::execOnExecutorErroredImpl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res20;
  FText local_38;
  ITextData *local_28;
  uint local_20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  FText::FText(&local_38);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = local_38.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2b8);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res10);
  }
  local_20 = local_38.Flags;
  (*pcVar2)(param_1,local_res20,bVar3,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execOnExecutorFinishedImpl @ 14dd55d30

void __cdecl
UMoviePipelineExecutorBase::execOnExecutorFinishedImpl
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014dd55d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execSendHTTPRequest @ 14dd56da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMoviePipelineExecutorBase::execSendHTTPRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar3
  ;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)local_88;
  if ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      param_2->MostRecentPropertyAddress !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    pTVar3 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = SendHTTPRequest((UMoviePipelineExecutorBase *)param_1,&local_98,&local_a8,&local_b8,pTVar3
                         );
  *(int *)param_3 = iVar2;
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
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
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// execSendSocketMessage @ 14dd57010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineExecutorBase::execSendSocketMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  size_t sVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  wchar_t *pwVar9;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  wchar_t *local_e0;
  undefined8 local_d8;
  FName local_d0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0 = (wchar_t *)0x0;
  local_d8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)(param_1 + 7) == (longlong *)0x0) {
LAB_14dd571f1:
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 7) + 0x88))();
    if (iVar4 != 1) goto LAB_14dd571f1;
    pwVar9 = L"";
    if ((int)local_d8 != 0) {
      pwVar9 = local_e0;
    }
    pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_c8,pwVar9);
    sVar6 = strlen(pTVar5->Ptr);
    local_e8[0] = (int)sVar6;
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    bVar2 = BlockingSendSocketMessageImpl((UMoviePipelineExecutorBase *)param_1,(uchar *)local_e8,4)
    ;
    iVar4 = local_e8[0];
    if (bVar2) {
      pwVar9 = L"";
      if ((int)local_d8 != 0) {
        pwVar9 = local_e0;
      }
      pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
               TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                         (&local_c8,pwVar9);
      bVar2 = BlockingSendSocketMessageImpl
                        ((UMoviePipelineExecutorBase *)param_1,(uchar *)pTVar5->Ptr,iVar4);
      if ((void *)local_c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
      if (bVar2) {
        uVar3 = 1;
        goto LAB_14dd5720f;
      }
      if (5 < (byte)LogMovieRenderPipeline._0_1_) {
        pFVar7 = ::FName::FName(&local_d0,L"WINDOWS");
        pIVar8 = ISocketSubsystem::Get(pFVar7);
        (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else if (5 < (byte)LogMovieRenderPipeline._0_1_) {
      pFVar7 = ::FName::FName(&local_d0,L"WINDOWS");
      pIVar8 = ISocketSubsystem::Get(pFVar7);
      (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  uVar3 = 0;
LAB_14dd5720f:
  *(undefined1 *)param_3 = uVar3;
  if (local_e0 != (wchar_t *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// execSetMoviePipelineClass @ 14dd57560

void __cdecl
UMoviePipelineExecutorBase::execSetMoviePipelineClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[6].field_0x8 = pUVar2;
  return;
}

// execSetStatusMessage @ 14dd57710

void __cdecl
UMoviePipelineExecutorBase::execSetStatusMessage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execSetStatusProgress @ 14dd577c0

void __cdecl
UMoviePipelineExecutorBase::execSetStatusProgress(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_res8[0]);
  return;
}

// UMoviePipelineExecutorBase @ 14dd6ac80

UMoviePipelineExecutorBase * __thiscall
UMoviePipelineExecutorBase::UMoviePipelineExecutorBase(UMoviePipelineExecutorBase *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineExecutorBase__6B_;
  *(undefined8 *)&this->OnExecutorFinishedDelegate = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorFinishedDelegateNative = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorErroredDelegate = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnExecutorErroredDelegateNative = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x10 = 0;
  this->bAnyJobHadFatalError = false;
  *(undefined8 *)&this->SocketMessageRecievedDelegate = 0;
  *(undefined8 *)&(this->SocketMessageRecievedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SocketMessageRecievedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HTTPResponseRecievedDelegate = 0;
  *(undefined8 *)&(this->HTTPResponseRecievedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HTTPResponseRecievedDelegate).field_0x10 = 0;
  (this->DebugWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).DebugWidgetClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ViewportInitArgs).bRenderViewport = false;
  (this->UserData).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserData).Data.ArrayNum = 0;
  (this->UserData).Data.ArrayMax = 0;
  (this->TargetPipelineClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StatusMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatusMessage).Data.ArrayNum = 0;
  (this->StatusMessage).Data.ArrayMax = 0;
  this->ExternalSocket = (FSocket *)0x0;
  (this->RecvMessageData).Object = (FArrayReader *)0x0;
  (this->RecvMessageData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->RecvMessageDataRemaining = 0;
  (this->OutstandingRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutstandingRequests).ArrayNum = 0;
  (this->OutstandingRequests).ArrayMax = 0;
  *(undefined8 *)&(this->OnExecutorFinishedDelegateNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnExecutorErroredDelegateNative).field_0x18 = 2;
  if ((this->_padding_ & 0x20) == 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UMoviePipelineExecutorBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(UMoviePipelineExecutorBase *)&stack0x00000008,
               (pmf_a27d9f61)this);
  }
  return this;
}

