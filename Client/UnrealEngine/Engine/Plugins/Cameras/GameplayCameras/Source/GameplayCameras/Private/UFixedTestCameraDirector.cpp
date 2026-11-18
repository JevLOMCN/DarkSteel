// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// StaticClass @ 14d64a810

UClass * __cdecl UFixedTestCameraDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FixedTestCameraDirector",
               &Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton,
               StaticRegisterNativesUFixedTestCameraDirector,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFixedTestCameraDirector>,
               InternalVTableHelperCtorCaller<UFixedTestCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton;
}

// UFixedTestCameraDirector @ 14d657370

UFixedTestCameraDirector * __thiscall
UFixedTestCameraDirector::UFixedTestCameraDirector
          (UFixedTestCameraDirector *this,FVTableHelper *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
  (this->CameraRigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigs).ArrayNum = 0;
  (this->CameraRigs).ArrayMax = 0;
  (this->CameraRigNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigNames).ArrayNum = 0;
  (this->CameraRigNames).ArrayMax = 0;
  return this;
}

// UFixedTestCameraDirector @ 14d6573b0

UFixedTestCameraDirector * __thiscall
UFixedTestCameraDirector::UFixedTestCameraDirector
          (UFixedTestCameraDirector *this,FObjectInitializer *param_1)

{
  UCameraDirector::UCameraDirector((UCameraDirector *)this,param_1);
  this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
  (this->CameraRigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigs).ArrayNum = 0;
  (this->CameraRigs).ArrayMax = 0;
  (this->CameraRigNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigNames).ArrayNum = 0;
  (this->CameraRigNames).ArrayMax = 0;
  return this;
}

// ~UFixedTestCameraDirector @ 14d658410

void __thiscall UFixedTestCameraDirector::~UFixedTestCameraDirector(UFixedTestCameraDirector *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
  pFVar1 = (this->CameraRigNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraRigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  return;
}

// AddCameraRig @ 14d65b5c0

void __thiscall
UFixedTestCameraDirector::AddCameraRig
          (UFixedTestCameraDirector *this,UCameraRigAsset *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_res18 [2];
  UCameraRigAsset *local_18 [2];
  
  local_res18[0] = param_2;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->CameraRigs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->CameraRigs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CameraRigs).ArrayNum;
  piVar1 = &(this->CameraRigs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CameraRigs).AllocatorInstance,piVar1);
  }
  (this->CameraRigs).ArrayNum = iVar6 + 1;
  *(UCameraRigAsset **)((this->CameraRigs).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  pFVar3 = (FName *)(this->CameraRigNames).AllocatorInstance.Data;
  if ((pFVar3 <= local_res18) && (local_res18 < pFVar3 + (this->CameraRigNames).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CameraRigNames).ArrayNum;
  piVar1 = &(this->CameraRigNames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->CameraRigNames).AllocatorInstance,piVar1);
  }
  (this->CameraRigNames).ArrayNum = iVar6 + 1;
  *(FName *)((this->CameraRigNames).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res18[0];
  return;
}

// GetCameraRig @ 14d65fac0

UCameraRigAsset * __thiscall
UFixedTestCameraDirector::GetCameraRig(UFixedTestCameraDirector *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UCameraRigAsset *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->CameraRigs).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->CameraRigs).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UCameraRigAsset *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UCameraRigAsset **)((this->CameraRigs).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (UCameraRigAsset *)0x0;
}

// GetCameraRigIndex @ 14d65fb50

int __thiscall
UFixedTestCameraDirector::GetCameraRigIndex(UFixedTestCameraDirector *this,FName param_1)

{
  FName *pFVar1;
  int iVar2;
  FName *pFVar3;
  
  pFVar1 = (FName *)(this->CameraRigNames).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  if (pFVar1 != pFVar1 + (this->CameraRigNames).ArrayNum) {
    while (*pFVar3 != param_1) {
      pFVar3 = pFVar3 + 1;
      if (pFVar3 == pFVar1 + (this->CameraRigNames).ArrayNum) {
        return -1;
      }
    }
    iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
    if ((-1 < iVar2) && (iVar2 < (this->CameraRigs).ArrayNum)) {
      return iVar2;
    }
  }
  return -1;
}

// GetPrivateStaticClass @ 14d660bd0

UClass * __cdecl UFixedTestCameraDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FixedTestCameraDirector",
               &Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton,
               StaticRegisterNativesUFixedTestCameraDirector,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFixedTestCameraDirector>,
               InternalVTableHelperCtorCaller<UFixedTestCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton;
}

// OnBuildEvaluator @ 14d665b60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraDirectorEvaluator * __thiscall
UFixedTestCameraDirector::OnBuildEvaluator
          (UFixedTestCameraDirector *this,FCameraDirectorEvaluatorBuilder *param_1)

{
  FFixedTextCameraDirectorEvaluator *pFVar1;
  
  pFVar1 = UE::Cameras::FCameraDirectorEvaluatorStorage::
           BuildEvaluator<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>(param_1->Storage);
  return (FCameraDirectorEvaluator *)pFVar1;
}

// OnGatherRigUsageInfo @ 14d667080

void __thiscall
UFixedTestCameraDirector::OnGatherRigUsageInfo
          (UFixedTestCameraDirector *this,FCameraDirectorRigUsageInfo *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (FCameraDirectorRigUsageInfo *)&this->CameraRigs) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->CameraRigs).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,(ForAnyElementType *)param_1,&(param_1->CameraRigs).ArrayNum,
                       &(param_1->CameraRigs).ArrayMax);
    ConstructItems<UCameraRigAsset_*,TObjectPtr<UCameraRigAsset>,int>
              ((param_1->CameraRigs).AllocatorInstance.Data + (longlong)iVar4 * 8,
               (TObjectPtr<UCameraRigAsset> *)(this->CameraRigs).AllocatorInstance.Data,iVar1);
  }
  return;
}

// StaticRegisterNativesUFixedTestCameraDirector @ 14d6733c0

void __cdecl UFixedTestCameraDirector::StaticRegisterNativesUFixedTestCameraDirector(void)

{
  return;
}

