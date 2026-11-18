// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 10

// StaticClass @ 14dc98fc0

UClass * __cdecl UMovieGraphQuickRenderModeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderModeSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphQuickRenderModeSettings,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphQuickRenderModeSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderModeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton;
}

// UMovieGraphQuickRenderModeSettings @ 14dcb0d70

UMovieGraphQuickRenderModeSettings * __thiscall
UMovieGraphQuickRenderModeSettings::UMovieGraphQuickRenderModeSettings
          (UMovieGraphQuickRenderModeSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  puVar1 = &(this->GraphPreset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderModeSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->LevelSequenceOverride).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->LevelSequenceOverride).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->ViewportLookFlags = 0;
  this->FrameRangeType = PlaybackRange;
  this->CustomStartFrame = 0;
  this->CustomEndFrame = 0;
  (this->GraphVariableAssignments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphVariableAssignments).ArrayNum = 0;
  (this->GraphVariableAssignments).ArrayMax = 0;
  this->PostRenderBehavior = PlayRenderOutput;
  this->bOverride_ViewportLookFlags = false;
  return this;
}

// UMovieGraphQuickRenderModeSettings @ 14dcb0e20

UMovieGraphQuickRenderModeSettings * __thiscall
UMovieGraphQuickRenderModeSettings::UMovieGraphQuickRenderModeSettings
          (UMovieGraphQuickRenderModeSettings *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ForAnyElementType _Src;
  size_t _Size;
  undefined8 local_res8;
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  UObject::UObject((UObject *)this);
  local_48.Size = 0x44;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderModeSettings__6B_;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_48.DataPtr = L"/MovieRenderPipeline/DefaultQuickRenderGraph.DefaultQuickRenderGraph";
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_38,&local_48);
  _Src.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
  puVar1 = &(this->GraphPreset).SoftObjectPtr.field_0x18;
  puVar2 = &(this->GraphPreset).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(this->GraphPreset).SoftObjectPtr = 0;
  *(uint *)&(this->GraphPreset).SoftObjectPtr.field_0x8 =
       local_38.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->GraphPreset).SoftObjectPtr.field_0xc = local_38.AssetPath.PackageName.Number;
  *(uint *)&(this->GraphPreset).SoftObjectPtr.field_0x10 =
       local_38.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->GraphPreset).SoftObjectPtr.field_0x14 = local_38.AssetPath.AssetName.Number;
  *(undefined8 *)puVar1 = 0;
  *(int *)&(this->GraphPreset).SoftObjectPtr.field_0x20 = local_38.SubPathString.Data.ArrayNum;
  if (local_38.SubPathString.Data.ArrayNum == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_38.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)puVar1,
               local_38.SubPathString.Data.ArrayNum,(int *)puVar2);
    memcpy(*(void **)puVar1,_Src.Data,_Size);
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  puVar1 = &(this->LevelSequenceOverride).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->LevelSequenceOverride).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->ViewportLookFlags = 0;
  this->FrameRangeType = PlaybackRange;
  this->CustomStartFrame = 0;
  this->CustomEndFrame = 0;
  (this->GraphVariableAssignments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphVariableAssignments).ArrayNum = 0;
  (this->GraphVariableAssignments).ArrayMax = 0;
  this->PostRenderBehavior = PlayRenderOutput;
  this->bOverride_ViewportLookFlags = false;
  return this;
}

// ~UMovieGraphQuickRenderModeSettings @ 14dcb31e0

void __thiscall
UMovieGraphQuickRenderModeSettings::~UMovieGraphQuickRenderModeSettings
          (UMovieGraphQuickRenderModeSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderModeSettings__6B_;
  pFVar1 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->LevelSequenceOverride).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->GraphPreset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd2eb0

UClass * __cdecl UMovieGraphQuickRenderModeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderModeSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphQuickRenderModeSettings,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphQuickRenderModeSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderModeSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderModeSettings.InnerSingleton;
}

// GetVariableAssignmentsForGraph @ 14dcd52b0

