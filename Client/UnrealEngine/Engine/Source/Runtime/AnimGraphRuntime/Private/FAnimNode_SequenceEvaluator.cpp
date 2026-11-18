// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 22

// StaticStruct @ 1463dd700

UScriptStruct * __cdecl FAnimNode_SequenceEvaluator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar1,
                         L"AnimNode_SequenceEvaluator");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton;
}

// SetSequence @ 1463dd740

bool __thiscall
FAnimNode_SequenceEvaluator::SetSequence
          (FAnimNode_SequenceEvaluator *this,UAnimSequenceBase *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Sequence.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Sequence,"Sequence");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Sequence,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_Sequence.Id = pFVar7->Id;
    CachedId_Sequence.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Sequence.Index;
  FVar2 = CachedId_Sequence.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (puVar8 == (undefined8 *)0x0) {
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *puVar8 = param_1;
  return true;
}

// GetSequence @ 1463dd8d0

UAnimSequenceBase * __thiscall
FAnimNode_SequenceEvaluator::GetSequence(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UAnimSequenceBase *pUVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Sequence.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Sequence,"Sequence");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar5,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Sequence,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_Sequence.Id = pFVar6->Id;
    CachedId_Sequence.Index = pFVar6->Index;
  }
  iVar3 = CachedId_Sequence.Index;
  FVar2 = CachedId_Sequence.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UAnimSequenceBase *)(*pcVar1)();
    return pUVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UAnimSequenceBase *)*puVar8;
}

// GetExplicitTime @ 1463dda20

float __thiscall FAnimNode_SequenceEvaluator::GetExplicitTime(FAnimNode_SequenceEvaluator *this)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  char *pcVar7;
  longlong *plVar8;
  int *piVar9;
  float *pfVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 local_res18 [16];
  FNodeDataId local_98;
  FNodeDataId local_88;
  FNodeDataId local_78;
  FNodeDataId local_68;
  FNodeDataId local_5c;
  FNodeDataId local_50 [3];
  
  uVar11 = (ulonglong)_tls_index;
  if (CachedId_bUseExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bUseExplicitFrame,"bUseExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar5,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_68,AnimName_bUseExplicitFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bUseExplicitFrame.Id = pFVar6->Id;
    CachedId_bUseExplicitFrame.Index = pFVar6->Index;
  }
  iVar1 = CachedId_bUseExplicitFrame.Index;
  FVar3 = CachedId_bUseExplicitFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar12 = (float)(*pcVar2)();
    return fVar12;
  }
  local_98.Id = FVar3;
  local_98.Index = iVar1;
  pcVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_98,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (*pcVar7 == '\0') {
    if (CachedId_ExplicitTime.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_ExplicitTime,"ExplicitTime");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar5
                             ,L"AnimNode_SequenceEvaluator");
      }
      pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                         (local_50,AnimName_ExplicitTime,(FAnimNode_Base *)this,
                          Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.
                          OuterSingleton);
      CachedId_ExplicitTime.Id = pFVar6->Id;
      CachedId_ExplicitTime.Index = pFVar6->Index;
    }
    iVar1 = CachedId_ExplicitTime.Index;
    FVar3 = CachedId_ExplicitTime.Id;
    if ((*(longlong *)&this->field_0x8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar12 = (float)(*pcVar2)();
      return fVar12;
    }
    local_78.Id = FVar3;
    local_78.Index = iVar1;
    pfVar10 = FAnimNodeData::GetData
                        (*(FAnimNodeData **)&this->field_0x8,&local_78,(FAnimNode_Base *)this,
                         (UObject *)0x0);
    fVar12 = *pfVar10;
  }
  else {
    plVar8 = (longlong *)(**(code **)(*(longlong *)this + 0x170))(this);
    if (plVar8 == (longlong *)0x0) {
      fVar12 = 0.0;
    }
    else {
      if (CachedId_ExplicitFrame.Index == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
             ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&AnimName_ExplicitFrame,"ExplicitFrame");
          _Init_thread_footer(&::_TSS1);
        }
        if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
          Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,
                               (UObject *)pUVar5,L"AnimNode_SequenceEvaluator");
        }
        pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                           (&local_5c,AnimName_ExplicitFrame,(FAnimNode_Base *)this,
                            Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.
                            OuterSingleton);
        CachedId_ExplicitFrame.Id = pFVar6->Id;
        CachedId_ExplicitFrame.Index = pFVar6->Index;
      }
      iVar1 = CachedId_ExplicitFrame.Index;
      FVar3 = CachedId_ExplicitFrame.Id;
      if ((*(longlong *)&this->field_0x8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NodeData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                             ,0x3e1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar12 = (float)(*pcVar2)();
        return fVar12;
      }
      local_88.Id = FVar3;
      local_88.Index = iVar1;
      piVar9 = FAnimNodeData::GetData
                         (*(FAnimNodeData **)&this->field_0x8,&local_88,(FAnimNode_Base *)this,
                          (UObject *)0x0);
      iVar1 = *piVar9;
      piVar9 = (int *)(**(code **)(*plVar8 + 0x318))(plVar8,local_res18);
      fVar12 = ((float)piVar9[1] * 0.0 + (float)((longlong)piVar9[1] * (longlong)iVar1)) /
               (float)*piVar9;
    }
  }
  return fVar12;
}

