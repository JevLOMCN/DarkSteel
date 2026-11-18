// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 14

// StaticClass @ 14e2cf550

UClass * __cdecl ALevelVariantSetsActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsActor",
               &Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton,
               StaticRegisterNativesALevelVariantSetsActor,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelVariantSetsActor>,
               InternalVTableHelperCtorCaller<ALevelVariantSetsActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton;
}

// ALevelVariantSetsActor @ 14e2d41b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelVariantSetsActor * __thiscall
ALevelVariantSetsActor::ALevelVariantSetsActor(ALevelVariantSetsActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
  (this->LevelVariantSets).AssetPath.PackageName.ComparisonIndex = 0;
  (this->LevelVariantSets).AssetPath.PackageName.Number = 0;
  (this->LevelVariantSets).AssetPath.AssetName.ComparisonIndex = 0;
  (this->LevelVariantSets).AssetPath.AssetName.Number = 0;
  (this->LevelVariantSets).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelVariantSets).SubPathString.Data.ArrayNum = 0;
  (this->LevelVariantSets).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->DirectorInstances = 0;
  *(undefined8 *)&(this->DirectorInstances).field_0x8 = 0;
  *(undefined8 *)&(this->DirectorInstances).field_0x20 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x28 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->DirectorInstances).field_0x34 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DirectorInstances).field_0x40 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x48 = 0;
  return this;
}

// ALevelVariantSetsActor @ 14e2d4240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelVariantSetsActor * __thiscall
ALevelVariantSetsActor::ALevelVariantSetsActor
          (ALevelVariantSetsActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
  (this->LevelVariantSets).AssetPath.PackageName.ComparisonIndex = 0;
  (this->LevelVariantSets).AssetPath.PackageName.Number = 0;
  (this->LevelVariantSets).AssetPath.AssetName.ComparisonIndex = 0;
  (this->LevelVariantSets).AssetPath.AssetName.Number = 0;
  (this->LevelVariantSets).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelVariantSets).SubPathString.Data.ArrayNum = 0;
  (this->LevelVariantSets).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->DirectorInstances = 0;
  *(undefined8 *)&(this->DirectorInstances).field_0x8 = 0;
  *(undefined8 *)&(this->DirectorInstances).field_0x20 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x28 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->DirectorInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirectorInstances).field_0x34 = 0;
  *(undefined8 *)&(this->DirectorInstances).field_0x40 = 0;
  *(undefined4 *)&(this->DirectorInstances).field_0x48 = 0;
  pFVar2 = ::FName::FName(&local_res8,L"SceneComp");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

// ~ALevelVariantSetsActor @ 14e2d5230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelVariantSetsActor::~ALevelVariantSetsActor(ALevelVariantSetsActor *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
  *(undefined4 *)&(this->DirectorInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DirectorInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirectorInstances);
  pFVar2 = (this->LevelVariantSets).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetLevelVariantSets @ 14e2ddb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelVariantSets * __thiscall
ALevelVariantSetsActor::GetLevelVariantSets(ALevelVariantSetsActor *this,bool param_1)

