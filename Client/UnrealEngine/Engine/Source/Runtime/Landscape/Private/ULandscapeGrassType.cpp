// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// StaticClass @ 145ef1610

UClass * __cdecl ULandscapeGrassType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGrassType",
               &Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton,
               StaticRegisterNativesULandscapeGrassType,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeGrassType>,
               InternalVTableHelperCtorCaller<ULandscapeGrassType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton;
}

// ULandscapeGrassType @ 145ef3b70

ULandscapeGrassType * __thiscall
ULandscapeGrassType::ULandscapeGrassType(ULandscapeGrassType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULandscapeGrassType__6B_;
  (this->GrassVarieties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassVarieties).ArrayNum = 0;
  (this->GrassVarieties).ArrayMax = 0;
  this->StateHash = 0;
  (this->GrassMesh_DEPRECATED).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  return this;
}

// ~ULandscapeGrassType @ 145ef42e0

void __thiscall ULandscapeGrassType::~ULandscapeGrassType(ULandscapeGrassType *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULandscapeGrassType__6B_;
  DestructItems<FGrassVariety,int>
            ((FGrassVariety *)(this->GrassVarieties).AllocatorInstance.Data,
             (this->GrassVarieties).ArrayNum);
  pFVar1 = (this->GrassVarieties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 145ef57e0

UClass * __cdecl ULandscapeGrassType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGrassType",
               &Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton,
               StaticRegisterNativesULandscapeGrassType,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULandscapeGrassType>,
               InternalVTableHelperCtorCaller<ULandscapeGrassType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeGrassType.InnerSingleton;
}

// StaticRegisterNativesULandscapeGrassType @ 145ef6030

void __cdecl ULandscapeGrassType::StaticRegisterNativesULandscapeGrassType(void)

{
  return;
}

// ULandscapeGrassType @ 145f42a10

ULandscapeGrassType * __thiscall
ULandscapeGrassType::ULandscapeGrassType(ULandscapeGrassType *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->GrassDensity_DEPRECATED = 400.0;
  this->_padding_ = (longlong)&___7ULandscapeGrassType__6B_;
  this->bEnableDensityScaling = 1;
  (this->GrassVarieties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrassVarieties).ArrayNum = 0;
  (this->GrassVarieties).ArrayMax = 0;
  this->StateHash = 0;
  (this->GrassMesh_DEPRECATED).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  this->StartCullDistance_DEPRECATED = 10000;
  this->EndCullDistance_DEPRECATED = 10000;
  this->PlacementJitter_DEPRECATED = 1.0;
  this->RandomRotation_DEPRECATED = true;
  this->AlignToSurface_DEPRECATED = true;
  return this;
}

// ComputeStateHash @ 145f4e9f0

uint __thiscall ULandscapeGrassType::ComputeStateHash(ULandscapeGrassType *this)

{
  uint uVar1;
  FArchiveCrc32 local_a8;
  
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  uVar1 = this->StateHash;
  this->StateHash = 0;
  (**(code **)(this->_padding_ + 200))(this,&local_a8);
  this->StateHash = uVar1;
  FArchive::~FArchive((FArchive *)&local_a8);
  return local_a8.CRC;
}

// PostLoad @ 145f59fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULandscapeGrassType::PostLoad(ULandscapeGrassType *this)

{
  int *piVar1;
  uint uVar2;
  UStaticMesh *pUVar3;
  TObjectPtr<UStaticMesh>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_2c8 [32];
  TObjectPtr<UStaticMesh>_u_0 *local_2a8;
  TObjectPtr<UStaticMesh>_u_0 *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  FArchiveCrc32 local_278;
  TObjectPtr<UStaticMesh>_u_0 local_1d8 [3];
  float local_1c0;
  float local_14c;
  int local_148;
  int local_d8;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  UObject::PostLoad((UObject *)this);
  if (((this->GrassMesh_DEPRECATED).field0_0x0.DebugPtr != (UStaticMesh *)0x0) &&
     ((this->GrassVarieties).ArrayNum == 0)) {
    FGrassVariety::FGrassVariety((FGrassVariety *)&local_1d8[0].ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->GrassMesh_DEPRECATED).field0_0x0.DebugPtr, pUVar3 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_1d8[0] = (this->GrassMesh_DEPRECATED).field0_0x0;
    local_1c0 = this->GrassDensity_DEPRECATED;
    pTVar4 = (TObjectPtr<UStaticMesh>_u_0 *)(this->GrassVarieties).AllocatorInstance.Data;
    local_148 = this->StartCullDistance_DEPRECATED;
    local_d8 = this->EndCullDistance_DEPRECATED;
    local_38 = this->RandomRotation_DEPRECATED;
    local_37 = this->AlignToSurface_DEPRECATED;
    local_14c = this->PlacementJitter_DEPRECATED;
    if ((pTVar4 <= local_1d8) &&
       (lVar8 = (longlong)(this->GrassVarieties).ArrayMax, local_1d8 < pTVar4 + lVar8 * 0x37)) {
      local_290 = (longlong)(this->GrassVarieties).ArrayNum;
      local_288 = 0x1b8;
      local_2a8 = local_1d8;
      local_2a0 = pTVar4;
      local_298 = lVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->GrassVarieties).ArrayNum;
    piVar1 = &(this->GrassVarieties).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1b8,8,&(this->GrassVarieties).AllocatorInstance,piVar1);
    }
    (this->GrassVarieties).ArrayNum = iVar7 + 1;
    FGrassVariety::FGrassVariety
              ((FGrassVariety *)
               ((this->GrassVarieties).AllocatorInstance.Data + (longlong)iVar7 * 0x1b8),
               (FGrassVariety *)&local_1d8[0].ObjectPtr);
    (this->GrassMesh_DEPRECATED).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
    FGrassVariety::~FGrassVariety((FGrassVariety *)&local_1d8[0].ObjectPtr);
  }
  FArchiveCrc32::FArchiveCrc32(&local_278,0,(UObject *)0x0);
  uVar2 = this->StateHash;
  this->StateHash = 0;
  (**(code **)(this->_padding_ + 200))(this,&local_278);
  this->StateHash = uVar2;
  FArchive::~FArchive((FArchive *)&local_278);
  this->StateHash = local_278.CRC;
  return;
}

