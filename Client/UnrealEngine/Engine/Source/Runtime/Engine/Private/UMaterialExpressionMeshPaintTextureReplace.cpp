// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb1a0

UClass * __cdecl UMaterialExpressionMeshPaintTextureReplace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMeshPaintTextureReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMeshPaintTextureReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMeshPaintTextureReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMeshPaintTextureReplace>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton;
}

// UMaterialExpressionMeshPaintTextureReplace @ 1472bfdd0

UMaterialExpressionMeshPaintTextureReplace * __thiscall
UMaterialExpressionMeshPaintTextureReplace::UMaterialExpressionMeshPaintTextureReplace
          (UMaterialExpressionMeshPaintTextureReplace *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMeshPaintTextureReplace__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->MeshPaintTexture).OutputIndex = 0;
  (this->MeshPaintTexture).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MeshPaintTexture).InputName.Number = 0;
  (this->MeshPaintTexture).MaskR = 0;
  (this->MeshPaintTexture).MaskG = 0;
  (this->MeshPaintTexture).MaskB = 0;
  (this->MeshPaintTexture).MaskA = 0;
  (this->MeshPaintTexture).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionMeshPaintTextureReplace @ 1472c1fd0

void __thiscall
UMaterialExpressionMeshPaintTextureReplace::~UMaterialExpressionMeshPaintTextureReplace
          (UMaterialExpressionMeshPaintTextureReplace *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMeshPaintTextureReplace__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c44b0

UClass * __cdecl UMaterialExpressionMeshPaintTextureReplace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMeshPaintTextureReplace",
               &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionMeshPaintTextureReplace,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMeshPaintTextureReplace>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMeshPaintTextureReplace>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureReplace.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMeshPaintTextureReplace @ 1472c7430

void __cdecl
UMaterialExpressionMeshPaintTextureReplace::
StaticRegisterNativesUMaterialExpressionMeshPaintTextureReplace(void)

{
  return;
}

// UMaterialExpressionMeshPaintTextureReplace @ 148afd1c0

UMaterialExpressionMeshPaintTextureReplace * __thiscall
UMaterialExpressionMeshPaintTextureReplace::UMaterialExpressionMeshPaintTextureReplace
          (UMaterialExpressionMeshPaintTextureReplace *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  UMaterialExpressionMeshPaintTextureReplace *pUVar6;
  FName local_res8;
  FName local_28;
  FName FStack_20;
  FName FStack_18;
  uint local_10;
  
  UObject::UObject((UObject *)this,param_1);
  plVar1 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMeshPaintTextureReplace__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *plVar1 = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->MeshPaintTexture).OutputIndex = 0;
  (this->MeshPaintTexture).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->MeshPaintTexture).InputName.Number = 0;
  (this->MeshPaintTexture).MaskR = 0;
  (this->MeshPaintTexture).MaskG = 0;
  (this->MeshPaintTexture).MaskB = 0;
  (this->MeshPaintTexture).MaskA = 0;
  (this->MeshPaintTexture).Expression = (UMaterialExpression *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar5 = ::FName::FName(&local_res8,L"");
  local_28 = *pFVar5;
  local_10 = 0;
  FStack_20.ComparisonIndex.Value = 0;
  FStack_20.Number = 0;
  FStack_18.ComparisonIndex.Value = 0;
  FStack_18.Number = 0;
  if (((FName *)*plVar1 <= &local_28) &&
     (&local_28 < (FName *)(*plVar1 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x1c))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UMaterialExpressionMeshPaintTextureReplace *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  pFVar5 = (FName *)(*plVar1 + (longlong)iVar4 * 0x1c);
  *pFVar5 = local_28;
  pFVar5[1] = FStack_20;
  pFVar5[2] = FStack_18;
  pFVar5[3].ComparisonIndex.Value = local_10;
  return this;
}

