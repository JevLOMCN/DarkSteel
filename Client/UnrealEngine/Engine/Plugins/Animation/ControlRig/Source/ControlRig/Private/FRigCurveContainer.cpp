// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2b9370

UScriptStruct * __cdecl FRigCurveContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurveContainer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurveContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveContainer,(UObject *)pUVar1,
                         L"RigCurveContainer");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurveContainer.OuterSingleton;
}

// FRigCurveContainer @ 14a2d9f90

FRigCurveContainer * __thiscall FRigCurveContainer::FRigCurveContainer(FRigCurveContainer *this)

{
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = 0;
  (this->Curves).ArrayMax = 0;
  return this;
}

// operator= @ 14a2e0600

FRigCurveContainer * __thiscall
FRigCurveContainer::operator=(FRigCurveContainer *this,FRigCurveContainer *param_1)

{
  int *piVar1;
  int iVar2;
  FRigCurve *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigCurve,int>
              ((FRigCurve *)(this->Curves).AllocatorInstance.Data,(this->Curves).ArrayNum);
    iVar2 = (param_1->Curves).ArrayNum;
    piVar1 = &(this->Curves).ArrayMax;
    pFVar3 = (FRigCurve *)(param_1->Curves).AllocatorInstance.Data;
    (this->Curves).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FRigCurve,FRigCurve,int>((this->Curves).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

// Add @ 14a2eaad0

FRigCurve * __thiscall
FRigCurveContainer::Add(FRigCurveContainer *this,FName *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRigCurve *pFVar7;
  longlong lVar8;
  undefined **local_38;
  FName local_30;
  undefined4 local_28;
  float local_20;
  
  FStatsHierarchical::BeginMeasurement("FRigCurveContainer::Add");
  local_30 = *param_1;
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  local_28 = 0xffffffff;
  local_38 = &___7FRigCurve__6B_;
  local_20 = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Curves).ArrayMax * 0x20)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigCurve *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar5 = (this->Curves).ArrayNum;
  piVar1 = &(this->Curves).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Curves).ArrayNum = uVar5 + 1;
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  lVar8 = (longlong)(int)uVar5 * 0x20;
  *(undefined ***)(pFVar2 + lVar8) = &___7FRigElement__6B_;
  *(FName *)(pFVar2 + lVar8 + 8) = local_30;
  *(undefined4 *)(pFVar2 + lVar8 + 0x10) = local_28;
  *(undefined ***)(pFVar2 + lVar8) = &___7FRigCurve__6B_;
  *(float *)(pFVar2 + lVar8 + 0x18) = local_20;
  uVar6 = 0;
  if ((int)uVar5 < (this->Curves).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FRigCurve *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  local_38 = &___7FRigElement__6B_;
  FStatsHierarchical::EndMeasurement();
  return (FRigCurve *)(pFVar2 + lVar8);
}

