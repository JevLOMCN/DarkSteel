// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147aa5a70

UScriptStruct * __cdecl FRollbackNetStartupActorInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRollbackNetStartupActorInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRollbackNetStartupActorInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo,(UObject *)pUVar1,
                         L"RollbackNetStartupActorInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRollbackNetStartupActorInfo.OuterSingleton;
}

// FRollbackNetStartupActorInfo @ 147abc1c0

FRollbackNetStartupActorInfo * __thiscall
FRollbackNetStartupActorInfo::FRollbackNetStartupActorInfo
          (FRollbackNetStartupActorInfo *this,FRollbackNetStartupActorInfo *param_1)

{
  UObject *pUVar1;
  double dVar2;
  
  this->Name = param_1->Name;
  pUVar1 = (param_1->Archetype).field0_0x0.DebugPtr;
  (this->Archetype).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  dVar2 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar2;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  dVar2 = (param_1->Scale3D).field0_0x0._s_0.Y;
  (this->Scale3D).field0_0x0._s_0.X = (param_1->Scale3D).field0_0x0._s_0.X;
  (this->Scale3D).field0_0x0._s_0.Y = dVar2;
  (this->Scale3D).field0_0x0._s_0.Z = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->LevelName = param_1->LevelName;
  (this->RepState).Object = (param_1->RepState).Object;
  (this->RepState).SharedReferenceCount.ReferenceController =
       (param_1->RepState).SharedReferenceCount.ReferenceController;
  (param_1->RepState).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->RepState).Object = (FRepState *)0x0;
  TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
              *)&this->SubObjRepState,
             (TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
              *)&param_1->SubObjRepState);
  (this->ObjReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjReferences).AllocatorInstance.Data = (param_1->ObjReferences).AllocatorInstance.Data;
  (param_1->ObjReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjReferences).ArrayNum = (param_1->ObjReferences).ArrayNum;
  (this->ObjReferences).ArrayMax = (param_1->ObjReferences).ArrayMax;
  (param_1->ObjReferences).ArrayNum = 0;
  (param_1->ObjReferences).ArrayMax = 0;
  return this;
}

