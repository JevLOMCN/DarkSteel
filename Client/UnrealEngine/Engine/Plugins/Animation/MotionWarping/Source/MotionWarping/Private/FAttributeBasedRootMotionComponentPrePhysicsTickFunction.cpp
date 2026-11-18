// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 4

// StaticStruct @ 14cf009a0

UScriptStruct * __cdecl FAttributeBasedRootMotionComponentPrePhysicsTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction
                         ,(UObject *)pUVar1,
                         L"AttributeBasedRootMotionComponentPrePhysicsTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FAttributeBasedRootMotionComponentPrePhysicsTickFunction.
         OuterSingleton;
}

// DiagnosticContext @ 14cf0b160

FName __thiscall
FAttributeBasedRootMotionComponentPrePhysicsTickFunction::DiagnosticContext
          (FAttributeBasedRootMotionComponentPrePhysicsTickFunction *this,bool param_1)

{
  UAttributeBasedRootMotionComponent *this_00;
  undefined7 in_register_00000011;
  FName this_01;
  ForAnyElementType FVar1;
  char in_R8B;
  FString local_28;
  FString local_18;
  
  this_01._1_7_ = in_register_00000011;
  this_01.ComparisonIndex.Value._0_1_ = param_1;
  if (in_R8B == '\0') {
    ::FName::FName((FName *)this_01,L"AttributeBasedRootMotionComponentPrePhysicsTick");
  }
  else {
    this_00 = this->Target;
    if ((this_00 == (UAttributeBasedRootMotionComponent *)0x0) ||
       (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    }
    ::FString::PrintfImpl(&local_18,L"AttributeBasedRootMotionComponentPrePhysicsTick/%s");
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

// DiagnosticMessage @ 14cf0b230

FString * __thiscall
FAttributeBasedRootMotionComponentPrePhysicsTickFunction::DiagnosticMessage
          (FAttributeBasedRootMotionComponentPrePhysicsTickFunction *this,
          FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = UObjectBaseUtility::GetFullName
                     ((UObjectBaseUtility *)this->Target,&local_18,(UObject *)0x0,None);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,
                      L"[UAttributeBasedRootMotionComponent::PrePhysicsTick]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 14cf0c6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAttributeBasedRootMotionComponentPrePhysicsTickFunction::ExecuteTick
          (FAttributeBasedRootMotionComponentPrePhysicsTickFunction *this,float param_1,
          ELevelTick param_2,Type param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  <lambda_1> local_res8 [4];
  
  local_res8[0].__this = this;
  FActorComponentTickFunction::
  ExecuteTickHelper<_FAttributeBasedRootMotionComponentPrePhysicsTickFunction::ExecuteTick_::__l2::<lambda_1>_>
            ((UActorComponent *)this->Target,false,param_1,param_2,local_res8);
  return;
}

