// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// GetNodeIndex @ 147402fa0

int __thiscall FAnimNode_Base::GetNodeIndex(FAnimNode_Base *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->NodeData != (FAnimNodeData *)0x0) {
    return this->NodeData->NodeIndex;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NodeData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                     ,0x3c7,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return this->NodeData->NodeIndex;
}

// StaticStruct @ 147497150

UScriptStruct * __cdecl FAnimNode_Base::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar1,L"AnimNode_Base"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton;
}

// Initialize_AnyThread @ 147497190

void __thiscall
FAnimNode_Base::Initialize_AnyThread(FAnimNode_Base *this,FAnimationInitializeContext *param_1)

{
  return;
}

// CacheBones_AnyThread @ 1474971a0

void __thiscall
FAnimNode_Base::CacheBones_AnyThread(FAnimNode_Base *this,FAnimationCacheBonesContext *param_1)

{
  return;
}

// Update_AnyThread @ 1474971b0

void __thiscall
FAnimNode_Base::Update_AnyThread(FAnimNode_Base *this,FAnimationUpdateContext *param_1)

{
  return;
}

// Evaluate_AnyThread @ 1474971c0

void __thiscall FAnimNode_Base::Evaluate_AnyThread(FAnimNode_Base *this,FPoseContext *param_1)

{
  return;
}

// EvaluateComponentSpace_AnyThread @ 1474971d0

void __thiscall
FAnimNode_Base::EvaluateComponentSpace_AnyThread
          (FAnimNode_Base *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// ResetDynamics @ 1474971e0

void __thiscall FAnimNode_Base::ResetDynamics(FAnimNode_Base *this,ETeleportType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001474971e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))();
  return;
}

// OnInitializeAnimInstance @ 147497240

void __thiscall
FAnimNode_Base::OnInitializeAnimInstance
          (FAnimNode_Base *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  return;
}

// GetBecomeRelevantFunction @ 1474d69d0

FAnimNodeFunctionRef * __thiscall FAnimNode_Base::GetBecomeRelevantFunction(FAnimNode_Base *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BecomeRelevantFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BecomeRelevantFunction,"BecomeRelevantFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar5,
                           L"AnimNode_Base");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BecomeRelevantFunction,this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
    CachedId_BecomeRelevantFunction.Id = pFVar6->Id;
    CachedId_BecomeRelevantFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BecomeRelevantFunction.Index;
  FVar2 = CachedId_BecomeRelevantFunction.Id;
  if ((this->NodeData == (FAnimNodeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData(this->NodeData,&local_28,this,(UObject *)0x0);
  return pFVar7;
}

// GetEvaluateGraphExposedInputs @ 1474d95a0

FExposedValueHandler * __thiscall
FAnimNode_Base::GetEvaluateGraphExposedInputs(FAnimNode_Base *this)

{
  uint uVar1;
  FAnimNodeData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IAnimClassInterface *pIVar5;
  UScriptStruct *pUVar6;
  longlong lVar7;
  FExposedValueHandler *pFVar8;
  
  this_00 = this->NodeData;
  if (this_00 == (FAnimNodeData *)0x0) {
    return &::Default;
  }
  uVar1 = this_00->NodeIndex;
  pIVar5 = FAnimNodeData::GetAnimClassInterface(this_00);
  pcVar2 = *(code **)((longlong)*pIVar5 + 0xc0);
  pUVar6 = FAnimSubsystem_Base::StaticStruct();
  lVar7 = (*pcVar2)(pIVar5,pUVar6);
  if (lVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Subsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimClassInterface.h"
                       ,0xf2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FExposedValueHandler *)(*pcVar2)();
      return pFVar8;
    }
  }
  uVar4 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x38)) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FExposedValueHandler *)(*pcVar2)();
      return pFVar8;
    }
  }
  return (FExposedValueHandler *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar7 + 0x30));
}

// GetInitialUpdateFunction @ 1474d9f80

FAnimNodeFunctionRef * __thiscall FAnimNode_Base::GetInitialUpdateFunction(FAnimNode_Base *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_InitialUpdateFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_InitialUpdateFunction,"InitialUpdateFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar5,
                           L"AnimNode_Base");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_InitialUpdateFunction,this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
    CachedId_InitialUpdateFunction.Id = pFVar6->Id;
    CachedId_InitialUpdateFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_InitialUpdateFunction.Index;
  FVar2 = CachedId_InitialUpdateFunction.Id;
  if ((this->NodeData == (FAnimNodeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData(this->NodeData,&local_28,this,(UObject *)0x0);
  return pFVar7;
}

// GetUpdateFunction @ 1474e0490

FAnimNodeFunctionRef * __thiscall FAnimNode_Base::GetUpdateFunction(FAnimNode_Base *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_UpdateFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_UpdateFunction,"UpdateFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base,(UObject *)pUVar5,
                           L"AnimNode_Base");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_UpdateFunction,this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Base.OuterSingleton);
    CachedId_UpdateFunction.Id = pFVar6->Id;
    CachedId_UpdateFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_UpdateFunction.Index;
  FVar2 = CachedId_UpdateFunction.Id;
  if ((this->NodeData == (FAnimNodeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData(this->NodeData,&local_28,this,(UObject *)0x0);
  return pFVar7;
}

// IsLODEnabled @ 1474e9d80

bool __thiscall FAnimNode_Base::IsLODEnabled(FAnimNode_Base *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x90))();
  if ((iVar1 != -1) && (iVar1 < param_1->LODLevel)) {
    return false;
  }
  return true;
}