UMovieJobVariableAssignmentContainer * __thiscall
UMovieGraphQuickRenderModeSettings::GetVariableAssignmentsForGraph
          (UMovieGraphQuickRenderModeSettings *this,TSoftObjectPtr<UMovieGraphConfig> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  TSoftObjectPtr<UMovieGraphConfig> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_48 [48];
  
  pFVar5 = (this->GraphVariableAssignments).AllocatorInstance.Data;
  iVar2 = (this->GraphVariableAssignments).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GraphVariableAssignments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieJobVariableAssignmentContainer>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      return (UMovieJobVariableAssignmentContainer *)0x0;
    }
    pTVar4 = UMovieJobVariableAssignmentContainer::GetGraphConfig
                       (*(UMovieJobVariableAssignmentContainer **)pFVar5,
                        (TSoftObjectPtr<UMovieGraphConfig> *)local_48);
    bVar3 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(pTVar4->SoftObjectPtr).field_0x8,
                       (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    if ((void *)local_48._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._24_8_);
    }
    if (bVar3) break;
    pFVar5 = pFVar5 + 8;
  }
  return *(UMovieJobVariableAssignmentContainer **)pFVar5;
}

// RefreshVariableAssignments @ 14dcdca50

void __cdecl
UMovieGraphQuickRenderModeSettings::RefreshVariableAssignments
          (UMovieGraphQuickRenderModeSettings *param_1)

{
  UMovieGraphConfig *pUVar1;
  
  if (param_1 != (UMovieGraphQuickRenderModeSettings *)0x0) {
    pUVar1 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&param_1->GraphPreset);
    MoviePipeline::RefreshVariableAssignments
              (pUVar1,&param_1->GraphVariableAssignments,(UObject *)param_1);
  }
  return;
}

// StaticRegisterNativesUMovieGraphQuickRenderModeSettings @ 14dce66f0

void __cdecl
UMovieGraphQuickRenderModeSettings::StaticRegisterNativesUMovieGraphQuickRenderModeSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphQuickRenderModeSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetVariableAssignmentsForGraph @ 14dcf1ac0

void __cdecl
UMovieGraphQuickRenderModeSettings::execGetVariableAssignmentsForGraph
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  TSoftObjectPtr<UMovieGraphConfig> *pTVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined1 local_res8 [8];
  uchar local_78 [24];
  FUtf8String local_60;
  undefined1 local_50 [40];
  
  uVar7 = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  FUtf8String::Reset(&local_60,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar8 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar6 = *(undefined8 **)&param_1[3].field_0x18;
  iVar2 = *(int *)&param_1[3].field_0x20;
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)&param_1[3].field_0x20 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieJobVariableAssignmentContainer>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar6 == puVar1) goto LAB_14dcf1be5;
    pTVar5 = UMovieJobVariableAssignmentContainer::GetGraphConfig
                       ((UMovieJobVariableAssignmentContainer *)*puVar6,
                        (TSoftObjectPtr<UMovieGraphConfig> *)local_50);
    bVar4 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(pTVar5->SoftObjectPtr).field_0x8,
                       (FSoftObjectPath *)(puVar8 + 8));
    if ((void *)local_50._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_50._24_8_);
    }
    if (bVar4) break;
    puVar6 = puVar6 + 1;
  }
  uVar7 = *puVar6;
LAB_14dcf1be5:
  *(undefined8 *)param_3 = uVar7;
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// execRefreshVariableAssignments @ 14dcf2b80

void __cdecl
UMovieGraphQuickRenderModeSettings::execRefreshVariableAssignments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UMovieGraphConfig *pUVar3;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UObject *)0x0) {
    pUVar3 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                       ((TSoftObjectPtr<UMovieGraphConfig> *)(local_res10[0] + 1));
    MoviePipeline::RefreshVariableAssignments
              (pUVar3,(TArray<TObjectPtr<UMovieJobVariableAssignmentContainer>,TSizedDefaultAllocator<32>_>
                       *)&pUVar2[3].field_0x18,pUVar2);
  }
  return;
}

