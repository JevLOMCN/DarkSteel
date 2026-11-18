// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 17

// StaticStruct @ 1463d56e0

UScriptStruct * __cdecl FAnimNode_Mirror::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar1,
                         L"AnimNode_Mirror");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton;
}

// FAnimNode_Mirror @ 146404390

FAnimNode_Mirror * __thiscall FAnimNode_Mirror::FAnimNode_Mirror(FAnimNode_Mirror *this)

{
  *(undefined4 *)&this->field_0x18 = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  this->field_0x1c = 0;
  *(undefined2 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7FAnimNode_Mirror__6B_;
  return this;
}

// ~FAnimNode_Mirror @ 146408ab0

void __thiscall FAnimNode_Mirror::~FAnimNode_Mirror(FAnimNode_Mirror *this)

{
  *(undefined ***)this = &___7FAnimNode_MirrorBase__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// GetAttributeMirroring @ 1464479e0

bool __thiscall FAnimNode_Mirror::GetAttributeMirroring(FAnimNode_Mirror *this)

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
  
  if (CachedId_bAttributeMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bAttributeMirroring,"bAttributeMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bAttributeMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bAttributeMirroring.Id = pFVar7->Id;
    CachedId_bAttributeMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bAttributeMirroring.Index;
  FVar2 = CachedId_bAttributeMirroring.Id;
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

// GetBlendTimeOnMirrorStateChange @ 146447da0

float __thiscall FAnimNode_Mirror::GetBlendTimeOnMirrorStateChange(FAnimNode_Mirror *this)

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
  
  if (CachedId_BlendTime.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendTime,"BlendTime");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar5,
                           L"AnimNode_Mirror");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_28,AnimName_BlendTime,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_BlendTime.Id = pFVar6->Id;
    CachedId_BlendTime.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendTime.Index;
  FVar2 = CachedId_BlendTime.Id;
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

// GetBoneMirroring @ 146448400

bool __thiscall FAnimNode_Mirror::GetBoneMirroring(FAnimNode_Mirror *this)

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
  
  if (CachedId_bBoneMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bBoneMirroring,"bBoneMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bBoneMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bBoneMirroring.Id = pFVar7->Id;
    CachedId_bBoneMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bBoneMirroring.Index;
  FVar2 = CachedId_bBoneMirroring.Id;
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

// GetCurveMirroring @ 146449680

bool __thiscall FAnimNode_Mirror::GetCurveMirroring(FAnimNode_Mirror *this)

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
  
  if (CachedId_bCurveMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bCurveMirroring,"bCurveMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bCurveMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bCurveMirroring.Id = pFVar7->Id;
    CachedId_bCurveMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bCurveMirroring.Index;
  FVar2 = CachedId_bCurveMirroring.Id;
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

// GetMirror @ 14644b950

bool __thiscall FAnimNode_Mirror::GetMirror(FAnimNode_Mirror *this)

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
  
  if (CachedId_bMirror.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bMirror,"bMirror");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bMirror,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bMirror.Id = pFVar7->Id;
    CachedId_bMirror.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bMirror.Index;
  FVar2 = CachedId_bMirror.Id;
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

// GetMirrorDataTable @ 14644bb10

UMirrorDataTable * __thiscall FAnimNode_Mirror::GetMirrorDataTable(FAnimNode_Mirror *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UMirrorDataTable *pUVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_MirrorDataTable.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_MirrorDataTable,"MirrorDataTable");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar5,
                           L"AnimNode_Mirror");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_MirrorDataTable,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_MirrorDataTable.Id = pFVar6->Id;
    CachedId_MirrorDataTable.Index = pFVar6->Index;
  }
  iVar3 = CachedId_MirrorDataTable.Index;
  FVar2 = CachedId_MirrorDataTable.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UMirrorDataTable *)(*pcVar1)();
    return pUVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UMirrorDataTable *)*puVar8;
}

// GetResetChildOnMirrorStateChange @ 14644eaa0

