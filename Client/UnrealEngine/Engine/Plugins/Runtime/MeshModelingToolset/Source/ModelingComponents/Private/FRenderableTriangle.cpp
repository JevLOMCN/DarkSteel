// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// StaticStruct @ 14caabb40

UScriptStruct * __cdecl FRenderableTriangle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRenderableTriangle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UScriptStruct_FRenderableTriangle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRenderableTriangle,(UObject *)pUVar1,
                         L"RenderableTriangle");
  }
  return Z_Registration_Info_UScriptStruct_FRenderableTriangle.OuterSingleton;
}

// FRenderableTriangle @ 14caca240

FRenderableTriangle * __thiscall
FRenderableTriangle::FRenderableTriangle(FRenderableTriangle *this,FRenderableTriangle *param_1)

{
  UMaterialInterface *pUVar1;
  double dVar2;
  undefined4 uVar3;
  
  pUVar1 = (param_1->Material).field0_0x0.DebugPtr;
  (this->Material).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  dVar2 = (param_1->Vertex0).Position.field0_0x0._s_0.Y;
  (this->Vertex0).Position.field0_0x0._s_0.X = (param_1->Vertex0).Position.field0_0x0._s_0.X;
  (this->Vertex0).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex0).UV.field0_0x0._s_0.X;
  (this->Vertex0).Position.field0_0x0._s_0.Z = (param_1->Vertex0).Position.field0_0x0._s_0.Z;
  (this->Vertex0).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex0).Normal.field0_0x0._s_0.X;
  (this->Vertex0).UV.field0_0x0._s_0.Y = (param_1->Vertex0).UV.field0_0x0._s_0.Y;
  (this->Vertex0).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex0).Normal.field0_0x0._s_0.Z;
  (this->Vertex0).Normal.field0_0x0._s_0.Y = (param_1->Vertex0).Normal.field0_0x0._s_0.Y;
  (this->Vertex0).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex0).field_0x44;
  (this->Vertex0).Color = (FColor)(param_1->Vertex0).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex0).field_0x44 = uVar3;
  dVar2 = (param_1->Vertex1).Position.field0_0x0._s_0.Y;
  (this->Vertex1).Position.field0_0x0._s_0.X = (param_1->Vertex1).Position.field0_0x0._s_0.X;
  (this->Vertex1).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex1).UV.field0_0x0._s_0.X;
  (this->Vertex1).Position.field0_0x0._s_0.Z = (param_1->Vertex1).Position.field0_0x0._s_0.Z;
  (this->Vertex1).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex1).Normal.field0_0x0._s_0.X;
  (this->Vertex1).UV.field0_0x0._s_0.Y = (param_1->Vertex1).UV.field0_0x0._s_0.Y;
  (this->Vertex1).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex1).Normal.field0_0x0._s_0.Z;
  (this->Vertex1).Normal.field0_0x0._s_0.Y = (param_1->Vertex1).Normal.field0_0x0._s_0.Y;
  (this->Vertex1).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex1).field_0x44;
  (this->Vertex1).Color = (FColor)(param_1->Vertex1).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex1).field_0x44 = uVar3;
  dVar2 = (param_1->Vertex2).Position.field0_0x0._s_0.Y;
  (this->Vertex2).Position.field0_0x0._s_0.X = (param_1->Vertex2).Position.field0_0x0._s_0.X;
  (this->Vertex2).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex2).UV.field0_0x0._s_0.X;
  (this->Vertex2).Position.field0_0x0._s_0.Z = (param_1->Vertex2).Position.field0_0x0._s_0.Z;
  (this->Vertex2).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex2).Normal.field0_0x0._s_0.X;
  (this->Vertex2).UV.field0_0x0._s_0.Y = (param_1->Vertex2).UV.field0_0x0._s_0.Y;
  (this->Vertex2).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex2).Normal.field0_0x0._s_0.Z;
  (this->Vertex2).Normal.field0_0x0._s_0.Y = (param_1->Vertex2).Normal.field0_0x0._s_0.Y;
  (this->Vertex2).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex2).field_0x44;
  (this->Vertex2).Color = (FColor)(param_1->Vertex2).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex2).field_0x44 = uVar3;
  return this;
}

