// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472dd390

UClass * __cdecl UMaterialFunctionEditorOnlyData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionEditorOnlyData,0x58,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialFunctionEditorOnlyData>,aFStackX_8,
               UMaterialFunctionInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton;
}

// UMaterialFunctionEditorOnlyData @ 1472e30c0

UMaterialFunctionEditorOnlyData * __thiscall
UMaterialFunctionEditorOnlyData::UMaterialFunctionEditorOnlyData
          (UMaterialFunctionEditorOnlyData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunctionEditorOnlyData__6B_;
  (this->ExpressionCollection).Expressions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).Expressions.ArrayNum = 0;
  (this->ExpressionCollection).Expressions.ArrayMax = 0;
  (this->ExpressionCollection).EditorComments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).EditorComments.ArrayNum = 0;
  (this->ExpressionCollection).EditorComments.ArrayMax = 0;
  (this->ExpressionCollection).ExpressionExecBegin.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ExpressionCollection).ExpressionExecEnd.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialFunctionEditorOnlyData @ 1472e3110

UMaterialFunctionEditorOnlyData * __thiscall
UMaterialFunctionEditorOnlyData::UMaterialFunctionEditorOnlyData
          (UMaterialFunctionEditorOnlyData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialFunctionEditorOnlyData__6B_;
  (this->ExpressionCollection).Expressions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).Expressions.ArrayNum = 0;
  (this->ExpressionCollection).Expressions.ArrayMax = 0;
  (this->ExpressionCollection).EditorComments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExpressionCollection).EditorComments.ArrayNum = 0;
  (this->ExpressionCollection).EditorComments.ArrayMax = 0;
  (this->ExpressionCollection).ExpressionExecBegin.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  (this->ExpressionCollection).ExpressionExecEnd.field0_0x0.DebugPtr = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialFunctionEditorOnlyData @ 1472e39a0

void __thiscall
UMaterialFunctionEditorOnlyData::~UMaterialFunctionEditorOnlyData
          (UMaterialFunctionEditorOnlyData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialFunctionEditorOnlyData__6B_;
  pFVar1 = (this->ExpressionCollection).EditorComments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExpressionCollection).Expressions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMaterialFunctionInterfaceEditorOnlyData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472e73e0

UClass * __cdecl UMaterialFunctionEditorOnlyData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialFunctionEditorOnlyData",
               &Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton,
               StaticRegisterNativesUMaterialFunctionEditorOnlyData,0x58,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialFunctionEditorOnlyData>,
               InternalVTableHelperCtorCaller<UMaterialFunctionEditorOnlyData>,local_res8,
               UMaterialFunctionInterfaceEditorOnlyData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialFunctionEditorOnlyData.InnerSingleton;
}

// StaticRegisterNativesUMaterialFunctionEditorOnlyData @ 1472e7a60

void __cdecl
UMaterialFunctionEditorOnlyData::StaticRegisterNativesUMaterialFunctionEditorOnlyData(void)

{
  return;
}

// PreSave @ 148b035c0

void __thiscall
UMaterialFunctionEditorOnlyData::PreSave
          (UMaterialFunctionEditorOnlyData *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

