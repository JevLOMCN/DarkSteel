// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 7

// StaticClass @ 14ad1a260

UClass * __cdecl ULegacyCameraShakeFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShakeFunctionLibrary",
               &Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesULegacyCameraShakeFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULegacyCameraShakeFunctionLibrary>,
               InternalVTableHelperCtorCaller<ULegacyCameraShakeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton;
}

// ULegacyCameraShakeFunctionLibrary @ 14ad1e920

ULegacyCameraShakeFunctionLibrary * __thiscall
ULegacyCameraShakeFunctionLibrary::ULegacyCameraShakeFunctionLibrary
          (ULegacyCameraShakeFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULegacyCameraShakeFunctionLibrary__6B_;
  return this;
}

// ULegacyCameraShakeFunctionLibrary @ 14ad1e950

ULegacyCameraShakeFunctionLibrary * __thiscall
ULegacyCameraShakeFunctionLibrary::ULegacyCameraShakeFunctionLibrary
          (ULegacyCameraShakeFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULegacyCameraShakeFunctionLibrary__6B_;
  return this;
}

// ~ULegacyCameraShakeFunctionLibrary @ 14ad1efb0

void __thiscall
ULegacyCameraShakeFunctionLibrary::~ULegacyCameraShakeFunctionLibrary
          (ULegacyCameraShakeFunctionLibrary *this)

{
  *(undefined ***)this = &___7ULegacyCameraShakeFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14ad21fb0

UClass * __cdecl ULegacyCameraShakeFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShakeFunctionLibrary",
               &Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesULegacyCameraShakeFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULegacyCameraShakeFunctionLibrary>,
               InternalVTableHelperCtorCaller<ULegacyCameraShakeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesULegacyCameraShakeFunctionLibrary @ 14ad23f70

void __cdecl
ULegacyCameraShakeFunctionLibrary::StaticRegisterNativesULegacyCameraShakeFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_LegacyCameraShake @ 14ad26be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ULegacyCameraShakeFunctionLibrary::execConv_LegacyCameraShake
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UCameraShakeBase *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UCameraShakeBase *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = (UCameraShakeBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UCameraShakeBase *)0x0) {
    pUVar4 = ULegacyCameraShake::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<ULegacyCameraShake>(&local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UCameraShakeBase>(&local_18,pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  *(UCameraShakeBase **)param_3 = pUVar3;
  return;
}

