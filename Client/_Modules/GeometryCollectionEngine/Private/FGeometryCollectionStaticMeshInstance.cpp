// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// FGeometryCollectionStaticMeshInstance @ 1463a27c0

FGeometryCollectionStaticMeshInstance * __thiscall
FGeometryCollectionStaticMeshInstance::FGeometryCollectionStaticMeshInstance
          (FGeometryCollectionStaticMeshInstance *this,
          FGeometryCollectionStaticMeshInstance *param_1)

{
  TArray<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  pTVar1 = &this->MaterialsOverrides;
  (this->StaticMesh).WeakPtr = (param_1->StaticMesh).WeakPtr;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaterialsOverrides).ArrayMax;
  iVar5 = (param_1->MaterialsOverrides).ArrayNum;
  pFVar6 = (param_1->MaterialsOverrides).AllocatorInstance.Data;
  (this->MaterialsOverrides).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  pTVar3 = &this->CustomPrimitiveData;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CustomPrimitiveData).ArrayMax;
  iVar5 = (param_1->CustomPrimitiveData).ArrayNum;
  pFVar6 = (param_1->CustomPrimitiveData).AllocatorInstance.Data;
  (this->CustomPrimitiveData).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar4 = &(this->Desc).Tags;
  (this->Desc).Flags = (param_1->Desc).Flags;
  (this->Desc).NumCustomDataFloats = (param_1->Desc).NumCustomDataFloats;
  dVar7 = (param_1->Desc).Position.field0_0x0._s_0.Y;
  (this->Desc).Position.field0_0x0._s_0.X = (param_1->Desc).Position.field0_0x0._s_0.X;
  (this->Desc).Position.field0_0x0._s_0.Y = dVar7;
  (this->Desc).Position.field0_0x0._s_0.Z = (param_1->Desc).Position.field0_0x0._s_0.Z;
  (this->Desc).StartCullDistance = (param_1->Desc).StartCullDistance;
  (this->Desc).EndCullDistance = (param_1->Desc).EndCullDistance;
  (this->Desc).MinLod = (param_1->Desc).MinLod;
  (this->Desc).GroupHash = (param_1->Desc).GroupHash;
  (this->Desc).LodScale = (param_1->Desc).LodScale;
  piVar2 = &(this->Desc).Tags.ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Desc).Tags.ArrayNum;
  pFVar6 = (param_1->Desc).Tags.AllocatorInstance.Data;
  (this->Desc).Tags.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 3);
  }
  (this->Desc).StatsCategory = (param_1->Desc).StatsCategory;
  return this;
}

// operator== @ 1463a6950

bool __thiscall
FGeometryCollectionStaticMeshInstance::operator==
          (FGeometryCollectionStaticMeshInstance *this,
          FGeometryCollectionStaticMeshInstance *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((((((this->Desc).Flags == (param_1->Desc).Flags) &&
         ((this->Desc).NumCustomDataFloats == (param_1->Desc).NumCustomDataFloats)) &&
        ((param_1->Desc).Position.field0_0x0._s_0.X == (this->Desc).Position.field0_0x0._s_0.X)) &&
       (((param_1->Desc).Position.field0_0x0._s_0.Y == (this->Desc).Position.field0_0x0._s_0.Y &&
        ((param_1->Desc).Position.field0_0x0._s_0.Z == (this->Desc).Position.field0_0x0._s_0.Z))))
      && ((((this->Desc).StartCullDistance == (param_1->Desc).StartCullDistance &&
           (((this->Desc).EndCullDistance == (param_1->Desc).EndCullDistance &&
            ((this->Desc).MinLod == (param_1->Desc).MinLod)))) &&
          ((param_1->Desc).LodScale == (this->Desc).LodScale)))) &&
     ((((iVar1 = (this->Desc).Tags.ArrayNum, iVar1 == (param_1->Desc).Tags.ArrayNum &&
        (bVar5 = CompareItems<FName,int>
                           ((FName *)(this->Desc).Tags.AllocatorInstance.Data,
                            (FName *)(param_1->Desc).Tags.AllocatorInstance.Data,iVar1), bVar5)) &&
       ((this->Desc).GroupHash == (param_1->Desc).GroupHash)) &&
      ((((this->Desc).StatsCategory == (param_1->Desc).StatsCategory &&
        ((this->StaticMesh).WeakPtr.ObjectIndex == (param_1->StaticMesh).WeakPtr.ObjectIndex)) &&
       (((this->StaticMesh).WeakPtr.ObjectSerialNumber ==
         (param_1->StaticMesh).WeakPtr.ObjectSerialNumber &&
        (iVar1 = (this->MaterialsOverrides).ArrayNum,
        iVar1 == (param_1->MaterialsOverrides).ArrayNum)))))))) {
    uVar8 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->MaterialsOverrides).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar2 = (this->MaterialsOverrides).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < (param_1->MaterialsOverrides).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_1->MaterialsOverrides).AllocatorInstance.Data;
        if (*(int *)(pFVar2 + lVar9 * 8) != *(int *)(pFVar3 + lVar9 * 8)) {
          return false;
        }
        if (*(int *)(pFVar2 + lVar9 * 8 + 4) != *(int *)(pFVar3 + lVar9 * 8 + 4)) {
          return false;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < (this->MaterialsOverrides).ArrayNum);
    }
    iVar1 = (this->CustomPrimitiveData).ArrayNum;
    if (iVar1 == (param_1->CustomPrimitiveData).ArrayNum) {
      uVar8 = 0;
      if (0 < iVar1) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (param_1->CustomPrimitiveData).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar2 = (param_1->CustomPrimitiveData).AllocatorInstance.Data;
          uVar7 = 0;
          if ((int)uVar8 < (this->CustomPrimitiveData).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(float *)(pFVar2 + lVar9 * 4) !=
              *(float *)((this->CustomPrimitiveData).AllocatorInstance.Data + lVar9 * 4)) {
            return false;
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 1;
        } while ((int)uVar8 < (this->CustomPrimitiveData).ArrayNum);
      }
      return true;
    }
  }
  return false;
}