{
  FSoftObjectPath *this_00;
  int iVar1;
  bool bVar2;
  ULevelVariantSets *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this_00 = &this->LevelVariantSets;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((this_00->AssetPath).PackageName != (FName)0x0) {
    pUVar3 = (ULevelVariantSets *)FSoftObjectPath::ResolveObject(this_00);
    if (pUVar3 != (ULevelVariantSets *)0x0) {
      pUVar4 = ULevelVariantSets::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pUVar3;
      }
    }
    if (param_1) {
      bVar2 = (*IsAsyncLoading)();
      if (!bVar2) {
        pUVar3 = (ULevelVariantSets *)
                 FSoftObjectPath::TryLoad(this_00,(FUObjectSerializeContext *)0x0);
        if (pUVar3 != (ULevelVariantSets *)0x0) {
          pUVar4 = ULevelVariantSets::StaticClass();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
            return pUVar3;
          }
        }
        return (ULevelVariantSets *)0x0;
      }
      local_res8 = (this_00->AssetPath).PackageName;
      bVar2 = local_res8 != (FName)0x0;
      if (bVar2) {
        pFVar5 = ::FName::ToString(&local_res8,&local_18);
      }
      else {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        pFVar5 = &local_38;
      }
      local_28.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_28.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if ((!bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      LoadPackageAsync(&local_28,(FGuid *)0x0);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return (ULevelVariantSets *)0x0;
}

// GetPrivateStaticClass @ 14e2de140

UClass * __cdecl ALevelVariantSetsActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsActor",
               &Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton,
               StaticRegisterNativesALevelVariantSetsActor,0x330,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelVariantSetsActor>,
               InternalVTableHelperCtorCaller<ALevelVariantSetsActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton;
}

// SetLevelVariantSets @ 14e2e6290

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
ALevelVariantSetsActor::SetLevelVariantSets(ALevelVariantSetsActor *this,ULevelVariantSets *param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  FSoftObjectPath local_28;
  
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
  (this->LevelVariantSets).AssetPath.PackageName = local_28.AssetPath.PackageName;
  (this->LevelVariantSets).AssetPath.AssetName = local_28.AssetPath.AssetName;
  pFVar2 = &(this->LevelVariantSets).SubPathString;
  if (pFVar2 != &local_28.SubPathString) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
    (this->LevelVariantSets).SubPathString.Data.ArrayNum = local_28.SubPathString.Data.ArrayNum;
    (this->LevelVariantSets).SubPathString.Data.ArrayMax = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesALevelVariantSetsActor @ 14e2e6f70

void __cdecl ALevelVariantSetsActor::StaticRegisterNativesALevelVariantSetsActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ALevelVariantSetsActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwitchOnVariantByIndex @ 14e2e72f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ALevelVariantSetsActor::SwitchOnVariantByIndex(ALevelVariantSetsActor *this,int param_1,int param_2)

{
  ULevelVariantSets *this_00;
  UVariantSet *this_01;
  UVariant *this_02;
  
  this_00 = GetLevelVariantSets(this,true);
  if (this_00 != (ULevelVariantSets *)0x0) {
    this_01 = ULevelVariantSets::GetVariantSet(this_00,param_1);
    if (this_01 != (UVariantSet *)0x0) {
      this_02 = UVariantSet::GetVariant(this_01,param_2);
      if (this_02 != (UVariant *)0x0) {
        UVariant::SwitchOn(this_02);
        return true;
      }
    }
  }
  return false;
}

// SwitchOnVariantByName @ 14e2e7360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ALevelVariantSetsActor::SwitchOnVariantByName
          (ALevelVariantSetsActor *this,FString *param_1,FString *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  UVariant *this_00;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res20 [8];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  FScriptContainerElement *local_68;
  ULevelVariantSets *local_60;
  FText local_58;
  FText local_48;
  
  local_60 = GetLevelVariantSets(this,true);
  if (local_60 != (ULevelVariantSets *)0x0) {
    uVar2 = (local_60->VariantSets).ArrayNum;
    uVar8 = (ulonglong)(int)uVar2;
    pFVar11 = (local_60->VariantSets).AllocatorInstance.Data;
    pFVar10 = pFVar11 + uVar8 * 8;
    local_68 = pFVar10;
    while( true ) {
      if ((local_60->VariantSets).ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar11 == pFVar10) break;
      lVar4 = *(longlong *)pFVar11;
      local_58.TextData.Reference = *(ITextData **)(lVar4 + 0x38);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 8))
                  (local_58.TextData.Reference,local_74);
      }
      local_58.Flags = *(uint *)(lVar4 + 0x40);
      pFVar7 = FText::ToString(&local_58);
      iVar5 = (param_1->Data).ArrayNum;
      iVar6 = (pFVar7->Data).ArrayNum;
      if (iVar6 == iVar5) {
        if (iVar6 < 2) {
          bVar12 = true;
        }
        else {
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar12 = iVar5 == 0;
        }
      }
      else {
        bVar12 = iVar5 + iVar6 == 1;
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (bVar12) {
        puVar9 = *(undefined8 **)(lVar4 + 0x50);
        iVar5 = *(int *)(lVar4 + 0x58);
        puVar1 = puVar9 + iVar5;
        while( true ) {
          if (*(int *)(lVar4 + 0x58) != iVar5) {
            `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          pFVar10 = local_68;
          if (puVar9 == puVar1) break;
          this_00 = (UVariant *)*puVar9;
          local_48.TextData.Reference = (this_00->DisplayText).TextData.Reference;
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 8))
                      (local_48.TextData.Reference,local_70);
          }
          local_48.Flags = (this_00->DisplayText).Flags;
          pFVar7 = FText::ToString(&local_48);
          iVar6 = (param_2->Data).ArrayNum;
          iVar3 = (pFVar7->Data).ArrayNum;
          if (iVar3 == iVar6) {
            if (iVar3 < 2) {
              bVar12 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                                 (wchar_t *)(param_2->Data).AllocatorInstance.Data);
              bVar12 = iVar6 == 0;
            }
          }
          else {
            bVar12 = iVar6 + iVar3 == 1;
          }
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
          if (bVar12) {
            UVariant::SwitchOn(this_00);
            pFVar10 = (param_1->Data).AllocatorInstance.Data;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar10);
            }
            pFVar10 = (param_2->Data).AllocatorInstance.Data;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar10);
            }
            return true;
          }
          puVar9 = puVar9 + 1;
        }
      }
      pFVar11 = pFVar11 + 8;
      uVar8 = (ulonglong)uVar2;
    }
  }
  pFVar10 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return false;
}

// execGetLevelVariantSets @ 14e2e8660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelVariantSetsActor::execGetLevelVariantSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULevelVariantSets *pUVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetLevelVariantSets((ALevelVariantSetsActor *)param_1,local_res10[0] != 0);
  *(ULevelVariantSets **)param_3 = pUVar2;
  return;
}

// execSetLevelVariantSets @ 14e2e93a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelVariantSetsActor::execSetLevelVariantSets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULevelVariantSets *local_res10;
  
  local_res10 = (ULevelVariantSets *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLevelVariantSets((ALevelVariantSetsActor *)param_1,local_res10);
  return;
}

// execSwitchOnVariantByIndex @ 14e2e9d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelVariantSetsActor::execSwitchOnVariantByIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UVariant *this;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  ULevelVariantSets *pUVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res10 [2];
  uint local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar8 = local_res18[0];
  uVar3 = local_res10[0];
  lVar9 = (longlong)(int)local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_res10[0];
  pUVar5 = GetLevelVariantSets((ALevelVariantSetsActor *)param_1,true);
  if (((pUVar5 != (ULevelVariantSets *)0x0) && (-1 < (int)uVar8)) &&
     ((int)uVar8 < (pUVar5->VariantSets).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar8 < (pUVar5->VariantSets).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar9 = *(longlong *)((pUVar5->VariantSets).AllocatorInstance.Data + lVar9 * 8);
    if (((lVar9 != 0) && (-1 < (int)uVar3)) && ((int)uVar3 < *(int *)(lVar9 + 0x58))) {
      uVar8 = 0;
      if ((int)uVar3 < *(int *)(lVar9 + 0x58)) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      this = *(UVariant **)(*(longlong *)(lVar9 + 0x50) + lVar7 * 8);
      if (this != (UVariant *)0x0) {
        UVariant::SwitchOn(this);
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSwitchOnVariantByName @ 14e2e9f00

void __cdecl
ALevelVariantSetsActor::execSwitchOnVariantByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pvVar2 = local_58;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_50;
  local_38.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_38,(int)local_50,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pvVar2,lVar4 * 2);
  }
  pvVar2 = local_48;
  lVar4 = (longlong)(int)local_40;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_28,(int)local_40,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pvVar2,lVar4 * 2);
  }
  bVar3 = SwitchOnVariantByName((ALevelVariantSetsActor *)param_1,&local_28,&local_38);
  *(bool *)param_3 = bVar3;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