// SetExplicitTime @ 1463dde50

bool __thiscall
FAnimNode_SequenceEvaluator::SetExplicitTime(FAnimNode_SequenceEvaluator *this,float param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  float *pfVar8;
  FNodeDataId local_48;
  FNodeDataId local_38 [4];
  
  if (CachedId_ExplicitTime.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ExplicitTime,"ExplicitTime");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_38,AnimName_ExplicitTime,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ExplicitTime.Id = pFVar7->Id;
    CachedId_ExplicitTime.Index = pFVar7->Index;
  }
  iVar3 = CachedId_ExplicitTime.Index;
  FVar2 = CachedId_ExplicitTime.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_48.Id = FVar2;
  local_48.Index = iVar3;
  pfVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_48,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pfVar8 != (float *)0x0) {
    *pfVar8 = param_1;
  }
  return pfVar8 != (float *)0x0;
}

// SetShouldLoop @ 1463ddfc0

bool __thiscall
FAnimNode_SequenceEvaluator::SetShouldLoop(FAnimNode_SequenceEvaluator *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bShouldLoop.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bShouldLoop,"bShouldLoop");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bShouldLoop,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bShouldLoop.Id = pFVar7->Id;
    CachedId_bShouldLoop.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bShouldLoop.Index;
  FVar2 = CachedId_bShouldLoop.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// GetTeleportToExplicitTime @ 1463de140

bool __thiscall
FAnimNode_SequenceEvaluator::GetTeleportToExplicitTime(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bTeleportToExplicitTime.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bTeleportToExplicitTime,"bTeleportToExplicitTime");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bTeleportToExplicitTime,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bTeleportToExplicitTime.Id = pFVar7->Id;
    CachedId_bTeleportToExplicitTime.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bTeleportToExplicitTime.Index;
  FVar2 = CachedId_bTeleportToExplicitTime.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetReinitializationBehavior @ 1463de290

TEnumAsByte<ESequenceEvalReinit::Type> __thiscall
FAnimNode_SequenceEvaluator::GetReinitializationBehavior(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uchar uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  undefined1 *in_RDX;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_ReinitializationBehavior.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ReinitializationBehavior,"ReinitializationBehavior");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ReinitializationBehavior,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ReinitializationBehavior.Id = pFVar7->Id;
    CachedId_ReinitializationBehavior.Index = pFVar7->Index;
  }
  iVar3 = CachedId_ReinitializationBehavior.Index;
  FVar2 = CachedId_ReinitializationBehavior.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (TEnumAsByte<ESequenceEvalReinit::Type>)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *in_RDX = *puVar8;
  return (TEnumAsByte<ESequenceEvalReinit::Type>)(uchar)in_RDX;
}

// GetStartPosition @ 1463de400

float __thiscall FAnimNode_SequenceEvaluator::GetStartPosition(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  float *pfVar7;
  float fVar8;
  FNodeDataId local_38;
  FNodeDataId local_28 [2];
  
  if (CachedId_StartPosition.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StartPosition,"StartPosition");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar5,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_StartPosition,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_StartPosition.Id = pFVar6->Id;
    CachedId_StartPosition.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StartPosition.Index;
  FVar2 = CachedId_StartPosition.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    fVar8 = (float)(*pcVar1)();
    return fVar8;
  }
  local_38.Id = FVar2;
  local_38.Index = iVar3;
  pfVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_38,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pfVar7;
}

// GetGroupName @ 1463de560

FName __thiscall FAnimNode_SequenceEvaluator::GetGroupName(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNodeDataId *pFVar5;
  FName FVar6;
  undefined8 *puVar7;
  FName in_RDX;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar4,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_GroupName.Id = pFVar5->Id;
    CachedId_GroupName.Index = pFVar5->Index;
  }
  iVar2 = CachedId_GroupName.Index;
  FVar6 = CachedId_GroupName.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6 = (FName)(*pcVar1)();
    return FVar6;
  }
  local_28.Id = FVar6;
  local_28.Index = iVar2;
  puVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *(undefined8 *)in_RDX = *puVar7;
  return in_RDX;
}

// GetGroupRole @ 1463de6d0

Type __thiscall FAnimNode_SequenceEvaluator::GetGroupRole(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  Type TVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  byte *pbVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    TVar5 = (*pcVar1)();
    return TVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pbVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (Type)*pbVar8;
}

// GetGroupMethod @ 1463de820

EAnimSyncMethod __thiscall
FAnimNode_SequenceEvaluator::GetGroupMethod(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  EAnimSyncMethod EVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *pEVar8;
}

// GetIgnoreForRelevancyTest @ 1463de970

