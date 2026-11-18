// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 11

// StaticClass @ 14ca40da0

UClass * __cdecl UMultiSelectionMeshEditingTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiSelectionMeshEditingTool",
               &Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton,
               StaticRegisterNativesUMultiSelectionMeshEditingTool,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiSelectionMeshEditingTool>,
               InternalVTableHelperCtorCaller<UMultiSelectionMeshEditingTool>,local_res8,
               UMultiSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton;
}

// UMultiSelectionMeshEditingTool @ 14ca683a0

UMultiSelectionMeshEditingTool * __thiscall
UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool
          (UMultiSelectionMeshEditingTool *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UMultiSelectionMeshEditingTool @ 14ca68400

UMultiSelectionMeshEditingTool * __thiscall
UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool(UMultiSelectionMeshEditingTool *this)

{
  undefined8 local_res8 [4];
  
  UMultiSelectionTool::UMultiSelectionTool((UMultiSelectionTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  (this->TargetWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UMultiSelectionMeshEditingTool @ 14ca6b830

void __thiscall
UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool
          (UMultiSelectionMeshEditingTool *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionMeshEditingTool__6B_;
  UMultiSelectionTool::~UMultiSelectionTool((UMultiSelectionTool *)this);
  return;
}

// GetMapToSharedSourceData @ 14ca90110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UMultiSelectionMeshEditingTool::GetMapToSharedSourceData
          (UMultiSelectionMeshEditingTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UObjectBaseUtility *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool local_res18;
  longlong local_res20;
  longlong local_58;
  longlong local_50;
  
  local_res18 = false;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_1,(int)this->_padding_,Default)
  ;
  uVar11 = 0;
  if ((int)this->_padding_ < 1) {
    return false;
  }
  lVar14 = 0;
  do {
    uVar13 = 0;
    if ((int)uVar11 < param_1->ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar11 = uVar11 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + lVar14) = 0xffffffff;
    lVar14 = lVar14 + 4;
    iVar1 = (int)this->_padding_;
  } while ((int)uVar11 < iVar1);
  uVar11 = 0;
  if (iVar1 < 1) {
    local_res18 = false;
  }
  else {
    local_50 = 0;
    local_58 = 1;
    local_res20 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + local_50) < 0) {
        uVar13 = 0;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        *(uint *)((param_1->AllocatorInstance).Data + local_50) = uVar11;
        uVar13 = 0;
        if ((int)uVar11 < (int)this->_padding_) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pUVar2 = *(UObjectBaseUtility **)(local_res20 + this->_padding_);
        if (pUVar2 != (UObjectBaseUtility *)0x0) {
          pUVar6 = Z_Construct_UClass_UAssetBackedTarget_NoRegister();
          plVar7 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar6);
          if ((plVar7 != (longlong *)0x0) &&
             (uVar13 = uVar11 + 1, lVar14 = local_58, (int)uVar13 < (int)this->_padding_)) {
            do {
              uVar12 = 0;
              if ((int)uVar13 < (int)this->_padding_) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pUVar2 = *(UObjectBaseUtility **)(this->_padding_ + lVar14 * 8);
              if (pUVar2 != (UObjectBaseUtility *)0x0) {
                pUVar6 = Z_Construct_UClass_UAssetBackedTarget_NoRegister();
                plVar8 = UObjectBaseUtility::GetInterfaceAddress(pUVar2,pUVar6);
                if (plVar8 != (longlong *)0x0) {
                  lVar9 = (**(code **)(*plVar7 + 0x10))(plVar7);
                  lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8);
                  if (lVar10 == lVar9) {
                    local_res18 = true;
                    uVar12 = 0;
                    if ((int)uVar13 < param_1->ArrayNum) {
                      uVar12 = ~uVar13 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      uVar5 = (*pcVar3)();
                      return (bool)uVar5;
                    }
                    *(uint *)((param_1->AllocatorInstance).Data + lVar14 * 4) = uVar11;
                  }
                }
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 1;
            } while ((int)uVar13 < (int)this->_padding_);
          }
        }
      }
      local_res20 = local_res20 + 8;
      local_50 = local_50 + 4;
      local_58 = local_58 + 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)this->_padding_);
  }
  return local_res18;
}

// GetPrivateStaticClass @ 14ca91af0

UClass * __cdecl UMultiSelectionMeshEditingTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MultiSelectionMeshEditingTool",
               &Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton,
               StaticRegisterNativesUMultiSelectionMeshEditingTool,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiSelectionMeshEditingTool>,
               InternalVTableHelperCtorCaller<UMultiSelectionMeshEditingTool>,local_res8,
               UMultiSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.InnerSingleton;
}

// GetTargetWorld @ 14ca93730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UMultiSelectionMeshEditingTool::GetTargetWorld(UMultiSelectionMeshEditingTool *this)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)FWeakObjectPtr::Get(&(this->TargetWorld).WeakPtr);
  return pUVar1;
}

// OnShutdown @ 14ca9c410

void __thiscall
UMultiSelectionMeshEditingTool::OnShutdown
          (UMultiSelectionMeshEditingTool *this,EToolShutdownType param_1)

{
  return;
}

// SetWorld @ 14caa4ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMultiSelectionMeshEditingTool::SetWorld(UMultiSelectionMeshEditingTool *this,UWorld *param_1)

{
  UWorld *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->TargetWorld).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Shutdown @ 14caa6600

void __thiscall
UMultiSelectionMeshEditingTool::Shutdown
          (UMultiSelectionMeshEditingTool *this,EToolShutdownType param_1)

{
  undefined7 in_register_00000011;
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,CONCAT71(in_register_00000011,param_1));
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  (this->TargetWorld).WeakPtr = local_res8[0];
  return;
}

// StaticRegisterNativesUMultiSelectionMeshEditingTool @ 14caa7200

void __cdecl
UMultiSelectionMeshEditingTool::StaticRegisterNativesUMultiSelectionMeshEditingTool(void)

{
  return;
}

