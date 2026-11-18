// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// StaticClass @ 14ca40af0

UClass * __cdecl UMultiTargetWithSelectionTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTargetWithSelectionTool",
               &Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton,
               StaticRegisterNativesUMultiTargetWithSelectionTool,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiTargetWithSelectionTool>,
               InternalVTableHelperCtorCaller<UMultiTargetWithSelectionTool>,local_res8,
               UMultiSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton;
}

// UMultiTargetWithSelectionTool @ 14ca684c0

UMultiTargetWithSelectionTool * __thiscall
UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool
          (UMultiTargetWithSelectionTool *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiTargetWithSelectionTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)&local_res8);
  (this->GeometrySelectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySelectionArray).ArrayNum = 0;
  (this->GeometrySelectionArray).ArrayMax = 0;
  (this->GeometrySelectionBoolArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySelectionBoolArray).ArrayNum = 0;
  (this->GeometrySelectionBoolArray).ArrayMax = 0;
  (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr =
       (UGeometrySelectionVisualizationProperties *)0x0;
  (this->GeometrySelectionViz).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  return this;
}

// UMultiTargetWithSelectionTool @ 14ca68550

UMultiTargetWithSelectionTool * __thiscall
UMultiTargetWithSelectionTool::UMultiTargetWithSelectionTool(UMultiTargetWithSelectionTool *this)

{
  undefined8 local_res8;
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiTargetWithSelectionTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)&local_res8);
  (this->GeometrySelectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySelectionArray).ArrayNum = 0;
  (this->GeometrySelectionArray).ArrayMax = 0;
  (this->GeometrySelectionBoolArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometrySelectionBoolArray).ArrayNum = 0;
  (this->GeometrySelectionBoolArray).ArrayMax = 0;
  (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr =
       (UGeometrySelectionVisualizationProperties *)0x0;
  (this->GeometrySelectionViz).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  return this;
}

// ~UMultiTargetWithSelectionTool @ 14ca6b880

void __thiscall
UMultiTargetWithSelectionTool::~UMultiTargetWithSelectionTool(UMultiTargetWithSelectionTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiTargetWithSelectionTool__6B_;
  pFVar1 = (this->GeometrySelectionBoolArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FGeometrySelection,int>
            ((FGeometrySelection *)(this->GeometrySelectionArray).AllocatorInstance.Data,
             (this->GeometrySelectionArray).ArrayNum);
  pFVar1 = (this->GeometrySelectionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMultiSelectionTool::~UMultiSelectionTool((UMultiSelectionTool *)this);
  return;
}

// GetGeometrySelection @ 14ca8fde0

FGeometrySelection * __thiscall
UMultiTargetWithSelectionTool::GetGeometrySelection(UMultiTargetWithSelectionTool *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGeometrySelection *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->GeometrySelectionArray).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGeometrySelection *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGeometrySelection *)
         ((this->GeometrySelectionArray).AllocatorInstance.Data + (longlong)param_1 * 0x58);
}

// GetPrivateStaticClass @ 14ca91c70

UClass * __cdecl UMultiTargetWithSelectionTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiTargetWithSelectionTool",
               &Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton,
               StaticRegisterNativesUMultiTargetWithSelectionTool,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiTargetWithSelectionTool>,
               InternalVTableHelperCtorCaller<UMultiTargetWithSelectionTool>,local_res8,
               UMultiSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiTargetWithSelectionTool.InnerSingleton;
}

// GetTargetWorld @ 14ca93750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMultiTargetWithSelectionTool::GetTargetWorld(UMultiTargetWithSelectionTool *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->TargetWorld).WeakPtr);
  return pUVar1;
}

// HasAnyGeometrySelection @ 14ca94ac0

bool __thiscall
UMultiTargetWithSelectionTool::HasAnyGeometrySelection(UMultiTargetWithSelectionTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->GeometrySelectionBoolArray).AllocatorInstance.Data;
  iVar2 = (this->GeometrySelectionBoolArray).ArrayNum;
  bVar4 = false;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->GeometrySelectionBoolArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<bool_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((bVar4 == false) && (*pFVar3 == (FScriptContainerElement)0x0)) {
      pFVar3 = pFVar3 + 1;
    }
    else {
      bVar4 = true;
      pFVar3 = pFVar3 + 1;
    }
  }
  return bVar4;
}

