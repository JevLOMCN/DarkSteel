// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147275760

UScriptStruct * __cdecl FActorTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorTickFunction.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorTickFunction,(UObject *)pUVar1,
                         L"ActorTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FActorTickFunction.OuterSingleton;
}

// DiagnosticContext @ 14738e3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall FActorTickFunction::DiagnosticContext(FActorTickFunction *this,bool param_1)

{
  UClass *pUVar1;
  undefined7 in_register_00000011;
  FName this_00;
  ForAnyElementType FVar2;
  char in_R8B;
  FName local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  if (in_R8B == '\0') {
    pUVar1 = GetParentNativeClass((UClass *)this->Target->_padding_);
    *(longlong *)this_00 = pUVar1->_padding_;
  }
  else {
    local_res20 = *(FName *)(this->Target->_padding_ + 0x18);
    ::FName::ToString(&local_res20,&local_28);
    pUVar1 = GetParentNativeClass((UClass *)this->Target->_padding_);
    local_res20 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res20,&local_38);
    ::FString::PrintfImpl(&local_18,L"%s/%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)this_00,(wchar_t *)FVar2.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return this_00;
    }
  }
  return this_00;
}

// DiagnosticMessage @ 14738e4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FActorTickFunction::DiagnosticMessage(FActorTickFunction *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = UObjectBaseUtility::GetFullName
                     ((UObjectBaseUtility *)this->Target,&local_18,(UObject *)0x0,None);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"[TickActor]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 147392ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FActorTickFunction::ExecuteTick
          (FActorTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  AActor *pAVar1;
  char cVar2;
  undefined8 in_RDX;
  undefined4 in_register_00000084;
  undefined4 in_register_0000008c;
  FName local_28;
  byte local_20;
  
  if ((this->Target != (AActor *)0x0) && (((uint)this->Target->_padding_ >> 0x1e & 1) == 0)) {
    if ((param_2 == LEVELTICK_ViewportsOnly) &&
       (cVar2 = (**(code **)(this->Target->_padding_ + 0x520))
                          (this->Target,in_RDX,CONCAT44(in_register_00000084,param_2),
                           CONCAT44(in_register_0000008c,param_3)), cVar2 == '\0')) {
      return;
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_28,(UObjectBaseUtility *)this->Target);
    pAVar1 = this->Target;
    (**(code **)(pAVar1->_padding_ + 0x4b0))
              (pAVar1,param_1 * pAVar1->CustomTimeDilation,param_2,this);
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

