// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b66c0

UClass * __cdecl UGLTFLevelSequenceExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelSequenceExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton;
}

// UGLTFLevelSequenceExporter @ 14e5d3590

UGLTFLevelSequenceExporter * __thiscall
UGLTFLevelSequenceExporter::UGLTFLevelSequenceExporter
          (UGLTFLevelSequenceExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelSequenceExporter__6B_;
  return this;
}

// UGLTFLevelSequenceExporter @ 14e5d35c0

UGLTFLevelSequenceExporter * __thiscall
UGLTFLevelSequenceExporter::UGLTFLevelSequenceExporter
          (UGLTFLevelSequenceExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelSequenceExporter__6B_;
  pUVar1 = Z_Construct_UClass_ULevelSequence_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFLevelSequenceExporter @ 14e5d7fa0

void __thiscall
UGLTFLevelSequenceExporter::~UGLTFLevelSequenceExporter(UGLTFLevelSequenceExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5de930

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
UGLTFLevelSequenceExporter::AddObject
          (UGLTFLevelSequenceExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int iVar1;
  UWorld *pUVar2;
  ULevel *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  FGLTFJsonScene *pFVar8;
  FGLTFJsonAnimation *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ULevelSequence *local_res18;
  FName local_res20;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  UObject *local_118;
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
    pFVar10 = GetTypeName<ULevelSequence>(&local_48);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar7 = Z_Construct_UClass_ULevelSequence_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    pFVar10 = GetTypeName<ULevelSequence>(&local_38);
    pwVar12 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UObject_const_>(&local_28,param_2);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar11);
  }
  if (*(char *)(*(longlong *)&param_1->field_0x18 + 0xa2) == '\0') {
    local_res20.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_res20.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_res20,&local_108);
    ::FString::PrintfImpl
              (&local_98,
               L"Failed to export level sequence %s because level sequences are disabled by export options"
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
    local_138.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_138.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_138,&local_f8);
    ::FString::PrintfImpl
              (&local_88,L"Failed to export level sequence %s because no associated level");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_88);
    local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    }
  }
  else if (local_a8.ArrayNum < 2) {
    if ((local_a8.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pUVar2 = *(UWorld **)local_a8.AllocatorInstance.Data;
    pFVar8 = FGLTFConvertBuilder::AddUniqueScene((FGLTFConvertBuilder *)param_1,pUVar2);
    if (pFVar8 == (FGLTFJsonScene *)0x0) {
      local_128.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_128.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_128,&local_c8);
      local_120 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_120,&local_d8);
      ::FString::PrintfImpl(&local_68,L"Failed to export level %s for level sequence %s");
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
      pUVar3 = (pUVar2->PersistentLevel).field0_0x0.DebugPtr;
      if (pUVar3 != (ULevel *)0x0) {
        local_118 = param_2;
        TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>
        ::Emplace<ULevelSequence_const_*_const_&>
                  ((TSet<ULevelSequence_const_*,DefaultKeyFuncs<ULevelSequence_const_*,0>,FDefaultSetAllocator>
                    *)&param_1->field_0x5a8,&local_res18,(bool *)&local_118);
        pFVar9 = TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>::
                 GetOrAdd(*(TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>
                            **)&param_1->field_0x8d8,pUVar3,(ULevelSequence *)param_2);
        if (pFVar9 != (FGLTFJsonAnimation *)0x0) {
          bVar5 = true;
          **(undefined8 **)&param_1->field_0x110 = pFVar8;
          goto LAB_14e5dec76;
        }
      }
      local_110.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_110.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_110,&local_b8);
      ::FString::PrintfImpl(&local_58,L"Failed to export level sequence %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_58);
      local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    local_130.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
    local_130.Number = *(uint *)&param_2->field_0x1c;
    ::FName::ToString(&local_130,&local_e8);
    ::FString::PrintfImpl
              (&local_78,
               L"Failed to export level sequence %s because more than one associated level");
    FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_78);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
LAB_14e5dec76:
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetPrivateStaticClass @ 14e5fc6e0

UClass * __cdecl UGLTFLevelSequenceExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelSequenceExporter",
               &Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelSequenceExporter,0x78,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGLTFLevelSequenceExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelSequenceExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelSequenceExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFLevelSequenceExporter @ 14e614d10

void __cdecl UGLTFLevelSequenceExporter::StaticRegisterNativesUGLTFLevelSequenceExporter(void)

{
  return;
}

