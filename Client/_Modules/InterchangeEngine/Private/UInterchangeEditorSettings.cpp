// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 13

// StaticClass @ 14e4cbef0

UClass * __cdecl UInterchangeEditorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorSettings",
               &Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeEditorSettings,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UInterchangeEditorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton;
}

// UInterchangeEditorSettings @ 14e4d83e0

UInterchangeEditorSettings * __thiscall
UInterchangeEditorSettings::UInterchangeEditorSettings
          (UInterchangeEditorSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bShowImportDialogAtReimport = false;
  this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
  (this->UsedGroupName).ComparisonIndex = 0;
  (this->UsedGroupName).Number = 0;
  (this->UsedGroupUID).A = 0;
  (this->UsedGroupUID).B = 0;
  (this->UsedGroupUID).C = 0;
  (this->UsedGroupUID).D = 0;
  return this;
}

// UInterchangeEditorSettings @ 14e4d8420

UInterchangeEditorSettings * __thiscall
UInterchangeEditorSettings::UInterchangeEditorSettings
          (UInterchangeEditorSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bShowImportDialogAtReimport = false;
  this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
  (this->UsedGroupName).ComparisonIndex = 0;
  (this->UsedGroupName).Number = 0;
  (this->UsedGroupUID).A = 0;
  (this->UsedGroupUID).B = 0;
  (this->UsedGroupUID).C = 0;
  (this->UsedGroupUID).D = 0;
  return this;
}

// ~UInterchangeEditorSettings @ 14e4dacb0

void __thiscall
UInterchangeEditorSettings::~UInterchangeEditorSettings(UInterchangeEditorSettings *this)

{
  this->_padding_ = (longlong)&___7UInterchangeEditorSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f7d00

UClass * __cdecl UInterchangeEditorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeEditorSettings",
               &Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeEditorSettings,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UInterchangeEditorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeEditorSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeEditorSettings.InnerSingleton;
}

// GetSelectableItems @ 14e4f8990

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeEditorSettings::GetSelectableItems
          (UInterchangeEditorSettings *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res18;
  this_00 = UInterchangeProjectSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar6 = *(int *)&pUVar1[0xf].field_0x20;
  pFVar9 = *(FScriptContainerElement **)&pUVar1[0xf].field_0x18;
  pFVar10 = pFVar9 + (longlong)iVar6 * 200;
  while( true ) {
    if (*(int *)&pUVar1[0xf].field_0x20 != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar10) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    uVar3 = *(undefined8 *)pFVar9;
    pFVar9 = pFVar9 + 200;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = uVar3;
  }
  return __return_storage_ptr__;
}

// SetUsedGroupName @ 14e508570

void __thiscall
UInterchangeEditorSettings::SetUsedGroupName(UInterchangeEditorSettings *this,FName *param_1)

{
  int iVar1;
  UObject *pUVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  UClass *this_00;
  FInterchangeGroup *pFVar6;
  FName *pFVar7;
  FName FVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName local_res8;
  
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  this->UsedGroupName = *param_1;
  (this->UsedGroupUID).A = 0;
  (this->UsedGroupUID).B = 0;
  (this->UsedGroupUID).C = 0;
  (this->UsedGroupUID).D = 0;
  this_00 = UInterchangeProjectSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar9 = *(FName **)&pUVar2[0xf].field_0x18;
  iVar1 = *(int *)&pUVar2[0xf].field_0x20;
  pFVar7 = pFVar9 + 1;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x19;
  while( true ) {
    if (*(int *)&pUVar2[0xf].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar10) break;
    if (*pFVar9 == this->UsedGroupName) {
      uVar3 = pFVar7->Number;
      FVar4.Value = pFVar7[1].ComparisonIndex.Value;
      uVar5 = pFVar7[1].Number;
      (this->UsedGroupUID).A = (pFVar7->ComparisonIndex).Value;
      (this->UsedGroupUID).B = uVar3;
      (this->UsedGroupUID).C = FVar4.Value;
      (this->UsedGroupUID).D = uVar5;
    }
    pFVar9 = pFVar9 + 0x19;
    pFVar7 = pFVar7 + 0x19;
  }
  pFVar6 = FInterchangeProjectSettingsUtils::GetUsedGroup((EUsedGroupStatus *)&local_res8);
  if ((char)local_res8.ComparisonIndex.Value != '\0') {
    if ((char)local_res8.ComparisonIndex.Value != '\x01') {
      if ((char)local_res8.ComparisonIndex.Value != '\x02') {
        return;
      }
      pFVar7 = ::FName::FName(&local_res8,"Invalid Group Used, Defaulting to No Group usage.");
      this->UsedGroupName = *pFVar7;
      return;
    }
    FVar8 = pFVar6->DisplayName;
  }
  this->UsedGroupName = FVar8;
  return;
}

