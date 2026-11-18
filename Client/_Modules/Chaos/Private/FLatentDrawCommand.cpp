// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FLatentDrawCommand @ 14373d190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLatentDrawCommand * __thiscall
Chaos::FLatentDrawCommand::FLatentDrawCommand(FLatentDrawCommand *this,FLatentDrawCommand *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  dVar4 = (param_1->LineStart).field0_0x0._s_0.Y;
  pFVar2 = &this->Text;
  (this->LineStart).field0_0x0._s_0.X = (param_1->LineStart).field0_0x0._s_0.X;
  (this->LineStart).field0_0x0._s_0.Y = dVar4;
  (this->LineStart).field0_0x0._s_0.Z = (param_1->LineStart).field0_0x0._s_0.Z;
  dVar4 = (param_1->LineEnd).field0_0x0._s_0.Y;
  (this->LineEnd).field0_0x0._s_0.X = (param_1->LineEnd).field0_0x0._s_0.X;
  (this->LineEnd).field0_0x0._s_0.Y = dVar4;
  (this->LineEnd).field0_0x0._s_0.Z = (param_1->LineEnd).field0_0x0._s_0.Z;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  this->Segments = param_1->Segments;
  this->bPersistentLines = param_1->bPersistentLines;
  this->ArrowSize = param_1->ArrowSize;
  this->LifeTime = param_1->LifeTime;
  this->DepthPriority = param_1->DepthPriority;
  this->Thickness = param_1->Thickness;
  this->Radius = param_1->Radius;
  this->HalfHeight = param_1->HalfHeight;
  piVar1 = &(this->Text).Data.ArrayMax;
  dVar4 = (param_1->Center).field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar4;
  (this->Center).field0_0x0._s_0.Z = (param_1->Center).field0_0x0._s_0.Z;
  dVar4 = (param_1->Extent).field0_0x0._s_0.Y;
  (this->Extent).field0_0x0._s_0.X = (param_1->Extent).field0_0x0._s_0.X;
  (this->Extent).field0_0x0._s_0.Y = dVar4;
  (this->Extent).field0_0x0._s_0.Z = (param_1->Extent).field0_0x0._s_0.Z;
  dVar4 = (param_1->Rotation).Y;
  (this->Rotation).X = (param_1->Rotation).X;
  (this->Rotation).Y = dVar4;
  dVar4 = (param_1->Rotation).W;
  (this->Rotation).Z = (param_1->Rotation).Z;
  (this->Rotation).W = dVar4;
  dVar4 = (param_1->TextLocation).field0_0x0._s_0.Y;
  (this->TextLocation).field0_0x0._s_0.X = (param_1->TextLocation).field0_0x0._s_0.X;
  (this->TextLocation).field0_0x0._s_0.Y = dVar4;
  (this->TextLocation).field0_0x0._s_0.Z = (param_1->TextLocation).field0_0x0._s_0.Z;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Text).Data.ArrayNum;
  _Src = (param_1->Text).Data.AllocatorInstance.Data;
  (this->Text).Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  this->TestBaseActor = param_1->TestBaseActor;
  this->bDrawShadow = param_1->bDrawShadow;
  this->FontScale = param_1->FontScale;
  this->Duration = param_1->Duration;
  dVar4 = (param_1->TransformMatrix).M[0][1];
  (this->TransformMatrix).M[0][0] = (param_1->TransformMatrix).M[0][0];
  (this->TransformMatrix).M[0][1] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[0][3];
  (this->TransformMatrix).M[0][2] = (param_1->TransformMatrix).M[0][2];
  (this->TransformMatrix).M[0][3] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[1][1];
  (this->TransformMatrix).M[1][0] = (param_1->TransformMatrix).M[1][0];
  (this->TransformMatrix).M[1][1] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[1][3];
  (this->TransformMatrix).M[1][2] = (param_1->TransformMatrix).M[1][2];
  (this->TransformMatrix).M[1][3] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[2][1];
  (this->TransformMatrix).M[2][0] = (param_1->TransformMatrix).M[2][0];
  (this->TransformMatrix).M[2][1] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[2][3];
  (this->TransformMatrix).M[2][2] = (param_1->TransformMatrix).M[2][2];
  (this->TransformMatrix).M[2][3] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[3][1];
  (this->TransformMatrix).M[3][0] = (param_1->TransformMatrix).M[3][0];
  (this->TransformMatrix).M[3][1] = dVar4;
  dVar4 = (param_1->TransformMatrix).M[3][3];
  (this->TransformMatrix).M[3][2] = (param_1->TransformMatrix).M[3][2];
  (this->TransformMatrix).M[3][3] = dVar4;
  this->bDrawAxis = param_1->bDrawAxis;
  dVar4 = (param_1->YAxis).field0_0x0._s_0.Y;
  (this->YAxis).field0_0x0._s_0.X = (param_1->YAxis).field0_0x0._s_0.X;
  (this->YAxis).field0_0x0._s_0.Y = dVar4;
  (this->YAxis).field0_0x0._s_0.Z = (param_1->YAxis).field0_0x0._s_0.Z;
  dVar4 = (param_1->ZAxis).field0_0x0._s_0.Y;
  (this->ZAxis).field0_0x0._s_0.X = (param_1->ZAxis).field0_0x0._s_0.X;
  (this->ZAxis).field0_0x0._s_0.Y = dVar4;
  (this->ZAxis).field0_0x0._s_0.Z = (param_1->ZAxis).field0_0x0._s_0.Z;
  this->Type = param_1->Type;
  return this;
}

