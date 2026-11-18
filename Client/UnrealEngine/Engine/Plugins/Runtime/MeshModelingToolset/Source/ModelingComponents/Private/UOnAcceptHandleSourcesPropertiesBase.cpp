// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// StaticClass @ 14caadcb0

UClass * __cdecl UOnAcceptHandleSourcesPropertiesBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesPropertiesBase",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesPropertiesBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesPropertiesBase>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesPropertiesBase>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton;
}

// UOnAcceptHandleSourcesPropertiesBase @ 14cace2b0

UOnAcceptHandleSourcesPropertiesBase * __thiscall
UOnAcceptHandleSourcesPropertiesBase::UOnAcceptHandleSourcesPropertiesBase
          (UOnAcceptHandleSourcesPropertiesBase *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined ***)this = &___7UOnAcceptHandleSourcesPropertiesBase__6B_;
  return this;
}

// UOnAcceptHandleSourcesPropertiesBase @ 14cace2e0

UOnAcceptHandleSourcesPropertiesBase * __thiscall
UOnAcceptHandleSourcesPropertiesBase::UOnAcceptHandleSourcesPropertiesBase
          (UOnAcceptHandleSourcesPropertiesBase *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined ***)this = &___7UOnAcceptHandleSourcesPropertiesBase__6B_;
  return this;
}

// ~UOnAcceptHandleSourcesPropertiesBase @ 14cad25f0

void __thiscall
UOnAcceptHandleSourcesPropertiesBase::~UOnAcceptHandleSourcesPropertiesBase
          (UOnAcceptHandleSourcesPropertiesBase *this)

{
  *(undefined ***)this = &___7UOnAcceptHandleSourcesPropertiesBase__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// ApplyMethod @ 14caeb510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UOnAcceptHandleSourcesPropertiesBase::ApplyMethod
          (UOnAcceptHandleSourcesPropertiesBase *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UInteractiveToolManager *param_2,
          AActor *param_3)

{
  code *pcVar1;
  AActor *this_00;
  int iVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  UWorld *this_01;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  FText local_38;
  
  bVar4 = (**(code **)(*(longlong *)this + 0x2c8))();
  if (((param_1->ArrayNum != 1) || (1 < (byte)(bVar4 - 3))) && (bVar4 != 2)) {
    if (((byte)(bVar4 - 1) < 2) || (4 < bVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      pcVar1 = *(code **)(param_2->_padding_ + 0x10);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"UOnAcceptHandleSourcesProperties",L"RemoveSources",
                          L"Remove Inputs");
      (*pcVar1)(&param_2->_padding_,pFVar7);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    uVar8 = (ulonglong)(bVar4 == 3);
    iVar2 = param_1->ArrayNum + -1;
    if (bVar4 != 4) {
      iVar2 = param_1->ArrayNum;
    }
    uVar10 = uVar8;
    for (; (longlong)uVar8 < (longlong)iVar2; uVar8 = uVar8 + 1) {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(AActor **)((param_1->AllocatorInstance).Data + uVar8 * 8);
      if ((((this_00 != param_3) && (bVar3)) && (this_00 != (AActor *)0x0)) &&
         (this_01 = AActor::GetWorld(this_00), this_01 != (UWorld *)0x0)) {
        UWorld::DestroyActor(this_01,this_00,false,true);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
    }
    if (bVar3) {
      (**(code **)(param_2->_padding_ + 0x18))(&param_2->_padding_);
    }
  }
  return;
}

// GetHandleInputs @ 14cb10270

EHandleSourcesMethod __thiscall
UOnAcceptHandleSourcesPropertiesBase::GetHandleInputs(UOnAcceptHandleSourcesPropertiesBase *this)

{
  return KeepSources;
}

// GetPrivateStaticClass @ 14cb128e0

UClass * __cdecl UOnAcceptHandleSourcesPropertiesBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"OnAcceptHandleSourcesPropertiesBase",
               &Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton,
               StaticRegisterNativesUOnAcceptHandleSourcesPropertiesBase,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UOnAcceptHandleSourcesPropertiesBase>,
               InternalVTableHelperCtorCaller<UOnAcceptHandleSourcesPropertiesBase>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnAcceptHandleSourcesPropertiesBase.InnerSingleton;
}

// StaticRegisterNativesUOnAcceptHandleSourcesPropertiesBase @ 14cb3eba0

void __cdecl
UOnAcceptHandleSourcesPropertiesBase::StaticRegisterNativesUOnAcceptHandleSourcesPropertiesBase
          (void)

{
  return;
}

