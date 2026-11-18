// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 8

// StaticStruct @ 1446451d0

UScriptStruct * __cdecl FClothingSimulationInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothingSimulationInstance,(UObject *)pUVar1,
                         L"ClothingSimulationInstance");
  }
  return Z_Registration_Info_UScriptStruct_FClothingSimulationInstance.OuterSingleton;
}

// FClothingSimulationInstance @ 144648420

FClothingSimulationInstance * __thiscall
FClothingSimulationInstance::FClothingSimulationInstance
          (FClothingSimulationInstance *this,USkeletalMeshComponent *param_1,
          FFactoryAssetGroup *param_2)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  IClothingSimulationInterface *pIVar8;
  IClothingSimulationContext *pIVar9;
  UClothingSimulationInteractor *pUVar10;
  FClothingSimulationInstance *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong in_stack_ffffffffffffffe0;
  
  pIVar8 = (IClothingSimulationInterface *)
           (**(code **)(*(longlong *)param_2->ClothingSimulationFactory + 0x2b8))();
  this->ClothingSimulation = pIVar8;
  pIVar9 = (IClothingSimulationContext *)0x0;
  if (pIVar8 != (IClothingSimulationInterface *)0x0) {
    pIVar9 = (IClothingSimulationContext *)(**(code **)(pIVar8->_padding_ + 0x18))(pIVar8);
  }
  this->ClothingSimulationContext = pIVar9;
  cVar5 = (**(code **)(*(longlong *)param_2->ClothingSimulationFactory + 0x2e8))();
  if (cVar5 == '\0') {
    pUVar10 = (UClothingSimulationInteractor *)0x0;
  }
  else {
    pUVar10 = (UClothingSimulationInteractor *)
              (**(code **)(*(longlong *)param_2->ClothingSimulationFactory + 0x2f0))();
  }
  (this->ClothingSimulationInteractor).field0_0x0.DebugPtr = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UClothingSimulationInteractor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar2 = (UObject *)param_2->ClothingSimulationFactory;
  (this->ClothingSimulationFactory).field0_0x0.DebugPtr = (UClothingSimulationFactory *)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  this->CurrentOwnerLODIndex = -1;
  if ((this->ClothingSimulation == (IClothingSimulationInterface *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothingSimulation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Private\\ClothingSimulationInstance.cpp"
                         ,0x11,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FClothingSimulationInstance *)(*pcVar4)();
    return pFVar11;
  }
  (**(code **)(this->ClothingSimulation->_padding_ + 0x28))();
  in_stack_ffffffffffffffe0 = in_stack_ffffffffffffffe0 & 0xffffffffffffff00;
  lVar12 = 1;
  (**(code **)(this->ClothingSimulation->_padding_ + 0x20))
            (this->ClothingSimulation,param_1,0,this->ClothingSimulationContext,1,
             in_stack_ffffffffffffffe0);
  uVar14 = 0;
  if (0 < (param_2->ClothingAssets).ArrayNum) {
    lVar15 = 0;
    do {
      iVar1 = (param_2->ClothingAssets).ArrayNum;
      uVar13 = (ulonglong)iVar1;
      uVar7 = 0;
      if ((int)uVar14 < iVar1) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if (uVar7 == 0) {
        lVar12 = (longlong)(int)uVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        in_stack_ffffffffffffffe0 = uVar13;
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FClothingSimulationInstance *)(*pcVar4)();
          return pFVar11;
        }
      }
      lVar3 = *(longlong *)((param_2->ClothingAssets).AllocatorInstance.Data + lVar15);
      if (lVar3 != 0) {
        (**(code **)(this->ClothingSimulation->_padding_ + 8))
                  (this->ClothingSimulation,param_1,lVar3,uVar14,lVar12,in_stack_ffffffffffffffe0);
        pUVar10 = (this->ClothingSimulationInteractor).field0_0x0.DebugPtr;
        if (pUVar10 != (UClothingSimulationInteractor *)0x0) {
          (**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10,lVar3,uVar14);
          pUVar10 = (this->ClothingSimulationInteractor).field0_0x0.DebugPtr;
          (**(code **)(pUVar10->_padding_ + 0x2c8))
                    (pUVar10,this->ClothingSimulation,this->ClothingSimulationContext);
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < (param_2->ClothingAssets).ArrayNum);
  }
  (**(code **)(this->ClothingSimulation->_padding_ + 0x10))();
  return this;
}

// FClothingSimulationInstance @ 1446485f0

FClothingSimulationInstance * __thiscall
FClothingSimulationInstance::FClothingSimulationInstance(FClothingSimulationInstance *this)

{
  this->CurrentOwnerLODIndex = -1;
  this->ClothingSimulation = (IClothingSimulationInterface *)0x0;
  this->ClothingSimulationContext = (IClothingSimulationContext *)0x0;
  (this->ClothingSimulationInteractor).field0_0x0.DebugPtr = (UClothingSimulationInteractor *)0x0;
  (this->ClothingSimulationFactory).field0_0x0.DebugPtr = (UClothingSimulationFactory *)0x0;
  return this;
}

