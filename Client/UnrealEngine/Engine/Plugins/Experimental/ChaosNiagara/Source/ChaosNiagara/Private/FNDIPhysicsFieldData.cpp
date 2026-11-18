// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 3

// Init @ 14e9a1460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FNDIPhysicsFieldData::Init(FNDIPhysicsFieldData *this,FNiagaraSystemInstance *param_1)

{
  UWorld *pUVar1;
  UPhysicsFieldComponent *pUVar2;
  FPhysicsFieldInstance *pFVar3;
  FPhysicsFieldResource *pFVar4;
  double dVar5;
  FNiagaraLWCConverter *pFVar6;
  FNiagaraLWCConverter local_28;
  
  this->FieldResource = (FPhysicsFieldResource *)0x0;
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->FieldCommands).AllocatorInstance.Data,
             (this->FieldCommands).ArrayNum);
  (this->FieldCommands).ArrayNum = 0;
  if ((this->FieldCommands).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&(this->FieldCommands).AllocatorInstance,0,&(this->FieldCommands).ArrayMax);
  }
  if (param_1 != (FNiagaraSystemInstance *)0x0) {
    pUVar1 = param_1->World;
    if (pUVar1 != (UWorld *)0x0) {
      this->TimeSeconds = (float)pUVar1->TimeSeconds;
      pUVar2 = (pUVar1->PhysicsField).field0_0x0.DebugPtr;
      if (((pUVar2 != (UPhysicsFieldComponent *)0x0) &&
          (pFVar3 = pUVar2->FieldInstance, pFVar3 != (FPhysicsFieldInstance *)0x0)) &&
         (pFVar4 = pFVar3->FieldResource, pFVar4 != (FPhysicsFieldResource *)0x0)) {
        this->FieldResource = pFVar4;
      }
    }
    pFVar6 = FNiagaraSystemInstance::GetLWCConverter(param_1,&local_28,false);
    dVar5 = (pFVar6->SystemWorldPos).field0_0x0._s_0.Y;
    (this->LWCConverter).SystemWorldPos.field0_0x0._s_0.X =
         (pFVar6->SystemWorldPos).field0_0x0._s_0.X;
    (this->LWCConverter).SystemWorldPos.field0_0x0._s_0.Y = dVar5;
    (this->LWCConverter).SystemWorldPos.field0_0x0._s_0.Z =
         (pFVar6->SystemWorldPos).field0_0x0._s_0.Z;
  }
  return;
}

// Release @ 14e9a5410

void __thiscall FNDIPhysicsFieldData::Release(FNDIPhysicsFieldData *this)

{
  this->FieldResource = (FPhysicsFieldResource *)0x0;
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->FieldCommands).AllocatorInstance.Data,
             (this->FieldCommands).ArrayNum);
  (this->FieldCommands).ArrayNum = 0;
  if ((this->FieldCommands).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,0,&(this->FieldCommands).AllocatorInstance,0,&(this->FieldCommands).ArrayMax);
  }
  return;
}

// Update @ 14e9b1af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FNDIPhysicsFieldData::Update(FNDIPhysicsFieldData *this,FNiagaraSystemInstance *param_1)

{
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UWorld *pUVar4;
  UPhysicsFieldComponent *pUVar5;
  FPhysicsFieldInstance *pFVar6;
  FFieldSystemCommand *pFVar7;
  
  if ((param_1 != (FNiagaraSystemInstance *)0x0) &&
     (pUVar4 = param_1->World, pUVar4 != (UWorld *)0x0)) {
    this->TimeSeconds = (float)pUVar4->TimeSeconds;
    pUVar5 = (pUVar4->PhysicsField).field0_0x0.DebugPtr;
    if ((pUVar5 != (UPhysicsFieldComponent *)0x0) &&
       (pFVar6 = pUVar5->FieldInstance, pFVar6 != (FPhysicsFieldInstance *)0x0)) {
      pTVar1 = &this->FieldCommands;
      if (pTVar1 != &pFVar6->FieldCommands) {
        DestructItems<FFieldSystemCommand,int>
                  ((FFieldSystemCommand *)(pTVar1->AllocatorInstance).Data,
                   (this->FieldCommands).ArrayNum);
        iVar3 = (pFVar6->FieldCommands).ArrayNum;
        piVar2 = &(this->FieldCommands).ArrayMax;
        pFVar7 = (FFieldSystemCommand *)(pFVar6->FieldCommands).AllocatorInstance.Data;
        (this->FieldCommands).ArrayNum = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
          return;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
        ConstructItems<FFieldSystemCommand,FFieldSystemCommand,int>
                  ((pTVar1->AllocatorInstance).Data,pFVar7,iVar3);
      }
    }
  }
  return;
}

