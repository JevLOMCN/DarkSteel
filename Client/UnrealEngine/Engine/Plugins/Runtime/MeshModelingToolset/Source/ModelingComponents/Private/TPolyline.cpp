// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// TPolyline<double,3> @ 14cac8850

TPolyline<double,3> * __thiscall
UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
          (TPolyline<double,3> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TPolyline<double,3> *pTVar7;
  
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  iVar6 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,(ForAnyElementType *)this,&(this->Vertices).ArrayMax);
  (this->Vertices).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) && (param_2 < pFVar1 + (longlong)(this->Vertices).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TPolyline<double,3> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar6 = (this->Vertices).ArrayNum;
  if (iVar6 == (this->Vertices).ArrayMax) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,&(this->Vertices).ArrayMax);
  }
  (this->Vertices).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  return this;
}

