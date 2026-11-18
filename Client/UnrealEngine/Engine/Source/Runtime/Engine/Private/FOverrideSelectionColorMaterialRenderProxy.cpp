// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FOverrideSelectionColorMaterialRenderProxy @ 147f66170

FOverrideSelectionColorMaterialRenderProxy * __thiscall
FOverrideSelectionColorMaterialRenderProxy::FOverrideSelectionColorMaterialRenderProxy
          (FOverrideSelectionColorMaterialRenderProxy *this,FMaterialRenderProxy *param_1,
          FLinearColor *param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  longlong lVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (FMaterialRenderProxy *)0x0) {
    pFVar3 = ::FString::FString(&local_28,L"FOverrideSelectionColorMaterialRenderProxy");
    pFVar3 = ::FString::FString(&local_38,pFVar3);
    FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)this,pFVar3);
  }
  else {
    _Src = (param_1->MaterialName).Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = (param_1->MaterialName).Data.ArrayNum;
    lVar4 = (longlong)local_48.Data.ArrayNum;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
    }
    pFVar3 = ::FString::FString(&local_38,&local_48);
    FMaterialRenderProxy::FMaterialRenderProxy((FMaterialRenderProxy *)this,pFVar3);
    local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->Parent = param_1;
  this->_padding_ = (longlong)&___7FOverrideSelectionColorMaterialRenderProxy__6B_;
  fVar1 = (param_2->field0_0x0)._s_0.B;
  fVar2 = (param_2->field0_0x0)._s_0.G;
  (this->SelectionColor).field0_0x0._s_0.R = (param_2->field0_0x0)._s_0.R;
  (this->SelectionColor).field0_0x0._s_0.G = fVar2;
  (this->SelectionColor).field0_0x0._s_0.B = fVar1;
  (this->SelectionColor).field0_0x0._s_0.A = 1.0;
  return this;
}

// GetFallback @ 147f79cc0

FMaterialRenderProxy * __thiscall
FOverrideSelectionColorMaterialRenderProxy::GetFallback
          (FOverrideSelectionColorMaterialRenderProxy *this,Type param_1)

{
  FMaterialRenderProxy *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f79cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterialRenderProxy *)(**(code **)(this->Parent->_padding_ + 0x38))();
  return pFVar1;
}

// GetMaterialNoFallback @ 147f79fd0

FMaterial * __thiscall
FOverrideSelectionColorMaterialRenderProxy::GetMaterialNoFallback
          (FOverrideSelectionColorMaterialRenderProxy *this,Type param_1)

{
  FMaterial *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147f79fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterial *)(**(code **)(this->Parent->_padding_ + 0x30))();
  return pFVar1;
}

// GetParameterValue @ 147f7add0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FOverrideSelectionColorMaterialRenderProxy::GetParameterValue
          (FOverrideSelectionColorMaterialRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  undefined4 uVar1;
  double dVar2;
  undefined1 uVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined1 local_res10 [8];
  int local_48;
  double local_28;
  double dStack_20;
  undefined7 uStack_17;
  
  if (param_1 == Vector) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
    uVar1 = (param_2->Name).ComparisonIndex;
    if ((*(int *)CONCAT44(extraout_var,FVar4.Value) == uVar1) && ((param_2->Name).Number == 0)) {
      dVar2 = *(double *)((longlong)&(this->SelectionColor).field0_0x0 + 8);
      (param_3->field0_0x0).Double[0] = *(double *)&(this->SelectionColor).field0_0x0;
      (param_3->field0_0x0).Double[1] = dVar2;
      (param_3->field0_0x0).Double[2] = local_28;
      (param_3->field0_0x0).Double[3] = dStack_20;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_17,1);
      return true;
    }
  }
  uVar3 = (**(code **)(this->Parent->_padding_ + 0x48))
                    (this->Parent,param_1,param_2,param_3,param_4);
  return (bool)uVar3;
}

