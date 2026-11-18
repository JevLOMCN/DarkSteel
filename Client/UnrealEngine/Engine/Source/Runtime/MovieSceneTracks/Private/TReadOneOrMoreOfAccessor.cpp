// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// PreLockComponentData @ 146853480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TReadOneOrMoreOfAccessor<double,double,double,double>::PreLockComponentData
          (TReadOneOrMoreOfAccessor<double,double,double,double> *this,
          FEntityAllocationProxy *param_1,TRelativePtr<void,unsigned_int> *param_2)

{
  bool bVar1;
  FComponentMask *pFVar2;
  FEntityAllocation *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[0].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)this->ComponentTypes) {
        TRelativePtr<void,unsigned_int>::Reset(param_2,pFVar3->ComponentData,pFVar5->Components);
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[1].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)(this->ComponentTypes + 1)) {
        TRelativePtr<void,unsigned_int>::Reset(param_2 + 1,pFVar3->ComponentData,pFVar5->Components)
        ;
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[2].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)(this->ComponentTypes + 2)) {
        TRelativePtr<void,unsigned_int>::Reset(param_2 + 2,pFVar3->ComponentData,pFVar5->Components)
        ;
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[3].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    if (pFVar5 != pFVar4) {
      while ((pFVar5->ComponentType).Value != *(ushort *)(this->ComponentTypes + 3)) {
        pFVar5 = pFVar5 + 1;
        if (pFVar5 == pFVar4) {
          return;
        }
      }
      TRelativePtr<void,unsigned_int>::Reset(param_2 + 3,pFVar3->ComponentData,pFVar5->Components);
    }
  }
  return;
}

// PreLockComponentData @ 146853660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
::PreLockComponentData
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> *this
          ,FEntityAllocationProxy *param_1,TRelativePtr<void,unsigned_int> *param_2)

{
  bool bVar1;
  FComponentMask *pFVar2;
  FEntityAllocation *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[0].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)this->ComponentTypes) {
        TRelativePtr<void,unsigned_int>::Reset(param_2,pFVar3->ComponentData,pFVar5->Components);
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[1].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)(this->ComponentTypes + 1)) {
        TRelativePtr<void,unsigned_int>::Reset(param_2 + 1,pFVar3->ComponentData,pFVar5->Components)
        ;
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[2].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)(this->ComponentTypes + 2)) {
        TRelativePtr<void,unsigned_int>::Reset(param_2 + 2,pFVar3->ComponentData,pFVar5->Components)
        ;
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[3].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    if (pFVar5 != pFVar4) {
      while ((pFVar5->ComponentType).Value != *(ushort *)(this->ComponentTypes + 3)) {
        pFVar5 = pFVar5 + 1;
        if (pFVar5 == pFVar4) {
          return;
        }
      }
      TRelativePtr<void,unsigned_int>::Reset(param_2 + 3,pFVar3->ComponentData,pFVar5->Components);
    }
  }
  return;
}

// PreLockComponentData @ 146853840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
::PreLockComponentData
          (TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
           *this,FEntityAllocationProxy *param_1,TRelativePtr<void,unsigned_int> *param_2)

{
  bool bVar1;
  FComponentMask *pFVar2;
  FEntityAllocation *pFVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[0].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)this->ComponentTypes) {
        TRelativePtr<void,unsigned_int>::Reset(param_2,pFVar3->ComponentData,pFVar5->Components);
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[1].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      if ((pFVar5->ComponentType).Value == *(ushort *)(this->ComponentTypes + 1)) {
        TRelativePtr<void,unsigned_int>::Reset(param_2 + 1,pFVar3->ComponentData,pFVar5->Components)
        ;
        break;
      }
    }
  }
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pFVar2 = FEntityAllocationProxy::GetAllocationType(&local_18);
  bVar1 = FComponentTypeIDFilter::Passes
                    ((FComponentTypeIDFilter *)&this->ComponentTypes[2].field_0x2,pFVar2);
  if (bVar1) {
    pFVar3 = FEntityAllocationProxy::GetAllocation(&local_18);
    pFVar5 = pFVar3->ComponentHeaders;
    pFVar4 = pFVar5 + pFVar3->NumComponents;
    if (pFVar5 != pFVar4) {
      while ((pFVar5->ComponentType).Value != *(ushort *)(this->ComponentTypes + 2)) {
        pFVar5 = pFVar5 + 1;
        if (pFVar5 == pFVar4) {
          return;
        }
      }
      TRelativePtr<void,unsigned_int>::Reset(param_2 + 2,pFVar3->ComponentData,pFVar5->Components);
    }
  }
  return;
}

