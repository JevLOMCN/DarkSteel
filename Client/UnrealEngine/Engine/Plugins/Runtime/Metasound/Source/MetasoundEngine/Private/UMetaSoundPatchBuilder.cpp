// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 11

// StaticClass @ 14b2f4690

UClass * __cdecl UMetaSoundPatchBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatchBuilder",
               &Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton,
               StaticRegisterNativesUMetaSoundPatchBuilder,0xa8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundPatchBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundPatchBuilder>,local_res8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton;
}

// UMetaSoundPatchBuilder @ 14b34c7f0

UMetaSoundPatchBuilder * __thiscall
UMetaSoundPatchBuilder::UMetaSoundPatchBuilder(UMetaSoundPatchBuilder *this,FVTableHelper *param_1)

{
  UMetaSoundBuilderBase::UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundPatchBuilder__6B_;
  return this;
}

// UMetaSoundPatchBuilder @ 14b34c820

UMetaSoundPatchBuilder * __thiscall
UMetaSoundPatchBuilder::UMetaSoundPatchBuilder
          (UMetaSoundPatchBuilder *this,FObjectInitializer *param_1)

{
  UMetaSoundBuilderBase::UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundPatchBuilder__6B_;
  return this;
}

// ~UMetaSoundPatchBuilder @ 14b352650

void __thiscall UMetaSoundPatchBuilder::~UMetaSoundPatchBuilder(UMetaSoundPatchBuilder *this)

{
  *(undefined ***)this = &___7UMetaSoundPatchBuilder__6B_;
  UMetaSoundBuilderBase::~UMetaSoundBuilderBase((UMetaSoundBuilderBase *)this);
  return;
}

// BuildAndOverwriteMetaSoundInternal @ 14b3667a0

void __thiscall
UMetaSoundPatchBuilder::BuildAndOverwriteMetaSoundInternal
          (UMetaSoundPatchBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FMetaSoundBuilderOptions local_28;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExistingMetaSound.GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                       ,0x5d,L"ExistingMetaSound interface must point to valid MetaSound object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.bAddToRegistry = true;
  local_28.Name.ComparisonIndex.Value = 0;
  local_28.Name.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1);
  }
  local_28.ExistingMetaSound._0_8_ = *(undefined8 *)param_1;
  local_28.ExistingMetaSound._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28.bForceUniqueClassName = param_2;
  UMetaSoundBuilderBase::BuildInternal<UMetaSoundPatch>
            ((UMetaSoundBuilderBase *)this,(UObject *)0x0,&local_28);
  return;
}

// BuildNewMetaSound @ 14b366a10

TScriptInterface<IMetaSoundDocumentInterface> * __thiscall
UMetaSoundPatchBuilder::BuildNewMetaSound
          (UMetaSoundPatchBuilder *this,
          TScriptInterface<IMetaSoundDocumentInterface> *__return_storage_ptr__,FName param_1)

{
  UMetaSoundPatch *pUVar1;
  longlong *plVar2;
  FMetaSoundBuilderOptions local_28;
  
  local_28.bForceUniqueClassName = false;
  local_28.bAddToRegistry = true;
  local_28.ExistingMetaSound._0_8_ = 0;
  local_28.ExistingMetaSound._8_8_ = 0;
  local_28.Name = param_1;
  pUVar1 = UMetaSoundBuilderBase::BuildInternal<UMetaSoundPatch>
                     ((UMetaSoundBuilderBase *)this,(UObject *)0x0,&local_28);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMetaSoundPatch *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UMetaSoundPatch **)__return_storage_ptr__ = pUVar1;
  plVar2 = &pUVar1->_padding_;
  if (pUVar1 == (UMetaSoundPatch *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  *(longlong **)&__return_storage_ptr__->field_0x8 = plVar2;
  return __return_storage_ptr__;
}

// GetBaseMetaSoundUClass @ 14b3ae160

UClass * __thiscall UMetaSoundPatchBuilder::GetBaseMetaSoundUClass(UMetaSoundPatchBuilder *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatch",
               &Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton,
               UMetaSoundPatch::StaticRegisterNativesUMetaSoundPatch,0x308,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundPatch>,
               InternalVTableHelperCtorCaller<UMetaSoundPatch>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatch.InnerSingleton;
}

// GetPrivateStaticClass @ 14b3bf4d0

UClass * __cdecl UMetaSoundPatchBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundPatchBuilder",
               &Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton,
               StaticRegisterNativesUMetaSoundPatchBuilder,0xa8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetaSoundPatchBuilder>,
               InternalVTableHelperCtorCaller<UMetaSoundPatchBuilder>,local_res8,
               UMetaSoundBuilderBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundPatchBuilder.InnerSingleton;
}

