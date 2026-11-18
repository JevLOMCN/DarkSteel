// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// StaticStruct @ 14d9b17d0

UScriptStruct * __cdecl FPhysicsControlControlAndModifierParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlControlAndModifierParameters,
                         (UObject *)pUVar1,L"PhysicsControlControlAndModifierParameters");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlControlAndModifierParameters.
         OuterSingleton;
}

// Add @ 14d9c5650

void __thiscall
FPhysicsControlControlAndModifierParameters::Add
          (FPhysicsControlControlAndModifierParameters *this,
          FPhysicsControlNamedControlParameters *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FPhysicsControlNamedControlParameters *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  
  pFVar3 = (FPhysicsControlNamedControlParameters *)(this->ControlParameters).AllocatorInstance.Data
  ;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ControlParameters).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->ControlParameters).ArrayNum;
  piVar1 = &(this->ControlParameters).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,(ForAnyElementType *)this,piVar1);
  }
  lVar12 = (longlong)iVar11;
  (this->ControlParameters).ArrayNum = iVar11 + 1;
  fVar8 = (param_1->Data).LinearStrength;
  fVar9 = (param_1->Data).LinearDampingRatio;
  pFVar4 = (this->ControlParameters).AllocatorInstance.Data;
  pFVar2 = (FName *)(pFVar4 + lVar12 * 0x50);
  *pFVar2 = param_1->Name;
  pFVar2[1].ComparisonIndex = (FNameEntryId)fVar8;
  pFVar2[1].Number = (uint)fVar9;
  uVar6 = *(undefined8 *)&(param_1->Data).AngularStrength;
  *(undefined8 *)(pFVar4 + lVar12 * 0x50 + 0x10) =
       *(undefined8 *)&(param_1->Data).LinearExtraDamping;
  *(undefined8 *)(pFVar4 + lVar12 * 0x50 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->Data).LinearTargetVelocityMultiplier;
  *(undefined8 *)(pFVar4 + lVar12 * 0x50 + 0x20) =
       *(undefined8 *)&(param_1->Data).AngularExtraDamping;
  *(undefined8 *)(pFVar4 + lVar12 * 0x50 + 0x20 + 8) = uVar6;
  dVar7 = (param_1->Data).CustomControlPoint.field0_0x0._s_0.Y;
  *(double *)(pFVar4 + lVar12 * 0x50 + 0x30) = (param_1->Data).CustomControlPoint.field0_0x0._s_0.X;
  *(double *)(pFVar4 + lVar12 * 0x50 + 0x30 + 8) = dVar7;
  uVar6 = *(undefined8 *)&(param_1->Data).field_0x40;
  *(double *)(pFVar4 + lVar12 * 0x50 + 0x40) = (param_1->Data).CustomControlPoint.field0_0x0._s_0.Z;
  *(undefined8 *)(pFVar4 + lVar12 * 0x50 + 0x40 + 8) = uVar6;
  return;
}

// Add @ 14d9c5730

void __thiscall
FPhysicsControlControlAndModifierParameters::Add
          (FPhysicsControlControlAndModifierParameters *this,
          FPhysicsControlNamedModifierParameters *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FPhysicsControlNamedModifierParameters *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  
  pFVar3 = (FPhysicsControlNamedModifierParameters *)
           (this->ModifierParameters).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->ModifierParameters).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->ModifierParameters).ArrayNum;
  piVar1 = &(this->ModifierParameters).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&(this->ModifierParameters).AllocatorInstance,piVar1);
  }
  (this->ModifierParameters).ArrayNum = iVar8 + 1;
  FVar6 = *(FName *)&param_1->Data;
  pFVar4 = (this->ModifierParameters).AllocatorInstance.Data;
  pFVar2 = (FName *)(pFVar4 + (longlong)iVar8 * 0x18);
  *pFVar2 = param_1->Name;
  pFVar2[1] = FVar6;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) =
       *(undefined8 *)&(param_1->Data).PhysicsBlendWeight;
  return;
}

