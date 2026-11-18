// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 147496230

UScriptStruct * __cdecl FAnimNode_Root::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar1,L"AnimNode_Root"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton;
}

// Initialize_AnyThread @ 147496270

void __thiscall
FAnimNode_Root::Initialize_AnyThread(FAnimNode_Root *this,FAnimationInitializeContext *param_1)

{
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Result,param_1);
  return;
}

// CacheBones_AnyThread @ 147496280

void __thiscall
FAnimNode_Root::CacheBones_AnyThread(FAnimNode_Root *this,FAnimationCacheBonesContext *param_1)

{
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Result,param_1);
  return;
}

// Update_AnyThread @ 147496290

void __thiscall
FAnimNode_Root::Update_AnyThread(FAnimNode_Root *this,FAnimationUpdateContext *param_1)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FName *pFVar7;
  FName local_res10;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_Name.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Name,"Name");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar5,
                           L"AnimNode_Root");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Name,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton);
    CachedId_Name.Id = pFVar6->Id;
    CachedId_Name.Index = pFVar6->Index;
  }
  iVar3 = CachedId_Name.Index;
  FVar2 = CachedId_Name.Id;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  local_res10 = *pFVar7;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             &local_res10);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Result,param_1);
  return;
}

// Evaluate_AnyThread @ 147496420

void __thiscall FAnimNode_Root::Evaluate_AnyThread(FAnimNode_Root *this,FPoseContext *param_1)

{
  FPoseLink::Evaluate(&this->Result,param_1);
  return;
}

// GatherDebugData @ 147496430

void __thiscall FAnimNode_Root::GatherDebugData(FAnimNode_Root *this,FNodeDebugData *param_1)

{
  longlong *plVar1;
  ForAnyElementType _Src;
  UPackage *pUVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar2,L"AnimNode_Root"
                        );
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  plVar1 = *(longlong **)&this->Result;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// FAnimNode_Root @ 1474b1730

FAnimNode_Root * __thiscall FAnimNode_Root::FAnimNode_Root(FAnimNode_Root *this)

{
  *(undefined4 *)&(this->Result).field_0x8 = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_Root__6B_;
  *(undefined8 *)&this->Result = 0;
  (this->Result).field_0xc = 0;
  return this;
}

// GetGroup @ 1474d9dc0

FName __thiscall FAnimNode_Root::GetGroup(FAnimNode_Root *this)

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
  
  if (CachedId_LayerGroup.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_LayerGroup,"LayerGroup");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar4,
                           L"AnimNode_Root");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_LayerGroup,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton);
    CachedId_LayerGroup.Id = pFVar5->Id;
    CachedId_LayerGroup.Index = pFVar5->Index;
  }
  iVar2 = CachedId_LayerGroup.Index;
  FVar6 = CachedId_LayerGroup.Id;
  if ((this->_padding_ == 0) &&
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
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *(undefined8 *)in_RDX = *puVar7;
  return in_RDX;
}

// GetName @ 1474dbb00

FName __thiscall FAnimNode_Root::GetName(FAnimNode_Root *this)

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
  
  if (CachedId_Name.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_Name,"Name");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar4,
                           L"AnimNode_Root");
    }
    pFVar5 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_Name,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton);
    CachedId_Name.Id = pFVar5->Id;
    CachedId_Name.Index = pFVar5->Index;
  }
  iVar2 = CachedId_Name.Index;
  FVar6 = CachedId_Name.Id;
  if ((this->_padding_ == 0) &&
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
                     ((FAnimNodeData *)this->_padding_,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  *(undefined8 *)in_RDX = *puVar7;
  return in_RDX;
}