// StaticRegisterNativesUInterchangeEditorSettings @ 14e50aa10

void __cdecl UInterchangeEditorSettings::StaticRegisterNativesUInterchangeEditorSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeEditorSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateUsedGroupName @ 14e50b970

void __thiscall UInterchangeEditorSettings::UpdateUsedGroupName(UInterchangeEditorSettings *this)

{
  FInterchangeGroup *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  
  pFVar1 = FInterchangeProjectSettingsUtils::GetUsedGroup((EUsedGroupStatus *)local_res10);
  if ((char)local_res10[0].ComparisonIndex.Value == '\0') {
    (this->UsedGroupName).ComparisonIndex = 0;
    (this->UsedGroupName).Number = 0;
  }
  else {
    if ((char)local_res10[0].ComparisonIndex.Value == '\x01') {
      this->UsedGroupName = pFVar1->DisplayName;
      return;
    }
    if ((char)local_res10[0].ComparisonIndex.Value == '\x02') {
      pFVar2 = ::FName::FName(local_res10,"Invalid Group Used, Defaulting to No Group usage.");
      this->UsedGroupName = *pFVar2;
      return;
    }
  }
  return;
}

// UpdateUsedGroupUIDFromGroupName @ 14e50b9e0

void __thiscall
UInterchangeEditorSettings::UpdateUsedGroupUIDFromGroupName(UInterchangeEditorSettings *this)

{
  int iVar1;
  UObject *pUVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  UClass *this_00;
  FInterchangeGroup *pFVar6;
  FName *pFVar7;
  FName FVar8;
  FName *pFVar9;
  FName *pFVar10;
  FName local_res8;
  
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  (this->UsedGroupUID).A = 0;
  (this->UsedGroupUID).B = 0;
  (this->UsedGroupUID).C = 0;
  (this->UsedGroupUID).D = 0;
  this_00 = UInterchangeProjectSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  pFVar9 = *(FName **)&pUVar2[0xf].field_0x18;
  iVar1 = *(int *)&pUVar2[0xf].field_0x20;
  pFVar7 = pFVar9 + 1;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x19;
  while( true ) {
    if (*(int *)&pUVar2[0xf].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar10) break;
    if (*pFVar9 == this->UsedGroupName) {
      uVar3 = pFVar7->Number;
      FVar4.Value = pFVar7[1].ComparisonIndex.Value;
      uVar5 = pFVar7[1].Number;
      (this->UsedGroupUID).A = (pFVar7->ComparisonIndex).Value;
      (this->UsedGroupUID).B = uVar3;
      (this->UsedGroupUID).C = FVar4.Value;
      (this->UsedGroupUID).D = uVar5;
    }
    pFVar9 = pFVar9 + 0x19;
    pFVar7 = pFVar7 + 0x19;
  }
  pFVar6 = FInterchangeProjectSettingsUtils::GetUsedGroup((EUsedGroupStatus *)&local_res8);
  if ((char)local_res8.ComparisonIndex.Value != '\0') {
    if ((char)local_res8.ComparisonIndex.Value != '\x01') {
      if ((char)local_res8.ComparisonIndex.Value != '\x02') {
        return;
      }
      pFVar7 = ::FName::FName(&local_res8,"Invalid Group Used, Defaulting to No Group usage.");
      this->UsedGroupName = *pFVar7;
      return;
    }
    FVar8 = pFVar6->DisplayName;
  }
  this->UsedGroupName = FVar8;
  return;
}

// execGetSelectableItems @ 14e50d660

