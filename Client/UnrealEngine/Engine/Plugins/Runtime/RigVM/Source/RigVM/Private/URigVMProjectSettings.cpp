// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// StaticClass @ 14a155000

UClass * __cdecl URigVMProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMProjectSettings",
               &Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton,
               StaticRegisterNativesURigVMProjectSettings,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<URigVMProjectSettings>,
               InternalVTableHelperCtorCaller<URigVMProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton;
}

// URigVMProjectSettings @ 14a1913b0

URigVMProjectSettings * __thiscall
URigVMProjectSettings::URigVMProjectSettings(URigVMProjectSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMProjectSettings__6B_;
  (this->VariantTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantTags).ArrayNum = 0;
  (this->VariantTags).ArrayMax = 0;
  return this;
}

// URigVMProjectSettings @ 14a1913f0

URigVMProjectSettings * __thiscall
URigVMProjectSettings::URigVMProjectSettings
          (URigVMProjectSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMProjectSettings__6B_;
  (this->VariantTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantTags).ArrayNum = 0;
  (this->VariantTags).ArrayMax = 0;
  return this;
}

// ~URigVMProjectSettings @ 14a192040

void __thiscall URigVMProjectSettings::~URigVMProjectSettings(URigVMProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMProjectSettings__6B_;
  DestructItems<FRigVMTag,int>
            ((FRigVMTag *)(this->VariantTags).AllocatorInstance.Data,(this->VariantTags).ArrayNum);
  pFVar1 = (this->VariantTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// FindTag @ 14a1aa560

FRigVMTag * __thiscall URigVMProjectSettings::FindTag(URigVMProjectSettings *this,FName param_1)

{
  FRigVMTag *pFVar1;
  FRigVMTag *pFVar2;
  
  pFVar1 = (FRigVMTag *)(this->VariantTags).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->VariantTags).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FRigVMTag *)0x0;
    }
    if (param_1 == pFVar1->Name) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetPrivateStaticClass @ 14a1ac150

UClass * __cdecl URigVMProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMProjectSettings",
               &Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton,
               StaticRegisterNativesURigVMProjectSettings,0x48,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Editor",InternalConstructor<URigVMProjectSettings>,
               InternalVTableHelperCtorCaller<URigVMProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMProjectSettings.InnerSingleton;
}

// GetTag @ 14a1ac960

FRigVMTag * __thiscall
URigVMProjectSettings::GetTag
          (URigVMProjectSettings *this,FRigVMTag *__return_storage_ptr__,FName param_1)

{
  FLinearColor FVar1;
  FRigVMTag *pFVar2;
  FRigVMTag *pFVar3;
  
  pFVar3 = (FRigVMTag *)(this->VariantTags).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (this->VariantTags).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar2) {
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      (__return_storage_ptr__->Label).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Label).Data.ArrayNum = 0;
      (__return_storage_ptr__->Label).Data.ArrayMax = 0;
      FText::FText(&__return_storage_ptr__->ToolTip);
      FVar1 = FLinearColor::White;
      __return_storage_ptr__->bShowInUserInterface = true;
      __return_storage_ptr__->bMarksSubjectAsInvalid = false;
      (__return_storage_ptr__->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
      return __return_storage_ptr__;
    }
    if (param_1 == pFVar3->Name) break;
    pFVar3 = pFVar3 + 1;
  }
  FRigVMTag::FRigVMTag(__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesURigVMProjectSettings @ 14a1ea9c0

void __cdecl URigVMProjectSettings::StaticRegisterNativesURigVMProjectSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URigVMProjectSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTag @ 14a1f94f0

void __cdecl URigVMProjectSettings::execGetTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_58;
  FString local_50;
  FText local_40;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  undefined2 local_20;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar5 = *(longlong **)&param_1[1].field_0x10;
  plVar4 = plVar5 + (longlong)*(int *)&param_1[1].field_0x18 * 8;
  do {
    if (plVar5 == plVar4) {
      local_58 = 0;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      FText::FText(&local_40);
      local_20 = 1;
      _local_30 = FLinearColor::White.field0_0x0;
LAB_14a1f95c2:
      pFVar1 = (FString *)((longlong)param_3 + 8);
      *(longlong *)param_3 = local_58;
      if (pFVar1 != &local_50) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
        *(int *)((longlong)param_3 + 0x10) = local_50.Data.ArrayNum;
        *(int *)((longlong)param_3 + 0x14) = local_50.Data.ArrayMax;
        local_50.Data.ArrayNum = 0;
        local_50.Data.ArrayMax = 0;
        local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FText::operator=((FText *)((longlong)param_3 + 0x18),&local_40);
      *(undefined1 *)((longlong)param_3 + 0x38) = (undefined1)local_20;
      *(undefined1 *)((longlong)param_3 + 0x39) = local_20._1_1_;
      *(undefined4 *)((longlong)param_3 + 0x28) = local_30._0_4_;
      *(undefined4 *)((longlong)param_3 + 0x2c) = local_30._4_4_;
      *(float *)((longlong)param_3 + 0x30) = fStack_28;
      *(float *)((longlong)param_3 + 0x34) = fStack_24;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      return;
    }
    local_58 = *plVar5;
    if (local_res10 == local_58) {
      ::FString::FString(&local_50,(FString *)(plVar5 + 1));
      local_40.TextData.Reference = (ITextData *)plVar5[3];
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 8))
                  (local_40.TextData.Reference,local_res8);
      }
      local_40.Flags = *(uint *)(plVar5 + 4);
      _local_30 = (FLinearColor_u_0)*(FLinearColor_u_0 *)&((FLinearColor_u_0 *)(plVar5 + 5))->_s_0;
      local_20 = (undefined2)plVar5[7];
      goto LAB_14a1f95c2;
    }
    plVar5 = plVar5 + 8;
  } while( true );
}

