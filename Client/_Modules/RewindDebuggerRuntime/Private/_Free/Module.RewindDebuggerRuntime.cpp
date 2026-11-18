// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 12

// `dynamic_initializer_for_'LogRewindDebuggerRuntime'' @ 1413b96c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRewindDebuggerRuntime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRewindDebuggerRuntime,L"LogRewindDebuggerRuntime",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRewindDebuggerRuntime__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRewindDebuggerRuntime'' @ 1413b9700

void __cdecl _dynamic_initializer_for__ModuleRegistrantRewindDebuggerRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RewindDebuggerRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RewindDebuggerRuntime",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FRewindDebuggerRuntimeModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14cd8b280

void * __thiscall
RewindDebugger::FRewindDebuggerAnimationRuntime::_scalar_deleting_destructor_
          (FRewindDebuggerAnimationRuntime *this,uint param_1)

{
  *this = (FRewindDebuggerAnimationRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd8b990

void * __thiscall
FRewindDebuggerRuntimeModule::_scalar_deleting_destructor_
          (FRewindDebuggerRuntimeModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->AnimationExtension =
       (FRewindDebuggerAnimationRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  pFVar1 = (this->ConsoleObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 14cd8b9f0

void __cdecl
`RewindDebugger::DisableAllTraceChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  FString local_18;
  
  if (param_2) {
    ::FString::FString(&local_18,param_1);
    UE::Trace::ToggleChannel((wchar_t *)local_18.Data.AllocatorInstance.Data,false);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CastChecked<AController,AActor> @ 14cd8ba60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AController * __cdecl CastChecked<AController,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AController>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_AController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AController *)param_1;
  }
  pFVar3 = GetTypeName<AController>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// `scalar_deleting_destructor' @ 14cd8bfa0

void * __thiscall
TBaseRawMethodDelegateInstance<0,RewindDebugger::FRewindDebuggerRuntime,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,RewindDebugger::FRewindDebuggerRuntime,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd8bfd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,RewindDebugger::FRewindDebuggerRuntime,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,RewindDebugger::FRewindDebuggerRuntime,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd8c000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVIRewindDebuggerRuntimeExtension___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// IterateExtensions @ 14cd8c640

void __cdecl
RewindDebugger::IterateExtensions
          (TFunction<void___cdecl(IRewindDebuggerRuntimeExtension_*)> *param_1)

{
  code *pcVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong local_38 [2];
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,IRewindDebuggerRuntimeExtension::ModularFeatureName);
  uVar8 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                        (pIVar3,IRewindDebuggerRuntimeExtension::ModularFeatureName,uVar8);
      local_38[0] = lVar4 - 8;
      if (lVar4 == 0) {
        local_38[0] = 0;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar6 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar6 = (longlong *)&param_1->field_0x10;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar5,local_38);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar2);
  }
  if (*(longlong *)param_1 != 0) {
    plVar6 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return;
}

// IMPLEMENT_MODULE_RewindDebuggerRuntime @ 14cd8cfc0

void __cdecl IMPLEMENT_MODULE_RewindDebuggerRuntime(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogRewindDebuggerRuntime'' @ 150453c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRewindDebuggerRuntime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRewindDebuggerRuntime);
  return;
}

