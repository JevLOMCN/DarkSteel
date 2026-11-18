// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472baea0

UClass * __cdecl UMaterialExpressionMeshPaintTextureObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMeshPaintTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMeshPaintTextureObject,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMeshPaintTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMeshPaintTextureObject>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton;
}

// UMaterialExpressionMeshPaintTextureObject @ 1472bfda0

UMaterialExpressionMeshPaintTextureObject * __thiscall
UMaterialExpressionMeshPaintTextureObject::UMaterialExpressionMeshPaintTextureObject
          (UMaterialExpressionMeshPaintTextureObject *this,FVTableHelper *param_1)

{
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  *(undefined ***)this = &___7UMaterialExpressionMeshPaintTextureObject__6B_;
  return this;
}

// ~UMaterialExpressionMeshPaintTextureObject @ 1472c1fb0

void __thiscall
UMaterialExpressionMeshPaintTextureObject::~UMaterialExpressionMeshPaintTextureObject
          (UMaterialExpressionMeshPaintTextureObject *this)

{
  *(undefined ***)this = &___7UMaterialExpressionMeshPaintTextureObject__6B_;
  UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this);
  return;
}

// GetPrivateStaticClass @ 1472c43f0

UClass * __cdecl UMaterialExpressionMeshPaintTextureObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionMeshPaintTextureObject",
               &Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMeshPaintTextureObject,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMeshPaintTextureObject>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMeshPaintTextureObject>,local_res8,
               UMaterialExpressionExternalCodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMeshPaintTextureObject.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMeshPaintTextureObject @ 1472c7420

void __cdecl
UMaterialExpressionMeshPaintTextureObject::
StaticRegisterNativesUMaterialExpressionMeshPaintTextureObject(void)

{
  return;
}

// UMaterialExpressionMeshPaintTextureObject @ 148afd070

UMaterialExpressionMeshPaintTextureObject * __thiscall
UMaterialExpressionMeshPaintTextureObject::UMaterialExpressionMeshPaintTextureObject
          (UMaterialExpressionMeshPaintTextureObject *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  UMaterialExpressionMeshPaintTextureObject *pUVar7;
  FName local_res8;
  FName local_28;
  FName FStack_20;
  FName FStack_18;
  uint local_10;
  
  UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
            ((UMaterialExpressionExternalCodeBase *)this,param_1);
  puVar2 = &this->field_0xa0;
  *(undefined ***)this = &___7UMaterialExpressionMeshPaintTextureObject__6B_;
  puVar1 = &this->field_0xac;
  *(undefined4 *)&this->field_0xa8 = 0;
  if (*(int *)puVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)puVar2,0,(int *)puVar1);
  }
  pFVar6 = ::FName::FName(&local_res8,L"");
  local_28 = *pFVar6;
  local_10 = 0;
  FStack_20.ComparisonIndex.Value = 0;
  FStack_20.Number = 0;
  FStack_18.ComparisonIndex.Value = 0;
  FStack_18.Number = 0;
  if ((*(FName **)puVar2 <= &local_28) &&
     (&local_28 < (FName *)((longlong)*(FName **)puVar2 + (longlong)*(int *)puVar1 * 0x1c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UMaterialExpressionMeshPaintTextureObject *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = *(int *)&this->field_0xa8;
  if (iVar5 == *(int *)puVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  *(int *)&this->field_0xa8 = iVar5 + 1;
  pFVar6 = (FName *)(*(longlong *)puVar2 + (longlong)iVar5 * 0x1c);
  *pFVar6 = local_28;
  pFVar6[1] = FStack_20;
  pFVar6[2] = FStack_18;
  pFVar6[3].ComparisonIndex.Value = local_10;
  return this;
}

