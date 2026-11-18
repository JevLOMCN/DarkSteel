// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b67c0

UClass * __cdecl UGLTFLevelVariantSetsExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelVariantSetsExporter",
               &Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelVariantSetsExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelVariantSetsExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelVariantSetsExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton;
}

// UGLTFLevelVariantSetsExporter @ 14e5d3620

UGLTFLevelVariantSetsExporter * __thiscall
UGLTFLevelVariantSetsExporter::UGLTFLevelVariantSetsExporter
          (UGLTFLevelVariantSetsExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelVariantSetsExporter__6B_;
  return this;
}

// UGLTFLevelVariantSetsExporter @ 14e5d3650

UGLTFLevelVariantSetsExporter * __thiscall
UGLTFLevelVariantSetsExporter::UGLTFLevelVariantSetsExporter
          (UGLTFLevelVariantSetsExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelVariantSetsExporter__6B_;
  pUVar1 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFLevelVariantSetsExporter @ 14e5d7fc0

void __thiscall
UGLTFLevelVariantSetsExporter::~UGLTFLevelVariantSetsExporter(UGLTFLevelVariantSetsExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5ded10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGLTFLevelVariantSetsExporter::AddObject
          (UGLTFLevelVariantSetsExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int iVar1;
  UWorld *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FGLTFJsonScene *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FName local_res18;
  FName local_res20;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TArray<UWorld_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2 == (UObject *)0x0) {
    pFVar8 = GetTypeName<ULevelVariantSets>(&local_48);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar6 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    pFVar8 = GetTypeName<ULevelVariantSets>(&local_38);
    pwVar10 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UObject_const_>(&local_28,param_2);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar10,pwVar9);
  }
  if (*(char *)(*(longlong *)&param_1->field_0x18 + 0xb2) == '\0') {
    local_res18.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_res18.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_res18,&local_108);
    ::FString::PrintfImpl
              (&local_98,
               L"Failed to export level variant sets %s because material variants are disabled by export options"
              );
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_98);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    return false;
  }
  FGLTFExporterUtilities::GetAssociatedWorlds(&local_a8,param_2);
  if (local_a8.ArrayNum == 0) {
    local_res20.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_res20.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_res20,&local_f8);
    ::FString::PrintfImpl
              (&local_88,L"Failed to export level variant sets %s because no associated level");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_88);
    local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    }
  }
  else if (local_a8.ArrayNum < 2) {
    if ((local_a8.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar2 = *(UWorld **)local_a8.AllocatorInstance.Data;
    pFVar7 = FGLTFConvertBuilder::AddUniqueScene((FGLTFConvertBuilder *)param_1,pUVar2);
    if (pFVar7 == (FGLTFJsonScene *)0x0) {
      local_120.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_120.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_120,&local_c8);
      local_118 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_118,&local_d8);
      ::FString::PrintfImpl(&local_68,L"Failed to export level %s for level variant sets %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      }
    }
    else {
      if (0 < *(int *)&param_1->field_0x3a8) {
        bVar4 = true;
        **(undefined8 **)&param_1->field_0x110 = pFVar7;
        goto LAB_14e5df018;
      }
      local_110.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_110.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_110,&local_b8);
      ::FString::PrintfImpl
                (&local_58,L"Failed to export any supported variant from level variant sets %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_58);
      local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    local_128.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_128.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_128,&local_e8);
    ::FString::PrintfImpl
              (&local_78,
               L"Failed to export level variant sets %s because more than one associated level");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
LAB_14e5df018:
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar4;
}

// GetPrivateStaticClass @ 14e5fc7a0

UClass * __cdecl UGLTFLevelVariantSetsExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelVariantSetsExporter",
               &Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelVariantSetsExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelVariantSetsExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelVariantSetsExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFLevelVariantSetsExporter @ 14e614d20

void __cdecl UGLTFLevelVariantSetsExporter::StaticRegisterNativesUGLTFLevelVariantSetsExporter(void)

{
  return;
}

