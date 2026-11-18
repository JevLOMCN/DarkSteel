// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FVisualLogShapeElement @ 146d75350

FVisualLogShapeElement * __thiscall
FVisualLogShapeElement::FVisualLogShapeElement
          (FVisualLogShapeElement *this,FVisualLogShapeElement *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  
  ::FString::FString(&this->Description,&param_1->Description);
  pTVar1 = &this->Points;
  this->Category = param_1->Category;
  (this->Verbosity).Value = (param_1->Verbosity).Value;
  piVar2 = &(this->Points).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Points).ArrayNum;
  _Src = (param_1->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
  }
  dVar4 = (param_1->TransformationMatrix).M[0][1];
  (this->TransformationMatrix).M[0][0] = (param_1->TransformationMatrix).M[0][0];
  (this->TransformationMatrix).M[0][1] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[0][3];
  (this->TransformationMatrix).M[0][2] = (param_1->TransformationMatrix).M[0][2];
  (this->TransformationMatrix).M[0][3] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[1][1];
  (this->TransformationMatrix).M[1][0] = (param_1->TransformationMatrix).M[1][0];
  (this->TransformationMatrix).M[1][1] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[1][3];
  (this->TransformationMatrix).M[1][2] = (param_1->TransformationMatrix).M[1][2];
  (this->TransformationMatrix).M[1][3] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[2][1];
  (this->TransformationMatrix).M[2][0] = (param_1->TransformationMatrix).M[2][0];
  (this->TransformationMatrix).M[2][1] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[2][3];
  (this->TransformationMatrix).M[2][2] = (param_1->TransformationMatrix).M[2][2];
  (this->TransformationMatrix).M[2][3] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[3][1];
  (this->TransformationMatrix).M[3][0] = (param_1->TransformationMatrix).M[3][0];
  (this->TransformationMatrix).M[3][1] = dVar4;
  dVar4 = (param_1->TransformationMatrix).M[3][3];
  (this->TransformationMatrix).M[3][2] = (param_1->TransformationMatrix).M[3][2];
  (this->TransformationMatrix).M[3][3] = dVar4;
  this->UniqueId = param_1->UniqueId;
  this->Type = param_1->Type;
  this->Color = param_1->Color;
  this->field15_0xb6 = param_1->field15_0xb6;
  this->field15_0xb6 = param_1->field15_0xb6;
  this->field15_0xb6 = param_1->field15_0xb6;
  this->field15_0xb6 = param_1->field15_0xb6;
  return this;
}