// ~FClothingSimulationInstance @ 144648bf0

void __thiscall
FClothingSimulationInstance::~FClothingSimulationInstance(FClothingSimulationInstance *this)

{
  UClothingSimulationFactory *pUVar1;
  
  if (this->ClothingSimulation != (IClothingSimulationInterface *)0x0) {
    if (this->ClothingSimulationContext != (IClothingSimulationContext *)0x0) {
      (**(code **)(this->ClothingSimulation->_padding_ + 0x60))();
    }
    (**(code **)(this->ClothingSimulation->_padding_ + 0x58))();
    (**(code **)(this->ClothingSimulation->_padding_ + 0x30))();
    pUVar1 = (this->ClothingSimulationFactory).field0_0x0.DebugPtr;
    if (pUVar1 != (UClothingSimulationFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144648c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,this->ClothingSimulation);
      return;
    }
  }
  return;
}

// AppendUniqueCollisions @ 14464a3f0

void __thiscall
FClothingSimulationInstance::AppendUniqueCollisions
          (FClothingSimulationInstance *this,FClothCollisionData *param_1,bool param_2)

{
  FClothCollisionData local_48;
  
  local_48.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Spheres.ArrayNum = 0;
  local_48.Spheres.ArrayMax = 0;
  local_48.SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SphereConnections.ArrayNum = 0;
  local_48.SphereConnections.ArrayMax = 0;
  local_48.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Convexes.ArrayNum = 0;
  local_48.Convexes.ArrayMax = 0;
  local_48.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Boxes.ArrayNum = 0;
  local_48.Boxes.ArrayMax = 0;
  (**(code **)(this->ClothingSimulation->_padding_ + 0x88))(this->ClothingSimulation,&local_48);
  FClothCollisionData::AppendUnique(param_1,&local_48);
  if (local_48.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Boxes.AllocatorInstance.Data);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)local_48.Convexes.AllocatorInstance.Data,
             local_48.Convexes.ArrayNum);
  if ((FClothCollisionPrim_Convex *)local_48.Convexes.AllocatorInstance.Data !=
      (FClothCollisionPrim_Convex *)0x0) {
    FMemory::Free(local_48.Convexes.AllocatorInstance.Data);
  }
  if (local_48.SphereConnections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SphereConnections.AllocatorInstance.Data);
  }
  if (local_48.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Spheres.AllocatorInstance.Data);
  }
  return;
}

// FillContextAndPrepareTick @ 14464ab60

void __thiscall
FClothingSimulationInstance::FillContextAndPrepareTick
          (FClothingSimulationInstance *this,USkeletalMeshComponent *param_1,float param_2,
          bool param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (!param_3) {
    if (param_1 == (USkeletalMeshComponent *)0x0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    }
    this->CurrentOwnerLODIndex = iVar3;
    cVar1 = (**(code **)(this->ClothingSimulation->_padding_ + 0x38))();
    if (cVar1 == '\0') {
      uVar2 = 1;
      goto LAB_14464abae;
    }
  }
  uVar2 = 0;
LAB_14464abae:
  (**(code **)(this->ClothingSimulation->_padding_ + 0x20))
            (this->ClothingSimulation,param_1,param_2,this->ClothingSimulationContext,param_3,uVar2)
  ;
  return;
}

// RemoveAllClothingActors @ 14464c4a0

void __thiscall
FClothingSimulationInstance::RemoveAllClothingActors(FClothingSimulationInstance *this)

{
  UClothingSimulationInteractor *pUVar1;
  
  pUVar1 = (this->ClothingSimulationInteractor).field0_0x0.DebugPtr;
  if (pUVar1 != (UClothingSimulationInteractor *)0x0) {
    TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TObjectPtr<UClothingInteractor>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UClothingInteractor>,0>,FDefaultSetAllocator>
             *)&pUVar1->ClothingInteractors);
  }
                    /* WARNING: Could not recover jumptable at 0x00014464c4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->ClothingSimulation->_padding_ + 0x58))();
  return;
}

// SyncClothingInteractor @ 14464ce70

void __thiscall
FClothingSimulationInstance::SyncClothingInteractor(FClothingSimulationInstance *this)

{
  UClothingSimulationInteractor *pUVar1;
  char cVar2;
  
  if ((this->ClothingSimulationInteractor).field0_0x0.DebugPtr !=
      (UClothingSimulationInteractor *)0x0) {
    cVar2 = (**(code **)(this->ClothingSimulation->_padding_ + 0x38))
                      (this->ClothingSimulation,this->CurrentOwnerLODIndex);
    if (cVar2 != '\0') {
      pUVar1 = (this->ClothingSimulationInteractor).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014464cea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0x2c8))
                (pUVar1,this->ClothingSimulation,this->ClothingSimulationContext);
      return;
    }
  }
  return;
}

