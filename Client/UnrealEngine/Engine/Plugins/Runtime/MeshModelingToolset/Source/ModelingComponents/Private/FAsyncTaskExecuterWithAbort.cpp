// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ~FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_> @ 14cad0160

void __thiscall
UE::Geometry::
FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>::
~FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
          (FAsyncTaskExecuterWithAbort<UE::Geometry::TModelingOpTask<UE::Geometry::FDynamicMeshOperator>_>
           *this)

{
  atomic<int> *paVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this =
       &
       ___7__FAsyncTaskExecuterWithAbort_V__TModelingOpTask_VFDynamicMeshOperator_Geometry_UE___Geometry_UE___Geometry_UE__6B_
  ;
  paVar1 = (this->TaskCounter).Object;
  if (paVar1 != (atomic<int> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TaskCounter).SharedReferenceCount.ReferenceController);
  puVar2 = *(undefined8 **)&this->field_0x130;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FProgressCancel::~FProgressCancel((FProgressCancel *)&this->field_0x80);
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  return;
}

