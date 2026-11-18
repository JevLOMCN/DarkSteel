// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147297110

UClass * __cdecl UMaterialExpressionComment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComment",
               &Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComment,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComment>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComment>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton;
}

// UMaterialExpressionComment @ 14729c680

UMaterialExpressionComment * __thiscall
UMaterialExpressionComment::UMaterialExpressionComment
          (UMaterialExpressionComment *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionComment__6B_;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  FVar2 = FLinearColor::White;
  (this->Text).Data.ArrayMax = 0;
  this->bCommentBubbleVisible_InDetailsPanel = 0;
  this->bColorCommentBubble = 0;
  this->FontSize = 0x12;
  (this->CommentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bGroupMode = true;
  return this;
}

// UMaterialExpressionComment @ 14729c6e0

UMaterialExpressionComment * __thiscall
UMaterialExpressionComment::UMaterialExpressionComment
          (UMaterialExpressionComment *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FLinearColor FVar2;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionComment__6B_;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  FVar2 = FLinearColor::White;
  (this->Text).Data.ArrayMax = 0;
  this->bCommentBubbleVisible_InDetailsPanel = 0;
  this->bColorCommentBubble = 0;
  this->FontSize = 0x12;
  (this->CommentColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bGroupMode = true;
  return this;
}

// ~UMaterialExpressionComment @ 14729d870

void __thiscall
UMaterialExpressionComment::~UMaterialExpressionComment(UMaterialExpressionComment *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionComment__6B_;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a01d0

UClass * __cdecl UMaterialExpressionComment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionComment",
               &Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionComment,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionComment>,
               InternalVTableHelperCtorCaller<UMaterialExpressionComment>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionComment.InnerSingleton;
}

// IsAllowedIn @ 1472a19d0

bool __thiscall
UMaterialExpressionComment::IsAllowedIn(UMaterialExpressionComment *this,UObject *param_1)

{
  return false;
}

// StaticRegisterNativesUMaterialExpressionComment @ 1472a1ce0

void __cdecl UMaterialExpressionComment::StaticRegisterNativesUMaterialExpressionComment(void)

{
  return;
}