// HasGeometrySelection @ 14ca94c30

bool __thiscall
UMultiTargetWithSelectionTool::HasGeometrySelection(UMultiTargetWithSelectionTool *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->GeometrySelectionBoolArray).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->GeometrySelectionBoolArray).AllocatorInstance.Data[param_1];
}

// InitializeGeometrySelectionArrays @ 14ca963f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMultiTargetWithSelectionTool::InitializeGeometrySelectionArrays
          (UMultiTargetWithSelectionTool *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  TArray<UE::Geometry::FGeometrySelection,TSizedDefaultAllocator<32>_>::SetNum
            (&this->GeometrySelectionArray,param_1,Default);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&this->GeometrySelectionBoolArray,param_1,Default);
  uVar4 = 0;
  if (0 < param_1) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->GeometrySelectionBoolArray).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      (this->GeometrySelectionBoolArray).AllocatorInstance.Data[lVar5] =
           (FScriptContainerElement)0x0;
      lVar5 = lVar5 + 1;
    } while ((int)uVar4 < param_1);
  }
  return;
}

// OnShutdown @ 14ca9c420

void __thiscall
UMultiTargetWithSelectionTool::OnShutdown
          (UMultiTargetWithSelectionTool *this,EToolShutdownType param_1)

{
  UPreviewGeometry *this_00;
  UGeometrySelectionVisualizationProperties *pUVar1;
  code *pcVar2;
  FString local_18;
  
  this_00 = (this->GeometrySelectionViz).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::Disconnect(this_00);
  }
  pUVar1 = (this->GeometrySelectionVizProperties).field0_0x0.DebugPtr;
  if (pUVar1 != (UGeometrySelectionVisualizationProperties *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
    ::FString::FString(&local_18,L"");
    (*pcVar2)(pUVar1,this,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnTick @ 14ca9c790

void __thiscall
UMultiTargetWithSelectionTool::OnTick(UMultiTargetWithSelectionTool *this,float param_1)

{
  UPreviewGeometry *pUVar1;
  
  pUVar1 = (this->GeometrySelectionViz).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    UE::Geometry::UpdateGeometrySelectionVisualization
              (pUVar1,(this->GeometrySelectionVizProperties).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// SetGeometrySelection @ 14caa3640

void __thiscall
UMultiTargetWithSelectionTool::SetGeometrySelection
          (UMultiTargetWithSelectionTool *this,FGeometrySelection *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 < (this->GeometrySelectionArray).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Geometry::FGeometrySelection::operator=
            ((FGeometrySelection *)
             ((this->GeometrySelectionArray).AllocatorInstance.Data + (longlong)param_2 * 0x58),
             param_1);
  uVar3 = 0;
  if (param_2 < (this->GeometrySelectionBoolArray).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GeometrySelectionBoolArray).AllocatorInstance.Data[param_2] = (FScriptContainerElement)0x1;
  return;
}

// SetGeometrySelection @ 14caa3730

void __thiscall
UMultiTargetWithSelectionTool::SetGeometrySelection
          (UMultiTargetWithSelectionTool *this,FGeometrySelection *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 < (this->GeometrySelectionArray).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Geometry::FGeometrySelection::operator=
            ((FGeometrySelection *)
             ((this->GeometrySelectionArray).AllocatorInstance.Data + (longlong)param_2 * 0x58),
             param_1);
  uVar3 = 0;
  if (param_2 < (this->GeometrySelectionBoolArray).ArrayNum) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->GeometrySelectionBoolArray).AllocatorInstance.Data[param_2] = (FScriptContainerElement)0x1;
  return;
}

// SetTargetWorld @ 14caa4300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMultiTargetWithSelectionTool::SetTargetWorld(UMultiTargetWithSelectionTool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Shutdown @ 14caa6650

void __thiscall
UMultiTargetWithSelectionTool::Shutdown
          (UMultiTargetWithSelectionTool *this,EToolShutdownType param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  (**(code **)(this->_padding_ + 0x3a0))();
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (this->TargetWorld).WeakPtr = local_res8;
  UInteractiveTool::Shutdown((UInteractiveTool *)this,param_1);
  return;
}

// StaticRegisterNativesUMultiTargetWithSelectionTool @ 14caa7220

void __cdecl UMultiTargetWithSelectionTool::StaticRegisterNativesUMultiTargetWithSelectionTool(void)

{
  return;
}

