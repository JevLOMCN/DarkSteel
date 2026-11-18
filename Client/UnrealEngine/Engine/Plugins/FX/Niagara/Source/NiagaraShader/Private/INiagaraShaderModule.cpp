// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 8

// StartupModule @ 148de8220

void __thiscall INiagaraShaderModule::StartupModule(INiagaraShaderModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  wchar_t *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  Singleton = this;
  pIVar3 = IPluginManager::Get();
  local_38 = 0x50656208;
  uStack_34 = 1;
  uStack_30 = 7;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_18,&local_38);
  if (*plVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))();
  local_40 = 7;
  local_58.DataPtr = (wchar_t *)*puVar5;
  local_58.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_58.Size = 0;
  }
  local_48 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_58,2);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  ::FString::FString(&local_88,L"/Plugin/FX/Niagara");
  AddShaderSourceDirectoryMapping(&local_88,&local_68);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_78,L"/Plugin/FX/Niagara/Shared/");
  AddShaderSourceSharedVirtualDirectory(&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 148de8390

void __thiscall INiagaraShaderModule::ShutdownModule(INiagaraShaderModule *this)

{
  Singleton = (INiagaraShaderModule *)0x0;
  return;
}

// ProcessShaderCompilationQueue @ 148e0baf0

void __thiscall INiagaraShaderModule::ProcessShaderCompilationQueue(INiagaraShaderModule *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_38);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnProcessQueue).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      goto LAB_148e0bb5c;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("OnProcessQueue.IsBound()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderModule.cpp"
                     ,0x26,L"Can not process shader queue.  Delegate was never set.");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_148e0bb5c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_20);
  if (*(int *)&(this->OnProcessQueue).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->OnProcessQueue).field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// RequestDefaultDataInterface @ 148e0c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

UNiagaraDataInterfaceBase * __thiscall
INiagaraShaderModule::RequestDefaultDataInterface(INiagaraShaderModule *this,FString *param_1)

{
  TDelegate<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  char cVar1;
  FModuleManager *this_01;
  FName *pFVar2;
  UNiagaraDataInterfaceBase *pUVar3;
  longlong *plVar4;
  EModuleLoadResult local_res8 [2];
  FName local_res18;
  FReadAccessScope local_38;
  
  this_00 = &this->OnRequestDefaultDataInterface;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if (((*(int *)&(this->OnRequestDefaultDataInterface).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->OnRequestDefaultDataInterface).field_0x8,
      plVar4 == (longlong *)0x0)) || (cVar1 = (**(code **)(*plVar4 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (4 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    this_01 = FModuleManager::Get();
    pFVar2 = ::FName::FName(&local_res18,L"Niagara");
    FModuleManager::LoadModuleWithFailureReason(this_01,*pFVar2,local_res8,None);
    if ((local_res8[0] != Success) && (2 < (byte)LogTemp._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
    if (((*(int *)&(this->OnRequestDefaultDataInterface).field_0x10 == 0) ||
        (plVar4 = *(longlong **)&(this->OnRequestDefaultDataInterface).field_0x8,
        plVar4 == (longlong *)0x0)) || (cVar1 = (**(code **)(*plVar4 + 0x38))(), cVar1 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if (*(int *)&(this->OnRequestDefaultDataInterface).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->OnRequestDefaultDataInterface).field_0x8;
  }
  pUVar3 = (UNiagaraDataInterfaceBase *)(**(code **)(*plVar4 + 0x60))(plVar4,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return pUVar3;
}

// ResetOnProcessShaderCompilationQueue @ 148e0c920

void __thiscall
INiagaraShaderModule::ResetOnProcessShaderCompilationQueue
          (INiagaraShaderModule *this,FDelegateHandle param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue,
             &local_28);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(this->OnProcessQueue).field_0x8, plVar1 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    puVar4 = (ulong64 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar5 = *puVar4;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (uVar5 != param_1.ID) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnProcessQueue.GetHandle() == DelegateHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderModule.cpp"
                       ,0x20,
                       L"Can only reset the process compilation queue delegate with the handle it was created with."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnProcessQueue);
  return;
}

// ResetOnRequestDefaultDataInterfaceHandler @ 148e0c9c0

void __thiscall
INiagaraShaderModule::ResetOnRequestDefaultDataInterfaceHandler(INiagaraShaderModule *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnRequestDefaultDataInterface);
  return;
}

// SetOnProcessShaderCompilationQueue @ 148e0d8d0

FDelegateHandle __thiscall
INiagaraShaderModule::SetOnProcessShaderCompilationQueue
          (INiagaraShaderModule *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FDelegateHandle FVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  this_00 = &this->OnProcessQueue;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_48);
  puVar1 = &(this->OnProcessQueue).field_0x8;
  if ((*(int *)&(this->OnProcessQueue).field_0x10 != 0) &&
     (plVar2 = *(longlong **)puVar1, plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnProcessQueue.IsBound() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderModule.cpp"
                         ,0x19,L"Shader processing queue delegate already set.");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        FVar6.ID = (*pcVar3)();
        return (FDelegateHandle)FVar6.ID;
      }
      goto LAB_148e0d95a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
LAB_148e0d95a:
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)in_R8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_30);
  if ((*(int *)&(this->OnProcessQueue).field_0x10 == 0) ||
     (plVar2 = *(longlong **)puVar1, plVar2 == (longlong *)0x0)) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x40))(plVar2,local_res8);
    uVar8 = *puVar7;
  }
  *(undefined8 *)param_1 = uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R8);
  if (*(void **)&in_R8->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_R8->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R8)
  ;
  return (FDelegateHandle)(ulong64)param_1;
}

// SetOnRequestDefaultDataInterfaceHandler @ 148e0d9e0

FDelegateHandle __thiscall
INiagaraShaderModule::SetOnRequestDefaultDataInterfaceHandler
          (INiagaraShaderModule *this,
          TDelegate<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<UNiagaraDataInterfaceBase_*___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FDelegateHandle FVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  undefined1 local_res8 [8];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  this_00 = &this->OnRequestDefaultDataInterface;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
  if ((*(int *)&(this->OnRequestDefaultDataInterface).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnRequestDefaultDataInterface).field_0x8,
     plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnRequestDefaultDataInterface.IsBound() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShaderModule.cpp"
                         ,0x2c,L"Shader OnRequestDefaultDataInterface delegate already set.");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        FVar5.ID = (*pcVar2)();
        return (FDelegateHandle)FVar5.ID;
      }
      goto LAB_148e0da6f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
LAB_148e0da6f:
  uVar7 = 0;
  if (in_R8 != (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00) {
    local_98 = (undefined1  [8])0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_50);
    if ((*(int *)&in_R8->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_98);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_80);
    if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if ((*(int *)&(this->OnRequestDefaultDataInterface).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnRequestDefaultDataInterface).field_0x8,
     plVar1 != (longlong *)0x0)) {
    puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar7 = *puVar6;
  }
  *(undefined8 *)param_1 = uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R8);
  if (*(void **)&in_R8->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_R8->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R8)
  ;
  return (FDelegateHandle)(ulong64)param_1;
}