bool __thiscall FAnimNode_Mirror::GetResetChildOnMirrorStateChange(FAnimNode_Mirror *this)

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
  
  if (CachedId_bResetChild.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetChild,"bResetChild");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bResetChild,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bResetChild.Id = pFVar7->Id;
    CachedId_bResetChild.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bResetChild.Index;
  FVar2 = CachedId_bResetChild.Id;
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

// SetAttributeMirroring @ 146467c00

bool __thiscall FAnimNode_Mirror::SetAttributeMirroring(FAnimNode_Mirror *this,bool param_1)

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
  
  if (CachedId_bAttributeMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bAttributeMirroring,"bAttributeMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bAttributeMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bAttributeMirroring.Id = pFVar7->Id;
    CachedId_bAttributeMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bAttributeMirroring.Index;
  FVar2 = CachedId_bAttributeMirroring.Id;
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

// SetBlendTimeOnMirrorStateChange @ 1464680c0

bool __thiscall
FAnimNode_Mirror::SetBlendTimeOnMirrorStateChange(FAnimNode_Mirror *this,float param_1)

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
  
  if (CachedId_BlendTime.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendTime,"BlendTime");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (local_38,AnimName_BlendTime,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_BlendTime.Id = pFVar7->Id;
    CachedId_BlendTime.Index = pFVar7->Index;
  }
  iVar3 = CachedId_BlendTime.Index;
  FVar2 = CachedId_BlendTime.Id;
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

// SetBoneMirroring @ 146468330

bool __thiscall FAnimNode_Mirror::SetBoneMirroring(FAnimNode_Mirror *this,bool param_1)

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
  
  if (CachedId_bBoneMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bBoneMirroring,"bBoneMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bBoneMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bBoneMirroring.Id = pFVar7->Id;
    CachedId_bBoneMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bBoneMirroring.Index;
  FVar2 = CachedId_bBoneMirroring.Id;
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

// SetCurveMirroring @ 146468a10

bool __thiscall FAnimNode_Mirror::SetCurveMirroring(FAnimNode_Mirror *this,bool param_1)

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
  
  if (CachedId_bCurveMirroring.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bCurveMirroring,"bCurveMirroring");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bCurveMirroring,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bCurveMirroring.Id = pFVar7->Id;
    CachedId_bCurveMirroring.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bCurveMirroring.Index;
  FVar2 = CachedId_bCurveMirroring.Id;
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

// SetMirror @ 1464697e0

bool __thiscall FAnimNode_Mirror::SetMirror(FAnimNode_Mirror *this,bool param_1)

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
  
  if (CachedId_bMirror.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bMirror,"bMirror");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bMirror,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bMirror.Id = pFVar7->Id;
    CachedId_bMirror.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bMirror.Index;
  FVar2 = CachedId_bMirror.Id;
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

// SetMirrorDataTable @ 1464699e0

bool __thiscall
FAnimNode_Mirror::SetMirrorDataTable(FAnimNode_Mirror *this,UMirrorDataTable *param_1)

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
  
  if (CachedId_MirrorDataTable.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_MirrorDataTable,"MirrorDataTable");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_MirrorDataTable,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_MirrorDataTable.Id = pFVar7->Id;
    CachedId_MirrorDataTable.Index = pFVar7->Index;
  }
  iVar3 = CachedId_MirrorDataTable.Index;
  FVar2 = CachedId_MirrorDataTable.Id;
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
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMirrorDataTable *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  *puVar8 = param_1;
  return true;
}

// SetResetChildOnMirrorStateChange @ 14646a9b0

bool __thiscall
FAnimNode_Mirror::SetResetChildOnMirrorStateChange(FAnimNode_Mirror *this,bool param_1)

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
  
  if (CachedId_bResetChild.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bResetChild,"bResetChild");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror,(UObject *)pUVar6,
                           L"AnimNode_Mirror");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bResetChild,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Mirror.OuterSingleton);
    CachedId_bResetChild.Id = pFVar7->Id;
    CachedId_bResetChild.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bResetChild.Index;
  FVar2 = CachedId_bResetChild.Id;
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

