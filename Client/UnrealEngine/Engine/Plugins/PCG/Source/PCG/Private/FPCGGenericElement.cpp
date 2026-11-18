// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// FPCGGenericElement @ 149ca28b0

FPCGGenericElement * __thiscall
FPCGGenericElement::FPCGGenericElement
          (FPCGGenericElement *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FPCGGenericElement__6B_;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = 0;
  *(longlong *)&this->Operation = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->Operation).field_0x10);
  }
  *(undefined8 *)&this->AbortOperation = 0;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = 0;
  this->bSupportBasePointDataInput = false;
  this->bCanExecuteOnlyOnMainThread = true;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->ContextAllocator = lVar1;
  *(undefined8 *)&(this->ContextAllocator).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// FPCGGenericElement @ 149ca2970

FPCGGenericElement * __thiscall
FPCGGenericElement::FPCGGenericElement
          (FPCGGenericElement *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,
          TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FPCGGenericElement__6B_;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = 0;
  *(longlong *)&this->Operation = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->Operation).field_0x10);
  }
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->AbortOperation = lVar1;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  this->bSupportBasePointDataInput = false;
  this->bCanExecuteOnlyOnMainThread = true;
  lVar1 = *(longlong *)param_3;
  *(longlong *)&this->ContextAllocator = lVar1;
  *(undefined8 *)&(this->ContextAllocator).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// FPCGGenericElement @ 149ca2a80

FPCGGenericElement * __thiscall
FPCGGenericElement::FPCGGenericElement
          (FPCGGenericElement *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,bool param_3,bool param_4,
          TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FPCGGenericElement__6B_;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = 0;
  *(longlong *)&this->Operation = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->Operation).field_0x10);
  }
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->AbortOperation = lVar1;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  this->bCanExecuteOnlyOnMainThread = param_4;
  this->bSupportBasePointDataInput = param_3;
  lVar1 = *(longlong *)param_5;
  *(longlong *)&this->ContextAllocator = lVar1;
  *(undefined8 *)&(this->ContextAllocator).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// FPCGGenericElement @ 149ca2ba0

FPCGGenericElement * __thiscall
FPCGGenericElement::FPCGGenericElement
          (FPCGGenericElement *this,TFunction<bool___cdecl(FPCGContext_*)> *param_1,
          TFunction<void___cdecl(FPCGContext_*)> *param_2,bool param_3,
          TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FPCGGenericElement__6B_;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)&(this->Operation).field_0x28 = 0;
  *(longlong *)&this->Operation = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&(this->Operation).field_0x10);
  }
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->AbortOperation = lVar1;
  *(undefined8 *)&(this->AbortOperation).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  this->bSupportBasePointDataInput = param_3;
  this->bCanExecuteOnlyOnMainThread = true;
  lVar1 = *(longlong *)param_4;
  *(longlong *)&this->ContextAllocator = lVar1;
  *(undefined8 *)&(this->ContextAllocator).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~FPCGGenericElement @ 149ca5e20

void __thiscall FPCGGenericElement::~FPCGGenericElement(FPCGGenericElement *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->ContextAllocator != 0) {
    plVar1 = *(longlong **)&(this->ContextAllocator).field_0x28;
    plVar2 = (longlong *)&(this->ContextAllocator).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AbortOperation != 0) {
    plVar1 = *(longlong **)&(this->AbortOperation).field_0x28;
    plVar2 = (longlong *)&(this->AbortOperation).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Operation != 0) {
    plVar1 = *(longlong **)&(this->Operation).field_0x28;
    plVar2 = (longlong *)&(this->Operation).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000149ca5e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// AbortInternal @ 149ca97f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGGenericElement::AbortInternal(FPCGGenericElement *this,FPCGContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  FPCGContext *local_res8;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3050,"FPCGGenericElement::Abort",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0xbea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3050);
  }
  if (*(void **)&this->AbortOperation != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AbortOperation);
    plVar1 = *(longlong **)&(this->AbortOperation).field_0x28;
    pcVar2 = *(code **)&this->AbortOperation;
    plVar4 = (longlong *)&(this->AbortOperation).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_res8);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149cb0ba0

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
FPCGGenericElement::CanExecuteOnlyOnMainThread(FPCGGenericElement *this,FPCGContext *param_1)

{
  return this->bCanExecuteOnlyOnMainThread;
}

// ExecuteInternal @ 149cc0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGGenericElement::ExecuteInternal(FPCGGenericElement *this,FPCGContext *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  FPCGContext *local_res8;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3044,"FPCGGenericElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0xbe4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3044);
  }
  if (*(void **)&this->Operation != (void *)0x0) {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->Operation);
    plVar1 = *(longlong **)&(this->Operation).field_0x28;
    pcVar2 = *(code **)&this->Operation;
    plVar5 = (longlong *)&(this->Operation).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,&local_res8);
    if (cVar3 != '\0') {
      bVar6 = true;
      goto LAB_149cc06bc;
    }
  }
  bVar6 = false;
LAB_149cc06bc:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar6;
}

// Initialize @ 149cccfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGGenericElement::Initialize(FPCGGenericElement *this,FPCGInitializeElementParams *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FPCGContext *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (*(longlong *)&this->ContextAllocator == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContextAllocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                       ,0xbdb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ContextAllocator);
  pcVar2 = *(code **)&this->ContextAllocator;
  plVar1 = *(longlong **)&(this->ContextAllocator).field_0x28;
  plVar6 = (longlong *)&(this->ContextAllocator).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FPCGContext *)(*pcVar2)(uVar5,param_1);
  FPCGContext::InitFromParams(pFVar4,param_1);
  return pFVar4;
}

// IsCacheable @ 149ccd4b0

bool __thiscall FPCGGenericElement::IsCacheable(FPCGGenericElement *this,UPCGSettings *param_1)

{
  return false;
}

// IsCancellable @ 149ccd4d0

bool __thiscall FPCGGenericElement::IsCancellable(FPCGGenericElement *this)

{
  return false;
}

// SupportsBasePointDataInputs @ 149cdda40

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
FPCGGenericElement::SupportsBasePointDataInputs(FPCGGenericElement *this,FPCGContext *param_1)

{
  return this->bSupportBasePointDataInput;
}

