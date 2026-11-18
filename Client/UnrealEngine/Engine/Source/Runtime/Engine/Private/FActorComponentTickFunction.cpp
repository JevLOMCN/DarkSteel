// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1472757e0

UScriptStruct * __cdecl FActorComponentTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentTickFunction,(UObject *)pUVar1,
                         L"ActorComponentTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FActorComponentTickFunction.OuterSingleton;
}

// DiagnosticContext @ 14781cb70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FActorComponentTickFunction::DiagnosticContext(FActorComponentTickFunction *this,bool param_1)

{
  AActor *pAVar1;
  FString *pFVar2;
  undefined7 in_register_00000011;
  FName this_00;
  ForAnyElementType FVar3;
  char in_R8B;
  ForAnyElementType FVar4;
  FName local_res20;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  if (in_R8B != '\0') {
    pAVar1 = this->Target->OwnerPrivate;
    if (pAVar1 == (AActor *)0x0) {
      pFVar2 = ::FString::FString(&local_58,L"None");
      FVar3.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res20 = *(FName *)(pAVar1->_padding_ + 0x18);
      ::FName::ToString(&local_res20,&local_68);
      FVar3.Data = local_68.Data.AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
    }
    local_res20 = (FName)this->Target->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    local_res20 = *(FName *)(this->Target->_padding_ + 0x18);
    ::FName::ToString(&local_res20,&local_68);
    ::FString::PrintfImpl(&local_48,L"%s/%s/%s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)this_00,(wchar_t *)FVar4.Data);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (FVar3.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar3.Data);
    }
    return this_00;
  }
  *(undefined8 *)this_00 = *(undefined8 *)(this->Target->_padding_ + 0x18);
  return this_00;
}

// DiagnosticMessage @ 14781ceb0

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
FActorComponentTickFunction::DiagnosticMessage
          (FActorComponentTickFunction *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = UObjectBaseUtility::GetFullName
                     ((UObjectBaseUtility *)this->Target,&local_18,(UObject *)0x0,None);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"[TickComponent]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 14781fb80

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
FActorComponentTickFunction::ExecuteTick
          (FActorComponentTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  undefined1 uVar1;
  UActorComponent *pUVar2;
  AActor *pAVar3;
  char cVar4;
  UObjectBaseUtility *pUVar5;
  bool bVar6;
  float fVar7;
  FName local_38;
  byte local_30;
  FName local_28;
  byte local_20;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1653,"FActorComponentTickFunction::ExecuteTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
               ,0x675);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1653);
  }
  pUVar2 = this->Target;
  if ((pUVar2 != (UActorComponent *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_28,(UObjectBaseUtility *)pUVar2);
    pUVar5 = (UObjectBaseUtility *)(**(code **)(pUVar2->_padding_ + 0x480))(pUVar2);
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_38,pUVar5);
    if ((pUVar2->bRegistered != 0) &&
       (((pAVar3 = pUVar2->OwnerPrivate, param_2 != LEVELTICK_ViewportsOnly ||
         ((bool)pUVar2->bTickInEditor)) ||
        ((pAVar3 != (AActor *)0x0 &&
         (cVar4 = (**(code **)(pAVar3->_padding_ + 0x520))(pAVar3), cVar4 != '\0')))))) {
      fVar7 = __real_3f800000;
      if (pAVar3 != (AActor *)0x0) {
        fVar7 = pAVar3->CustomTimeDilation;
      }
      (**(code **)(this->Target->_padding_ + 0x410))(this->Target,fVar7 * param_1,param_2,this);
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
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

