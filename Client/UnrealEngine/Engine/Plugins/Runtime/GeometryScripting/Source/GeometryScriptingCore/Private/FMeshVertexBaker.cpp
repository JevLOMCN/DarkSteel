// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// <lambda_invoker_cdecl> @ 14cd9c540

bool __cdecl UE::Geometry::FMeshVertexBaker::<lambda_33_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// FMeshVertexBaker @ 14cda5b70

FMeshVertexBaker * __thiscall
UE::Geometry::FMeshVertexBaker::FMeshVertexBaker(FMeshVertexBaker *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0x4008000000000000;
  this->_padding_ = (longlong)&___7FMeshVertexBaker_Geometry_UE__6B_;
  this->_padding_ = 0;
  (this->ColorEvaluator).Object = (FMeshMapEvaluator *)0x0;
  (this->ColorEvaluator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->BakeMode = RGBA;
  this->ChannelEvaluators[0].Object = (FMeshMapEvaluator *)0x0;
  this->ChannelEvaluators[0].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ChannelEvaluators[1].Object = (FMeshMapEvaluator *)0x0;
  this->ChannelEvaluators[1].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ChannelEvaluators[2].Object = (FMeshMapEvaluator *)0x0;
  this->ChannelEvaluators[2].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->ChannelEvaluators[3].Object = (FMeshMapEvaluator *)0x0;
  this->ChannelEvaluators[3].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TotalBakeDuration = 0.0;
  *(undefined8 *)&this->CancelF = 0;
  *(undefined8 *)&(this->CancelF).field_0x28 = 0;
  *(undefined ***)&(this->CancelF).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CancelF).field_0x18;
  *(code **)puVar1 = <lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CancelF =
         Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  this->bParallel = true;
  (this->Dimensions).Width = 0;
  (this->Dimensions).Height = 0;
  (this->BakeResult).Ptr = (TImageBuilder<UE::Math::TVector4<float>_> *)0x0;
  (this->Bakers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bakers).ArrayNum = 0;
  (this->Bakers).ArrayMax = 0;
  (this->BakeContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakeContexts).ArrayNum = 0;
  (this->BakeContexts).ArrayMax = 0;
  *(undefined8 *)&(this->BakeDefaults).field0_0x0 = 0;
  (this->BakeDefaults).field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->BakeDefaults).field0_0x0 + 0xc) = 0x3f800000;
  this->BakeInternal = (_func___cdecl_void_void_ptr *)0x0;
  return this;
}