// FRenderableTriangle @ 14cb620c0

FRenderableTriangle * __thiscall
FRenderableTriangle::FRenderableTriangle(FRenderableTriangle *this,FRenderableTriangle *param_1)

{
  UMaterialInterface *pUVar1;
  double dVar2;
  undefined4 uVar3;
  
  pUVar1 = (param_1->Material).field0_0x0.DebugPtr;
  (this->Material).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  dVar2 = (param_1->Vertex0).Position.field0_0x0._s_0.Y;
  (this->Vertex0).Position.field0_0x0._s_0.X = (param_1->Vertex0).Position.field0_0x0._s_0.X;
  (this->Vertex0).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex0).UV.field0_0x0._s_0.X;
  (this->Vertex0).Position.field0_0x0._s_0.Z = (param_1->Vertex0).Position.field0_0x0._s_0.Z;
  (this->Vertex0).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex0).Normal.field0_0x0._s_0.X;
  (this->Vertex0).UV.field0_0x0._s_0.Y = (param_1->Vertex0).UV.field0_0x0._s_0.Y;
  (this->Vertex0).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex0).Normal.field0_0x0._s_0.Z;
  (this->Vertex0).Normal.field0_0x0._s_0.Y = (param_1->Vertex0).Normal.field0_0x0._s_0.Y;
  (this->Vertex0).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex0).field_0x44;
  (this->Vertex0).Color = (FColor)(param_1->Vertex0).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex0).field_0x44 = uVar3;
  dVar2 = (param_1->Vertex1).Position.field0_0x0._s_0.Y;
  (this->Vertex1).Position.field0_0x0._s_0.X = (param_1->Vertex1).Position.field0_0x0._s_0.X;
  (this->Vertex1).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex1).UV.field0_0x0._s_0.X;
  (this->Vertex1).Position.field0_0x0._s_0.Z = (param_1->Vertex1).Position.field0_0x0._s_0.Z;
  (this->Vertex1).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex1).Normal.field0_0x0._s_0.X;
  (this->Vertex1).UV.field0_0x0._s_0.Y = (param_1->Vertex1).UV.field0_0x0._s_0.Y;
  (this->Vertex1).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex1).Normal.field0_0x0._s_0.Z;
  (this->Vertex1).Normal.field0_0x0._s_0.Y = (param_1->Vertex1).Normal.field0_0x0._s_0.Y;
  (this->Vertex1).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex1).field_0x44;
  (this->Vertex1).Color = (FColor)(param_1->Vertex1).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex1).field_0x44 = uVar3;
  dVar2 = (param_1->Vertex2).Position.field0_0x0._s_0.Y;
  (this->Vertex2).Position.field0_0x0._s_0.X = (param_1->Vertex2).Position.field0_0x0._s_0.X;
  (this->Vertex2).Position.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Vertex2).UV.field0_0x0._s_0.X;
  (this->Vertex2).Position.field0_0x0._s_0.Z = (param_1->Vertex2).Position.field0_0x0._s_0.Z;
  (this->Vertex2).UV.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex2).Normal.field0_0x0._s_0.X;
  (this->Vertex2).UV.field0_0x0._s_0.Y = (param_1->Vertex2).UV.field0_0x0._s_0.Y;
  (this->Vertex2).Normal.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Vertex2).Normal.field0_0x0._s_0.Z;
  (this->Vertex2).Normal.field0_0x0._s_0.Y = (param_1->Vertex2).Normal.field0_0x0._s_0.Y;
  (this->Vertex2).Normal.field0_0x0._s_0.Z = dVar2;
  uVar3 = *(undefined4 *)&(param_1->Vertex2).field_0x44;
  (this->Vertex2).Color = (FColor)(param_1->Vertex2).Color.field0_0x0;
  *(undefined4 *)&(this->Vertex2).field_0x44 = uVar3;
  return this;
}

