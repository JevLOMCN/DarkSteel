// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// StaticStruct @ 14d5296b0

UScriptStruct * __cdecl FStateTreeDebugTextTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDebugTextTask,(UObject *)pUVar1,
                         L"StateTreeDebugTextTask");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTask.OuterSingleton;
}

// FStateTreeDebugTextTask @ 14d52c530

FStateTreeDebugTextTask * __thiscall
FStateTreeDebugTextTask::FStateTreeDebugTextTask(FStateTreeDebugTextTask *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined2 *)&this->_padding_ = 0x2db;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FStateTreeDebugTextTask__6B_;
  (this->TextColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->FontScale = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Offset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Offset).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xe5;
  (this->Offset).field0_0x0._s_0.Z = (double)uVar1;
  this->bEnabled = true;
  return this;
}

// EnterState @ 14d52ebb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EStateTreeRunStatus __thiscall
FStateTreeDebugTextTask::EnterState
          (FStateTreeDebugTextTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  AActor *this_00;
  float fVar1;
  FStateTreeDebugTextTaskInstanceData *pFVar2;
  UWorld *pUVar3;
  
  if (this->bEnabled != false) {
    pFVar2 = FStateTreeExecutionContext::GetInstanceData<FStateTreeDebugTextTask>(param_1,this);
    pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1->_padding_ + 0x180))();
    if ((pUVar3 == (UWorld *)0x0) &&
       ((this_00 = (pFVar2->ReferenceActor).field0_0x0.DebugPtr, this_00 == (AActor *)0x0 ||
        (pUVar3 = AActor::GetWorld(this_00), pUVar3 == (UWorld *)0x0)))) {
      return Failed;
    }
    fVar1 = __real_bf800000;
    if (1 < (this->Text).Data.ArrayNum) {
      DrawDebugString(pUVar3,&this->Offset,&this->Text,(pFVar2->ReferenceActor).field0_0x0.DebugPtr,
                      &this->TextColor,__real_bf800000,true,this->FontScale);
    }
    if (1 < (pFVar2->BindableText).Data.ArrayNum) {
      DrawDebugString(pUVar3,&this->Offset,&pFVar2->BindableText,
                      (pFVar2->ReferenceActor).field0_0x0.DebugPtr,&this->TextColor,fVar1,true,
                      this->FontScale);
    }
  }
  return Running;
}

// ExitState @ 14d52f5a0

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
FStateTreeDebugTextTask::ExitState
          (FStateTreeDebugTextTask *this,FStateTreeExecutionContext *param_1,
          FStateTreeTransitionResult *param_2)

{
  AActor *pAVar1;
  FStateTreeDebugTextTaskInstanceData *pFVar2;
  UWorld *pUVar3;
  FString local_18;
  
  if (this->bEnabled != false) {
    pFVar2 = FStateTreeExecutionContext::GetInstanceData<FStateTreeDebugTextTask>(param_1,this);
    pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1->_padding_ + 0x180))();
    if ((pUVar3 != (UWorld *)0x0) ||
       ((pAVar1 = (pFVar2->ReferenceActor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0 &&
        (pUVar3 = AActor::GetWorld(pAVar1), pUVar3 != (UWorld *)0x0)))) {
      pAVar1 = (pFVar2->ReferenceActor).field0_0x0.DebugPtr;
      ::FString::FString(&local_18,"");
      DrawDebugString(pUVar3,&this->Offset,&local_18,pAVar1,&FColor::White,__real_bf800000,false,
                      __real_3f800000);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetInstanceDataType @ 14d530460

UStruct * __thiscall FStateTreeDebugTextTask::GetInstanceDataType(FStateTreeDebugTextTask *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData,
                         (UObject *)pUVar1,L"StateTreeDebugTextTaskInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton;
}

