// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// FTestCase @ 14d6a9810

FTestCase * __thiscall
CameraCalibrationTestUtil::FTestCase::FTestCase(FTestCase *this,FTestCase *param_1)

{
  float fVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  fVar1 = param_1->Focus;
  (this->ExpectedResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Focus = fVar1;
  this->Zoom = param_1->Zoom;
  (this->ExpectedResult).AllocatorInstance.Data = (param_1->ExpectedResult).AllocatorInstance.Data;
  (param_1->ExpectedResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpectedResult).ArrayNum = (param_1->ExpectedResult).ArrayNum;
  (this->ExpectedResult).ArrayMax = (param_1->ExpectedResult).ArrayMax;
  (param_1->ExpectedResult).ArrayNum = 0;
  (param_1->ExpectedResult).ArrayMax = 0;
  (this->DataType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataType).Data.AllocatorInstance.Data = (param_1->DataType).Data.AllocatorInstance.Data;
  (param_1->DataType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataType).Data.ArrayNum = (param_1->DataType).Data.ArrayNum;
  (this->DataType).Data.ArrayMax = (param_1->DataType).Data.ArrayMax;
  (param_1->DataType).Data.ArrayNum = 0;
  (param_1->DataType).Data.ArrayMax = 0;
  (this->EvaluationMethod).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluationMethod).Data.AllocatorInstance.Data =
       (param_1->EvaluationMethod).Data.AllocatorInstance.Data;
  (param_1->EvaluationMethod).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluationMethod).Data.ArrayNum = (param_1->EvaluationMethod).Data.ArrayNum;
  (this->EvaluationMethod).Data.ArrayMax = (param_1->EvaluationMethod).Data.ArrayMax;
  (param_1->EvaluationMethod).Data.ArrayNum = 0;
  (param_1->EvaluationMethod).Data.ArrayMax = 0;
  return this;
}

// FTestCase @ 14d6a98b0

FTestCase * __thiscall
CameraCalibrationTestUtil::FTestCase::FTestCase(FTestCase *this,FTestCase *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::FString(&this->Name,&param_1->Name);
  pTVar1 = &this->ExpectedResult;
  this->Focus = param_1->Focus;
  this->Zoom = param_1->Zoom;
  piVar2 = &(this->ExpectedResult).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ExpectedResult).ArrayNum;
  _Src = (param_1->ExpectedResult).AllocatorInstance.Data;
  (this->ExpectedResult).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  ::FString::FString(&this->DataType,&param_1->DataType);
  ::FString::FString(&this->EvaluationMethod,&param_1->EvaluationMethod);
  return this;
}

