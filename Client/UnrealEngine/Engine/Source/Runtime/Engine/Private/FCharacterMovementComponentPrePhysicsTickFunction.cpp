// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14773e130

UScriptStruct * __cdecl FCharacterMovementComponentPrePhysicsTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction
                         ,(UObject *)pUVar1,L"CharacterMovementComponentPrePhysicsTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction.
         OuterSingleton;
}

// DiagnosticContext @ 14781cde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FCharacterMovementComponentPrePhysicsTickFunction::DiagnosticContext
          (FCharacterMovementComponentPrePhysicsTickFunction *this,bool param_1)

{
  UCharacterMovementComponent *this_00;
  undefined7 in_register_00000011;
  FName this_01;
  ForAnyElementType FVar1;
  char in_R8B;
  FString local_28;
  FString local_18;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ComparisonIndex.Value._0_1_ = param_1;
  if (in_R8B == '\0') {
    ::FName::FName((FName *)this_01,L"CharacterMovementComponentPrePhysicsTick");
  }
  else {
    this_00 = this->Target;
    if ((this_00 == (UCharacterMovementComponent *)0x0) || (*(longlong *)&this_00->field_0x10 == 0))
    {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    }
    ::FString::PrintfImpl(&local_18,L"CharacterMovementComponentPrePhysicsTick/%s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)this_01,(wchar_t *)FVar1.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return this_01;
    }
  }
  return this_01;
}

// DiagnosticMessage @ 14781cf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FCharacterMovementComponentPrePhysicsTickFunction::DiagnosticMessage
          (FCharacterMovementComponentPrePhysicsTickFunction *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = UObjectBaseUtility::GetFullName
                     ((UObjectBaseUtility *)this->Target,&local_18,(UObject *)0x0,None);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"[UCharacterMovementComponent::PrePhysicsTick]"
                     );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 14781fe70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCharacterMovementComponentPrePhysicsTickFunction::ExecuteTick
          (FCharacterMovementComponentPrePhysicsTickFunction *this,float param_1,ELevelTick param_2,
          Type param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  UCharacterMovementComponent *pUVar1;
  longlong *plVar2;
  char cVar3;
  UObjectBaseUtility *pUVar4;
  float fVar5;
  FName local_38;
  byte local_30;
  FName local_28;
  byte local_20;
  
  pUVar1 = this->Target;
  if ((pUVar1 != (UCharacterMovementComponent *)0x0) &&
     ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0)) {
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_28,(UObjectBaseUtility *)pUVar1);
    pUVar4 = (UObjectBaseUtility *)(**(code **)(*(longlong *)pUVar1 + 0x480))(pUVar1);
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_38,pUVar4);
    if (((pUVar1->field_0x98 & 1) != 0) &&
       ((plVar2 = *(longlong **)&pUVar1->field_0xa8, param_2 != LEVELTICK_ViewportsOnly ||
        ((plVar2 != (longlong *)0x0 &&
         (cVar3 = (**(code **)(*plVar2 + 0x520))(plVar2), cVar3 != '\0')))))) {
      fVar5 = __real_3f800000;
      if (plVar2 != (longlong *)0x0) {
        fVar5 = *(float *)(plVar2 + 0xd);
      }
      (**(code **)(*(longlong *)this->Target + 0x910))(this->Target,fVar5 * param_1,this);
    }
    if ((local_30 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_30 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_30 & 4) != 0) {
      FThreadStats::AddMessage(local_38,CycleScopeEnd);
    }
    local_30 = 0;
    if ((local_20 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_20 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_20 & 4) != 0) {
      FThreadStats::AddMessage(local_28,CycleScopeEnd);
    }
  }
  return;
}

