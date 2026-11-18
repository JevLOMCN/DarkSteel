// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FModelElement @ 1478a7ef0

FModelElement * __thiscall
FModelElement::FModelElement
          (FModelElement *this,UModelComponent *param_1,UMaterialInterface *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  (this->Component).field0_0x0.DebugPtr = param_1;
  this->_padding_ = (longlong)&___7FModelElement__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UModelComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Material).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  this->LegacyMapBuildData = (FMeshMapBuildData *)0x0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  this->IndexBuffer = (FRawIndexBuffer16or32 *)0x0;
  this->FirstIndex = 0;
  this->NumTriangles = 0;
  this->MinVertexIndex = 0;
  this->MaxVertexIndex = 0;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->MapBuildDataId).A = pFVar4->A;
  (this->MapBuildDataId).B = uVar1;
  (this->MapBuildDataId).C = uVar2;
  (this->MapBuildDataId).D = uVar3;
  return this;
}

// FModelElement @ 1478a7fc0

FModelElement * __thiscall FModelElement::FModelElement(FModelElement *this)

{
  this->_padding_ = (longlong)&___7FModelElement__6B_;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  this->LegacyMapBuildData = (FMeshMapBuildData *)0x0;
  (this->MapBuildDataId).A = 0;
  (this->MapBuildDataId).B = 0;
  (this->MapBuildDataId).C = 0;
  (this->MapBuildDataId).D = 0;
  this->IndexBuffer = (FRawIndexBuffer16or32 *)0x0;
  this->FirstIndex = 0;
  this->NumTriangles = 0;
  this->MinVertexIndex = 0;
  this->MaxVertexIndex = 0;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->Component).field0_0x0.DebugPtr = (UModelComponent *)0x0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  return this;
}

// ~FModelElement @ 1478ab970

void __thiscall FModelElement::~FModelElement(FModelElement *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FModelElement__6B_;
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetMeshMapBuildData @ 1478d6410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMeshMapBuildData * __thiscall FModelElement::GetMeshMapBuildData(FModelElement *this)

{
  int iVar1;
  ULevel *pUVar2;
  UWorld *pUVar3;
  code *pcVar4;
  bool bVar5;
  FMeshMapBuildData *pFVar6;
  UClass *pUVar7;
  UMapBuildDataRegistry *this_00;
  FGuid local_18;
  
  if ((this->Component).field0_0x0.DebugPtr == (UModelComponent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ModelComponent.cpp"
                       ,0x39,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMeshMapBuildData *)(*pcVar4)();
      return pFVar6;
    }
  }
  pUVar2 = (ULevel *)
           ((((this->Component).field0_0x0.DebugPtr)->Model).field0_0x0.DebugPtr)->_padding_;
  if (pUVar2 != (ULevel *)0x0) {
    pUVar7 = Z_Construct_UClass_ULevel_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar7->_padding_)) &&
       (pUVar3 = (pUVar2->OwningWorld).field0_0x0.DebugPtr, pUVar3 != (UWorld *)0x0)) {
      this_00 = UMapBuildDataRegistry::Get(pUVar2,pUVar3);
      if (this_00 != (UMapBuildDataRegistry *)0x0) {
        local_18.A = (this->MapBuildDataId).A;
        local_18.B = (this->MapBuildDataId).B;
        local_18.C = (this->MapBuildDataId).C;
        local_18.D = (this->MapBuildDataId).D;
        pFVar6 = UMapBuildDataRegistry::GetMeshBuildData(this_00,&local_18);
        return pFVar6;
      }
    }
  }
  return (FMeshMapBuildData *)0x0;
}