void __cdecl
UInterchangeEditorSettings::execGetSelectableItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *this;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_res18 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_38,(int *)((longlong)&local_30 + 4));
  local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
  *(undefined8 *)(local_38.Data + (longlong)iVar5 * 8) = 0;
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar5 = *(int *)&pUVar1[0xf].field_0x20;
  pFVar7 = *(FScriptContainerElement **)&pUVar1[0xf].field_0x18;
  pFVar8 = pFVar7 + (longlong)iVar5 * 200;
  while( true ) {
    if (*(int *)&pUVar1[0xf].field_0x20 != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    if (((local_38.Data <= pFVar7) && (pFVar7 < local_38.Data + (longlong)local_30._4_4_ * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)local_30;
    if ((int)local_30 == local_30._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_38,(int *)((longlong)&local_30 + 4));
    }
    local_30 = CONCAT44(local_30._4_4_,iVar6 + 1);
    uVar2 = *(undefined8 *)pFVar7;
    pFVar7 = pFVar7 + 200;
    *(undefined8 *)(local_38.Data + (longlong)iVar6 * 8) = uVar2;
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_30;
    *(int *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetUsedGroupName @ 14e50de60

void __cdecl
UInterchangeEditorSettings::execGetUsedGroupName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x14;
  return;
}

// execSetUsedGroupName @ 14e511660

void __cdecl
UInterchangeEditorSettings::execSetUsedGroupName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uint uVar12;
  UClass *this;
  FInterchangeGroup *pFVar13;
  FName *pFVar14;
  FName FVar15;
  uchar *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  FName local_res8;
  uchar local_res10 [8];
  
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar16 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar16 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = puVar16[1];
  uVar6 = puVar16[2];
  uVar7 = puVar16[3];
  uVar8 = puVar16[4];
  uVar9 = puVar16[5];
  uVar10 = puVar16[6];
  uVar11 = puVar16[7];
  param_1[1].field_0x14 = puVar16[0];
  param_1[1].field_0x15 = uVar5;
  param_1[1].field_0x16 = uVar6;
  param_1[1].field_0x17 = uVar7;
  param_1[1].field_0x18 = uVar8;
  param_1[1].field_0x19 = uVar9;
  param_1[1].field_0x1a = uVar10;
  param_1[1].field_0x1b = uVar11;
  *(undefined8 *)&param_1[1].field_0x1c = 0;
  *(undefined8 *)&param_1[1].field_0x24 = 0;
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  plVar17 = *(longlong **)&pUVar3[0xf].field_0x18;
  iVar1 = *(int *)&pUVar3[0xf].field_0x20;
  plVar18 = plVar17 + 1;
  plVar19 = plVar17 + (longlong)iVar1 * 0x19;
  while( true ) {
    if (*(int *)&pUVar3[0xf].field_0x20 != iVar1) {
      `TCheckedPointerIterator<FInterchangeGroup_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (plVar17 == plVar19) break;
    if (*plVar17 == *(longlong *)&param_1[1].field_0x14) {
      lVar4 = plVar18[1];
      *(longlong *)&param_1[1].field_0x1c = *plVar18;
      *(longlong *)&param_1[1].field_0x24 = lVar4;
    }
    plVar17 = plVar17 + 0x19;
    plVar18 = plVar18 + 0x19;
  }
  pFVar13 = FInterchangeProjectSettingsUtils::GetUsedGroup((EUsedGroupStatus *)&local_res8);
  if ((char)local_res8.ComparisonIndex.Value != '\0') {
    if ((char)local_res8.ComparisonIndex.Value != '\x01') {
      if ((char)local_res8.ComparisonIndex.Value != '\x02') {
        return;
      }
      pFVar14 = ::FName::FName(&local_res8,"Invalid Group Used, Defaulting to No Group usage.");
      uVar12 = pFVar14->Number;
      *(uint *)&param_1[1].field_0x14 = (pFVar14->ComparisonIndex).Value;
      *(uint *)&param_1[1].field_0x18 = uVar12;
      return;
    }
    FVar15 = pFVar13->DisplayName;
  }
  *(uint *)&param_1[1].field_0x14 = FVar15.ComparisonIndex.Value;
  *(uint *)&param_1[1].field_0x18 = FVar15.Number;
  return;
}

