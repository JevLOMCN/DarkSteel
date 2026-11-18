// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace15c0

UClass * __cdecl UPaperTerrainMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainMaterial",
               &Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton,
               StaticRegisterNativesUPaperTerrainMaterial,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPaperTerrainMaterial>,
               InternalVTableHelperCtorCaller<UPaperTerrainMaterial>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton;
}

// UPaperTerrainMaterial @ 14aceada0

UPaperTerrainMaterial * __thiscall
UPaperTerrainMaterial::UPaperTerrainMaterial(UPaperTerrainMaterial *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
  (this->Rules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rules).ArrayNum = 0;
  (this->Rules).ArrayMax = 0;
  (this->InteriorFill).field0_0x0.DebugPtr = (UPaperSprite *)0x0;
  return this;
}

// UPaperTerrainMaterial @ 14aceade0

UPaperTerrainMaterial * __thiscall
UPaperTerrainMaterial::UPaperTerrainMaterial
          (UPaperTerrainMaterial *this,FObjectInitializer *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPaperTerrainMaterial *pUVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  pFVar8 = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
  piVar1 = &(this->Rules).ArrayMax;
  (this->Rules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rules).ArrayNum = 0;
  *piVar1 = 0;
  (this->InteriorFill).field0_0x0.DebugPtr = (UPaperSprite *)0x0;
  uVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x838,&(this->Rules).AllocatorInstance,piVar1);
  (this->Rules).ArrayNum = uVar4 + 1;
  uVar6 = 0;
  if ((int)uVar4 < (int)(uVar4 + 1)) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UPaperTerrainMaterial *)(*pcVar2)();
    return pUVar5;
  }
  pFVar7 = (this->Rules).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    *(undefined8 *)(pFVar7 + 0x10) = 0;
    *(undefined8 *)(pFVar7 + 0x18) = 0;
    pFVar7[0x28] = (FScriptContainerElement)0x1;
    *(undefined8 *)(pFVar7 + 0x2c) = 0;
    pFVar8 = pFVar7;
  }
  *(undefined4 *)(pFVar8 + 0x20) = 0;
  *(undefined4 *)(pFVar8 + 0x24) = 0x43b40000;
  return this;
}

// ~UPaperTerrainMaterial @ 14acebd70

void __thiscall UPaperTerrainMaterial::~UPaperTerrainMaterial(UPaperTerrainMaterial *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperTerrainMaterial__6B_;
  DestructItems<FPaperTerrainMaterialRule,int>
            ((FPaperTerrainMaterialRule *)(this->Rules).AllocatorInstance.Data,
             (this->Rules).ArrayNum);
  pFVar1 = (this->Rules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14acfd5d0

UClass * __cdecl UPaperTerrainMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainMaterial",
               &Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton,
               StaticRegisterNativesUPaperTerrainMaterial,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPaperTerrainMaterial>,
               InternalVTableHelperCtorCaller<UPaperTerrainMaterial>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainMaterial.InnerSingleton;
}

// StaticRegisterNativesUPaperTerrainMaterial @ 14ad0e100

void __cdecl UPaperTerrainMaterial::StaticRegisterNativesUPaperTerrainMaterial(void)

{
  return;
}

