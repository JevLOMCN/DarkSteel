// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 3

// Call @ 14a032480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FRichCurveKey *pFVar3;
  UWorld *this;
  FTimerManager *this_00;
  FTimerData *pFVar4;
  float fVar5;
  FRichCurveKey FStack_38;
  
  fVar5 = *(float *)((longlong)param_1 + 0x10) + *(float *)((longlong)param_1 + 0x14);
  *(float *)((longlong)param_1 + 0x14) = fVar5;
  fVar5 = UCurveFloat::GetFloatValue(*(UCurveFloat **)((longlong)param_1 + 8),fVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x18),
             (FReadAccessScope *)&FStack_38);
  if ((*(int *)((longlong)param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)((longlong)param_1 + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,fVar5);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_38);
  pFVar3 = FRichCurve::GetLastKey
                     ((FRichCurve *)(*(longlong *)((longlong)param_1 + 8) + 0x30),&FStack_38);
  if (pFVar3->Time < *(float *)((longlong)param_1 + 0x14) ||
      pFVar3->Time == *(float *)((longlong)param_1 + 0x14)) {
    this = AActor::GetWorld(*(AActor **)param_1);
    this_00 = UWorld::GetTimerManager(this);
    lVar2 = *(longlong *)param_1;
    pFVar4 = FTimerManager::FindTimer(this_00,(FTimerHandle *)(lVar2 + 0x388));
    if (pFVar4 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)*(ulong64 *)(lVar2 + 0x388));
    }
    *(undefined8 *)(lVar2 + 0x388) = 0;
  }
  return;
}

// Call @ 14a032490

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`WN_VoxelizeImpl'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `WN_VoxelizeImpl'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14a0324a0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`WN_VoxelizeImpl'::__l2::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  `WN_VoxelizeImpl'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

