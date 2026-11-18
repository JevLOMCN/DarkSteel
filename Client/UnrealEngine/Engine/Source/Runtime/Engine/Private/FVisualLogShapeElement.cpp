// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FVisualLogShapeElement @ 1489b5900

FVisualLogShapeElement * __thiscall
FVisualLogShapeElement::FVisualLogShapeElement
          (FVisualLogShapeElement *this,FVisualLogShapeElement *param_1)

{
  double dVar1;
  
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.AllocatorInstance.Data =
       (param_1->Description).Data.AllocatorInstance.Data;
  (param_1->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = (param_1->Description).Data.ArrayNum;
  (this->Description).Data.ArrayMax = (param_1->Description).Data.ArrayMax;
  (param_1->Description).Data.ArrayNum = 0;
  (param_1->Description).Data.ArrayMax = 0;
  this->Category = param_1->Category;
  (this->Verbosity).Value = (param_1->Verbosity).Value;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).AllocatorInstance.Data = (param_1->Points).AllocatorInstance.Data;
  (param_1->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = (param_1->Points).ArrayNum;
  (this->Points).ArrayMax = (param_1->Points).ArrayMax;
  (param_1->Points).ArrayNum = 0;
  (param_1->Points).ArrayMax = 0;
  dVar1 = (param_1->TransformationMatrix).M[0][1];
  (this->TransformationMatrix).M[0][0] = (param_1->TransformationMatrix).M[0][0];
  (this->TransformationMatrix).M[0][1] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[0][3];
  (this->TransformationMatrix).M[0][2] = (param_1->TransformationMatrix).M[0][2];
  (this->TransformationMatrix).M[0][3] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[1][1];
  (this->TransformationMatrix).M[1][0] = (param_1->TransformationMatrix).M[1][0];
  (this->TransformationMatrix).M[1][1] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[1][3];
  (this->TransformationMatrix).M[1][2] = (param_1->TransformationMatrix).M[1][2];
  (this->TransformationMatrix).M[1][3] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[2][1];
  (this->TransformationMatrix).M[2][0] = (param_1->TransformationMatrix).M[2][0];
  (this->TransformationMatrix).M[2][1] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[2][3];
  (this->TransformationMatrix).M[2][2] = (param_1->TransformationMatrix).M[2][2];
  (this->TransformationMatrix).M[2][3] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[3][1];
  (this->TransformationMatrix).M[3][0] = (param_1->TransformationMatrix).M[3][0];
  (this->TransformationMatrix).M[3][1] = dVar1;
  dVar1 = (param_1->TransformationMatrix).M[3][3];
  (this->TransformationMatrix).M[3][2] = (param_1->TransformationMatrix).M[3][2];
  (this->TransformationMatrix).M[3][3] = dVar1;
  this->UniqueId = param_1->UniqueId;
  this->Type = param_1->Type;
  this->Color = 0xff;
  this->field15_0xb6 = param_1->field15_0xb6;
  return this;
}

// FVisualLogShapeElement @ 1489b59e0

FVisualLogShapeElement * __thiscall
FVisualLogShapeElement::FVisualLogShapeElement
          (FVisualLogShapeElement *this,FString *param_1,FColor *param_2,ushort param_3,
          FName *param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  
  ::FString::FString(&this->Description,param_1);
  this->Category = *param_4;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Verbosity).Value = '\a';
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->TransformationMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->TransformationMatrix).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->TransformationMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->TransformationMatrix).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->TransformationMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->TransformationMatrix).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->TransformationMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->TransformationMatrix).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->TransformationMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->TransformationMatrix).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->TransformationMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->TransformationMatrix).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->TransformationMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->TransformationMatrix).M[3][1] = dVar2;
  dVar3 = UE::Math::TMatrix<double>::Identity.M[3][3];
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][2];
  this->Type = Invalid;
  this->Color = 0xff;
  (this->field15_0xb6).Thickness = param_3;
  (this->TransformationMatrix).M[3][2] = dVar2;
  (this->TransformationMatrix).M[3][3] = dVar3;
  this->UniqueId = -1;
  uVar1 = (param_2->field0_0x0).Bits;
  this->Color = (byte)(uVar1 >> 0x18) & 0xc0 | (byte)(uVar1 >> 0x12) & 0x30 |
                (byte)(uVar1 >> 0xc) & 0xc | (byte)(uVar1 >> 6) & 3;
  return this;
}

// FVisualLogShapeElement @ 1489b5ae0

FVisualLogShapeElement * __thiscall
FVisualLogShapeElement::FVisualLogShapeElement
          (FVisualLogShapeElement *this,EVisualLoggerShapeElement param_1)

{
  double dVar1;
  
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  this->Category = UE::VisualLogger::NAME_UnnamedCategory;
  (this->Verbosity).Value = '\a';
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Points).ArrayMax = 0;
  (this->TransformationMatrix).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->TransformationMatrix).M[0][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->TransformationMatrix).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->TransformationMatrix).M[0][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->TransformationMatrix).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->TransformationMatrix).M[1][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->TransformationMatrix).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->TransformationMatrix).M[1][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->TransformationMatrix).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->TransformationMatrix).M[2][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->TransformationMatrix).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->TransformationMatrix).M[2][3] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->TransformationMatrix).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->TransformationMatrix).M[3][1] = dVar1;
  dVar1 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->TransformationMatrix).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->TransformationMatrix).M[3][3] = dVar1;
  this->UniqueId = -1;
  this->Type = param_1;
  this->Color = 0xff;
  (this->field15_0xb6).Thickness = 0;
  return this;
}