// OnAssetReferenceAdded @ 14b3c9c90

void __thiscall
UMetaSoundPatchBuilder::OnAssetReferenceAdded
          (UMetaSoundPatchBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMetaSoundPatch *pUVar3;
  longlong lVar4;
  FString *pFVar5;
  longlong *plVar6;
  TObjectPtr<UObject> local_res8;
  undefined1 local_res10 [8];
  UObject *local_res18;
  FString local_48;
  FNodeClassRegistryKey local_38;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DocInterface.GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = CastChecked<UMetaSoundPatch,UObject>(*(UObject **)&this->field_0x30);
  local_res18 = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Emplace<TObjectPtr<UObject>_>
            (&pUVar3->ReferencedAssetClassObjects,&local_res8,(bool *)&local_res18);
  if (*(longlong *)param_1 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
  }
  lVar4 = (**(code **)(*plVar6 + 0x18))();
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_38,(FMetasoundFrontendGraphClass *)(lVar4 + 0x70));
  pFVar5 = Metasound::Frontend::FNodeClassRegistryKey::ToString(&local_38,&local_48);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&pUVar3->ReferencedAssetClassKeys,(FString *)local_res10,(bool *)pFVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRemovingAssetReference @ 14b3cb1e0

void __thiscall
UMetaSoundPatchBuilder::OnRemovingAssetReference
          (UMetaSoundPatchBuilder *this,TScriptInterface<IMetaSoundDocumentInterface> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMetaSoundPatch *pUVar5;
  longlong lVar6;
  FString *pFVar7;
  int iVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  UObject *local_res8;
  FString local_48;
  FNodeClassRegistryKey local_38;
  
  pwVar10 = L"";
  if ((*(longlong *)param_1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DocInterface.GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundBuilderSubsystem.cpp"
                         ,0x85,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar5 = CastChecked<UMetaSoundPatch,UObject>(*(UObject **)&this->field_0x30);
  local_res8 = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::Remove
            (&pUVar5->ReferencedAssetClassObjects,(TObjectPtr<UObject_const_>)&local_res8);
  plVar9 = (longlong *)0x0;
  if (*(longlong *)param_1 != 0) {
    plVar9 = *(longlong **)&param_1->field_0x8;
  }
  lVar6 = (**(code **)(*plVar9 + 0x18))();
  Metasound::Frontend::FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_38,(FMetasoundFrontendGraphClass *)(lVar6 + 0x70));
  pFVar7 = Metasound::Frontend::FNodeClassRegistryKey::ToString(&local_38,&local_48);
  if (*(int *)&(pUVar5->ReferencedAssetClassKeys).Elements.field_0x8 !=
      *(int *)&(pUVar5->ReferencedAssetClassKeys).Elements.field_0x34) {
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
              (&pUVar5->ReferencedAssetClassKeys,uVar4,pFVar7);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUMetaSoundPatchBuilder @ 14b3e1500

void __cdecl UMetaSoundPatchBuilder::StaticRegisterNativesUMetaSoundPatchBuilder(void)

{
  return;
}

