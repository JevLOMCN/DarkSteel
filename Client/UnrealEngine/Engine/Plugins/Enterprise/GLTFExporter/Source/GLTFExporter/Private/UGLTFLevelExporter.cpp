// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// StaticClass @ 14e5b65c0

UClass * __cdecl UGLTFLevelExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelExporter",
               &Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFLevelExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton;
}

// UGLTFLevelExporter @ 14e5d3500

UGLTFLevelExporter * __thiscall
UGLTFLevelExporter::UGLTFLevelExporter(UGLTFLevelExporter *this,FVTableHelper *param_1)

{
  UExporter::UExporter((UExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelExporter__6B_;
  return this;
}

// UGLTFLevelExporter @ 14e5d3530

UGLTFLevelExporter * __thiscall
UGLTFLevelExporter::UGLTFLevelExporter(UGLTFLevelExporter *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UGLTFExporter::UGLTFExporter((UGLTFExporter *)this,param_1);
  *(undefined ***)this = &___7UGLTFLevelExporter__6B_;
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)&this->field_0x28 = pUVar1;
  return this;
}

// ~UGLTFLevelExporter @ 14e5d7f80

void __thiscall UGLTFLevelExporter::~UGLTFLevelExporter(UGLTFLevelExporter *this)

{
  *(undefined ***)this = &___7UGLTFExporter__6B_;
  UExporter::~UExporter((UExporter *)this);
  return;
}

// AddObject @ 14e5de7c0

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
UGLTFLevelExporter::AddObject
          (UGLTFLevelExporter *this,FGLTFContainerBuilder *param_1,UObject *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FGLTFJsonScene *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  if (param_2 == (UObject *)0x0) {
    pFVar4 = GetTypeName<UWorld>(&local_18);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    pFVar3 = FGLTFConvertBuilder::AddUniqueScene((FGLTFConvertBuilder *)param_1,(UWorld *)param_2);
    if (pFVar3 == (FGLTFJsonScene *)0x0) {
      local_res18[0].ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_res18[0].Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(local_res18,&local_28);
      ::FString::PrintfImpl(&local_18,L"Failed to export level %s");
      FGLTFLogBuilder::LogError((FGLTFLogBuilder *)param_1,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return false;
    }
    **(undefined8 **)&param_1->field_0x110 = pFVar3;
    return true;
  }
  pFVar4 = GetTypeName<UWorld>(&local_18);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>(&local_28,param_2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 14e5fc620

UClass * __cdecl UGLTFLevelExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFLevelExporter",
               &Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton,
               StaticRegisterNativesUGLTFLevelExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGLTFLevelExporter>,
               InternalVTableHelperCtorCaller<UGLTFLevelExporter>,local_res8,
               UGLTFExporter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFLevelExporter.InnerSingleton;
}

// StaticRegisterNativesUGLTFLevelExporter @ 14e614d00

void __cdecl UGLTFLevelExporter::StaticRegisterNativesUGLTFLevelExporter(void)

{
  return;
}

