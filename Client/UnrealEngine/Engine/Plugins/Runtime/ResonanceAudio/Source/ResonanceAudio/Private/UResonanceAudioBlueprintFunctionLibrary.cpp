// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// StaticClass @ 14f0412d0

UClass * __cdecl UResonanceAudioBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioBlueprintFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UResonanceAudioBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton;
}

// UResonanceAudioBlueprintFunctionLibrary @ 14f044010

UResonanceAudioBlueprintFunctionLibrary * __thiscall
UResonanceAudioBlueprintFunctionLibrary::UResonanceAudioBlueprintFunctionLibrary
          (UResonanceAudioBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
  return this;
}

// UResonanceAudioBlueprintFunctionLibrary @ 14f044040

UResonanceAudioBlueprintFunctionLibrary * __thiscall
UResonanceAudioBlueprintFunctionLibrary::UResonanceAudioBlueprintFunctionLibrary
          (UResonanceAudioBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
  return this;
}

// ~UResonanceAudioBlueprintFunctionLibrary @ 14f044ce0

void __thiscall
UResonanceAudioBlueprintFunctionLibrary::~UResonanceAudioBlueprintFunctionLibrary
          (UResonanceAudioBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UResonanceAudioBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetGlobalReverbPreset @ 14f048ac0

UResonanceAudioReverbPluginPreset * __cdecl
UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset(void)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName *pFVar3;
  FResonanceAudioModule *pFVar4;
  FScriptContainerElement *pFVar5;
  UResonanceAudioReverbPluginPreset *pUVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  
  pUVar6 = (UResonanceAudioReverbPluginPreset *)0x0;
  pFVar3 = ::FName::FName(&local_res10,"ResonanceAudio");
  pFVar4 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar3);
  pFVar5 = (pFVar4->RegisteredAudioDevices).AllocatorInstance.Data;
  iVar2 = (pFVar4->RegisteredAudioDevices).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->RegisteredAudioDevices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAudioDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(longlong *)(*(longlong *)pFVar5 + 0x100) != 0) {
      pUVar6 = ResonanceAudio::GlobalReverbPluginPreset;
    }
    pFVar5 = pFVar5 + 8;
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 14f048c70

UClass * __cdecl UResonanceAudioBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UResonanceAudioBlueprintFunctionLibrary>
               ,InternalVTableHelperCtorCaller<UResonanceAudioBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UResonanceAudioBlueprintFunctionLibrary.InnerSingleton;
}

// SetGlobalReverbPreset @ 14f04c780

void __cdecl
UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset
          (UResonanceAudioReverbPluginPreset *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  FResonanceAudioModule *pFVar5;
  UResonanceAudioReverbPluginPreset *pUVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  
  pFVar4 = ::FName::FName(local_res18,"ResonanceAudio");
  pFVar5 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar4);
  pFVar7 = (pFVar5->RegisteredAudioDevices).AllocatorInstance.Data;
  iVar2 = (pFVar5->RegisteredAudioDevices).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar5->RegisteredAudioDevices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAudioDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar1) break;
    lVar3 = *(longlong *)(*(longlong *)pFVar7 + 0x100);
    if ((lVar3 != 0) &&
       (bVar8 = ResonanceAudio::GlobalReverbPluginPreset ==
                *(UResonanceAudioReverbPluginPreset **)(lVar3 + 0x150),
       ResonanceAudio::GlobalReverbPluginPreset = param_1, bVar8)) {
      pUVar6 = param_1;
      if (param_1 == (UResonanceAudioReverbPluginPreset *)0x0) {
        pUVar6 = (UResonanceAudioReverbPluginPreset *)0x0;
      }
      *(UResonanceAudioReverbPluginPreset **)(lVar3 + 0x150) = pUVar6;
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary @ 14f04d600

void __cdecl
UResonanceAudioBlueprintFunctionLibrary::
StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGlobalReverbPreset @ 14f04f950

void __cdecl
UResonanceAudioBlueprintFunctionLibrary::execGetGlobalReverbPreset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName *pFVar3;
  FResonanceAudioModule *pFVar4;
  UResonanceAudioReverbPluginPreset *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  
  pUVar5 = (UResonanceAudioReverbPluginPreset *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = ::FName::FName(local_res18,"ResonanceAudio");
  pFVar4 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar3);
  pFVar6 = (pFVar4->RegisteredAudioDevices).AllocatorInstance.Data;
  iVar2 = (pFVar4->RegisteredAudioDevices).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->RegisteredAudioDevices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAudioDevice_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    if (*(longlong *)(*(longlong *)pFVar6 + 0x100) != 0) {
      pUVar5 = ResonanceAudio::GlobalReverbPluginPreset;
    }
    pFVar6 = pFVar6 + 8;
  }
  *(UResonanceAudioReverbPluginPreset **)param_3 = pUVar5;
  return;
}

// execSetGlobalReverbPreset @ 14f04fa90

void __cdecl
UResonanceAudioBlueprintFunctionLibrary::execSetGlobalReverbPreset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UResonanceAudioReverbPluginPreset *pUVar5;
  FName *pFVar6;
  FResonanceAudioModule *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  UResonanceAudioReverbPluginPreset *local_res20;
  FName local_28 [2];
  
  local_res20 = (UResonanceAudioReverbPluginPreset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = ::FName::FName(local_28,"ResonanceAudio");
  pFVar7 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar6);
  pFVar8 = (pFVar7->RegisteredAudioDevices).AllocatorInstance.Data;
  iVar2 = (pFVar7->RegisteredAudioDevices).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar7->RegisteredAudioDevices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAudioDevice_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x100);
    if ((lVar4 != 0) &&
       (bVar9 = ResonanceAudio::GlobalReverbPluginPreset ==
                *(UResonanceAudioReverbPluginPreset **)(lVar4 + 0x150),
       ResonanceAudio::GlobalReverbPluginPreset = pUVar5, bVar9)) {
      *(UResonanceAudioReverbPluginPreset **)(lVar4 + 0x150) = pUVar5;
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

