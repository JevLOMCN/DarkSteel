// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 17

// GetHandle @ 146e8e0f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146e8e110

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(APawn_*),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(APawn_*),FDefaultDelegateUserPolicy> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146e8e130

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UBrainComponent_*,FAIMessage_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146e8e150

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FAIRequestID,FPathFollowingResult_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146ee5990

FDelegateHandle __thiscall
TCommonDelegateInstanceState<enum_EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146ee59b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UBehaviorTreeComponent_&,enum_EBTNodeResult::Type),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146ee59d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146f56310

FDelegateHandle __thiscall
TCommonDelegateInstanceState<float___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,enum_EPathFindingMode::Type,ANavigationData_const_&,UNavigationSystemV1_&,TSharedPtr<FNavigationQueryFilter_const_,1>,UObject_const_*),FDefaultDelegateUserPolicy>
::GetHandle(void *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)((longlong)this + 0x10);
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146f56330

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy>::GetHandle
          (TCommonDelegateInstanceState<void___cdecl(FArchive_&),FDefaultDelegateUserPolicy> *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb1470

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FAISightQueryID_const_&,bool,float,UE::Math::TVector<double>_const_&,TOptional<int>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb1490

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(FPerceptionListener_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb14b0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb14d0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<void___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb14f0

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(AActor_*,float,APawn_*,UE::Math::TVector<double>_const_&,float,FName),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb1510

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(UNavLinkCustomComponent_*,UObject_*,UE::Math::TVector<double>_const_&),FDefaultDelegateUserPolicy>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb1530

FDelegateHandle __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
::GetHandle(TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,FAINamedID<FAISenseCounter>_>
            *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

// GetHandle @ 146fb1550

FDelegateHandle __thiscall
TCommonDelegateInstanceState<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>::
GetHandle(TCommonDelegateInstanceState<bool___cdecl(AController_const_&),FDefaultDelegateUserPolicy>
          *this)

{
  ulong64 *in_RDX;
  
  *in_RDX = (this->Handle).ID;
  return (FDelegateHandle)(ulong64)in_RDX;
}

