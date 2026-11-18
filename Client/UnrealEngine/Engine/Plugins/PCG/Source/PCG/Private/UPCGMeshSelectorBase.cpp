// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149d75ce0

UClass * __cdecl UPCGMeshSelectorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorBase",
               &Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorBase>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton;
}

// UPCGMeshSelectorBase @ 149e36060

UPCGMeshSelectorBase * __thiscall
UPCGMeshSelectorBase::UPCGMeshSelectorBase(UPCGMeshSelectorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGMeshSelectorBase__6B_;
  return this;
}

// UPCGMeshSelectorBase @ 149e36090

UPCGMeshSelectorBase * __thiscall
UPCGMeshSelectorBase::UPCGMeshSelectorBase(UPCGMeshSelectorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPCGMeshSelectorBase__6B_;
  return this;
}

// ~UPCGMeshSelectorBase @ 149e375b0

void __thiscall UPCGMeshSelectorBase::~UPCGMeshSelectorBase(UPCGMeshSelectorBase *this)

{
  *(undefined ***)this = &___7UPCGMeshSelectorBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149e5d670

UClass * __cdecl UPCGMeshSelectorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMeshSelectorBase",
               &Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton,
               StaticRegisterNativesUPCGMeshSelectorBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMeshSelectorBase>,
               InternalVTableHelperCtorCaller<UPCGMeshSelectorBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSelectorBase.InnerSingleton;
}

// SelectInstances @ 149e86740

bool __thiscall
UPCGMeshSelectorBase::SelectInstances
          (UPCGMeshSelectorBase *this,FPCGStaticMeshSpawnerContext *param_1,
          UPCGStaticMeshSpawnerSettings *param_2,UPCGPointData *param_3,
          TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,UPCGPointData *param_5)

{
  return true;
}

// SelectMeshInstances @ 149e87c70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
UPCGMeshSelectorBase::SelectMeshInstances
          (UPCGMeshSelectorBase *this,FPCGStaticMeshSpawnerContext *param_1,
          UPCGStaticMeshSpawnerSettings *param_2,UPCGBasePointData *param_3,
          TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> *param_4,
          UPCGBasePointData *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  UPCGBasePointData *pUVar8;
  UPCGBasePointData *pUVar9;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  pUVar9 = (UPCGBasePointData *)0x0;
  if (param_3 == (UPCGBasePointData *)0x0) {
LAB_149e87ccd:
    param_3 = pUVar9;
  }
  else {
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(param_3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_149e87ccd;
  }
  pUVar8 = param_5;
  if (param_5 != (UPCGBasePointData *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
    lVar2 = pUVar8->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_149e87d03;
  }
  pUVar8 = pUVar9;
LAB_149e87d03:
  param_5 = *(UPCGBasePointData **)(*(longlong *)&this->field_0x10 + 0x18);
  ::FName::ToString((FName *)&param_5,&local_78);
  pFVar5 = FText::FromString(&local_58,&local_78);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"PCGMeshSelectorBase",L"SelectMeshInstancesNotImplemented",
                      L"MeshSelector class \'{0}\' needs to implement SelectMeshInstances");
  pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar6,Default);
  FText::Format<FText>(&local_88,pFVar7,pFVar5);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_3 == (UPCGBasePointData *)0x0) || (pUVar8 == (UPCGBasePointData *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(&local_88);
      if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_78);
        pUVar9 = (UPCGBasePointData *)&DAT_0000000c;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,(FString *)&local_68);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar9 & 8) != 0) &&
         (pUVar9 = (UPCGBasePointData *)(ulonglong)((uint)pUVar9 & 0xfffffff7),
         local_68.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_68.TextData.Reference);
      }
      if ((((ulonglong)pUVar9 & 4) != 0) &&
         (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = 0;
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      FText::ToString(&local_88);
      if (param_1 != (FPCGStaticMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_78);
        pUVar9 = (UPCGBasePointData *)&DAT_00000003;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,(FString *)&local_68);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar9 & 2) != 0) &&
         (pUVar9 = (UPCGBasePointData *)(ulonglong)((uint)pUVar9 & 0xfffffffd),
         local_68.TextData.Reference != (ITextData *)0x0)) {
        FMemory::Free(local_68.TextData.Reference);
      }
      if ((((ulonglong)pUVar9 & 1) != 0) &&
         (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = (**(code **)(*(longlong *)this + 0x2b0))(this,param_1,param_2,param_3,param_4,pUVar8);
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return (bool)uVar3;
}

// StaticRegisterNativesUPCGMeshSelectorBase @ 149ec1dd0

void __cdecl UPCGMeshSelectorBase::StaticRegisterNativesUPCGMeshSelectorBase(void)

{
  return;
}

