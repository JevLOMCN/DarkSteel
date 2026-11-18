// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 11

// CreateCopy @ 14a6d6d20

void __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a6d6db0

void __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = this->UserObject;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a6d6e00

void __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this->UserObject;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a6dc090

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
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FEnhancedInputModule *pFVar1;
  FEnhancedInputModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FEnhancedInputModule,FEnhancedInputModule_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// ExecuteIfSafe @ 14a6dc2f0

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
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FEnhancedInputModule *pFVar1;
  FEnhancedInputModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FEnhancedInputModule,FEnhancedInputModule_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a6deb40

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14a6e0270

void * __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14a6e2b90

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a6e3fa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14a6e5bc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a6fd170

FName __thiscall
TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FEnhancedInputModule,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