bool __thiscall
FAnimNode_SequenceEvaluator::GetIgnoreForRelevancyTest(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// IsLooping @ 1463deac0

bool __thiscall FAnimNode_SequenceEvaluator::IsLooping(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bShouldLoop.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bShouldLoop,"bShouldLoop");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bShouldLoop,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bShouldLoop.Id = pFVar7->Id;
    CachedId_bShouldLoop.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bShouldLoop.Index;
  FVar2 = CachedId_bShouldLoop.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// SetGroupName @ 1463dec10

bool __thiscall
FAnimNode_SequenceEvaluator::SetGroupName(FAnimNode_SequenceEvaluator *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  FName *pFVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupName.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupName,"GroupName");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupName,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_GroupName.Id = pFVar7->Id;
    CachedId_GroupName.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupName.Index;
  FVar2 = CachedId_GroupName.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pFVar8 == (FName *)0x0) {
    return false;
  }
  *pFVar8 = param_1;
  return true;
}

// SetGroupRole @ 1463ded90

bool __thiscall
FAnimNode_SequenceEvaluator::SetGroupRole(FAnimNode_SequenceEvaluator *this,Type param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_GroupRole.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_GroupRole,"GroupRole");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_GroupRole,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_GroupRole.Id = pFVar7->Id;
    CachedId_GroupRole.Index = pFVar7->Index;
  }
  iVar3 = CachedId_GroupRole.Index;
  FVar2 = CachedId_GroupRole.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (puVar8 == (undefined1 *)0x0) {
    return false;
  }
  *puVar8 = (char)param_1;
  return true;
}

// SetGroupMethod @ 1463def10

bool __thiscall
FAnimNode_SequenceEvaluator::SetGroupMethod
          (FAnimNode_SequenceEvaluator *this,EAnimSyncMethod param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  EAnimSyncMethod *pEVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Method.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Method,"Method");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Method,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_Method.Id = pFVar7->Id;
    CachedId_Method.Index = pFVar7->Index;
  }
  iVar3 = CachedId_Method.Index;
  FVar2 = CachedId_Method.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pEVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pEVar8 == (EAnimSyncMethod *)0x0) {
    return false;
  }
  *pEVar8 = param_1;
  return true;
}

// SetIgnoreForRelevancyTest @ 1463df090

bool __thiscall
FAnimNode_SequenceEvaluator::SetIgnoreForRelevancyTest
          (FAnimNode_SequenceEvaluator *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bIgnoreForRelevancyTest.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bIgnoreForRelevancyTest,"bIgnoreForRelevancyTest");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bIgnoreForRelevancyTest,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bIgnoreForRelevancyTest.Id = pFVar7->Id;
    CachedId_bIgnoreForRelevancyTest.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bIgnoreForRelevancyTest.Index;
  FVar2 = CachedId_bIgnoreForRelevancyTest.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// GetExplicitFrame @ 14644a100

int __thiscall FAnimNode_SequenceEvaluator::GetExplicitFrame(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  int *piVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_ExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ExplicitFrame,"ExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar5,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ExplicitFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ExplicitFrame.Id = pFVar6->Id;
    CachedId_ExplicitFrame.Index = pFVar6->Index;
  }
  iVar4 = CachedId_ExplicitFrame.Index;
  FVar2 = CachedId_ExplicitFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar4;
  piVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *piVar7;
}

// SetExplicitFrame @ 146468bb0

bool __thiscall
FAnimNode_SequenceEvaluator::SetExplicitFrame(FAnimNode_SequenceEvaluator *this,int param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  int *piVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_ExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ExplicitFrame,"ExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ExplicitFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ExplicitFrame.Id = pFVar7->Id;
    CachedId_ExplicitFrame.Index = pFVar7->Index;
  }
  iVar3 = CachedId_ExplicitFrame.Index;
  FVar2 = CachedId_ExplicitFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  piVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (piVar8 == (int *)0x0) {
    return false;
  }
  *piVar8 = param_1;
  return true;
}

// SetShouldUseExplicitFrame @ 14646b040

bool __thiscall
FAnimNode_SequenceEvaluator::SetShouldUseExplicitFrame
          (FAnimNode_SequenceEvaluator *this,bool param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  void *pvVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bUseExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bUseExplicitFrame,"bUseExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bUseExplicitFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bUseExplicitFrame.Id = pFVar7->Id;
    CachedId_bUseExplicitFrame.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bUseExplicitFrame.Index;
  FVar2 = CachedId_bUseExplicitFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pvVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if (pvVar8 == (void *)0x0) {
    return false;
  }
  *(bool *)pvVar8 = param_1;
  return true;
}

// ShouldUseExplicitFrame @ 14646b910

bool __thiscall
FAnimNode_SequenceEvaluator::ShouldUseExplicitFrame(FAnimNode_SequenceEvaluator *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bUseExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bUseExplicitFrame,"bUseExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bUseExplicitFrame,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_bUseExplicitFrame.Id = pFVar7->Id;
    CachedId_bUseExplicitFrame.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bUseExplicitFrame.Index;
  FVar2 = CachedId_bUseExplicitFrame.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

