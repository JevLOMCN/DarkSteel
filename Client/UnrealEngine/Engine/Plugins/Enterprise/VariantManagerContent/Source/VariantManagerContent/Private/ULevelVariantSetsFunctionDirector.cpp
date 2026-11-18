// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 7

// StaticClass @ 14e2d1080

UClass * __cdecl ULevelVariantSetsFunctionDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsFunctionDirector",
               &Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton,
               StaticRegisterNativesULevelVariantSetsFunctionDirector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSetsFunctionDirector>,
               InternalVTableHelperCtorCaller<ULevelVariantSetsFunctionDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton;
}

// ULevelVariantSetsFunctionDirector @ 14e2d4660

ULevelVariantSetsFunctionDirector * __thiscall
ULevelVariantSetsFunctionDirector::ULevelVariantSetsFunctionDirector
          (ULevelVariantSetsFunctionDirector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelVariantSetsFunctionDirector__6B_;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  return this;
}

// ULevelVariantSetsFunctionDirector @ 14e2d46a0

ULevelVariantSetsFunctionDirector * __thiscall
ULevelVariantSetsFunctionDirector::ULevelVariantSetsFunctionDirector
          (ULevelVariantSetsFunctionDirector *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelVariantSetsFunctionDirector__6B_;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  return this;
}

// BeginDestroy @ 14e2da880

void __thiscall
ULevelVariantSetsFunctionDirector::BeginDestroy(ULevelVariantSetsFunctionDirector *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDestroy,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnDestroy).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnDestroy).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnDestroy).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnDestroy).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnDestroy).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnDestroy,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2de370

UClass * __cdecl ULevelVariantSetsFunctionDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsFunctionDirector",
               &Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton,
               StaticRegisterNativesULevelVariantSetsFunctionDirector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSetsFunctionDirector>,
               InternalVTableHelperCtorCaller<ULevelVariantSetsFunctionDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton;
}

// GetWorld @ 14e2e0470

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
ULevelVariantSetsFunctionDirector::GetWorld(ULevelVariantSetsFunctionDirector *this)

{
  UClass *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// StaticRegisterNativesULevelVariantSetsFunctionDirector @ 14e2e7030

void __cdecl
ULevelVariantSetsFunctionDirector::StaticRegisterNativesULevelVariantSetsFunctionDirector(void)

{
  return;
}

