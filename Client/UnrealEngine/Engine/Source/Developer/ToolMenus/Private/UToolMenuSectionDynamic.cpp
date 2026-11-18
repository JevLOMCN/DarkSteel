// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 7

// StaticClass @ 142c2e7d0

UClass * __cdecl UToolMenuSectionDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionDynamic",
               &Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton,
               StaticRegisterNativesUToolMenuSectionDynamic,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuSectionDynamic>,
               InternalVTableHelperCtorCaller<UToolMenuSectionDynamic>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton;
}

// UToolMenuSectionDynamic @ 142c3b090

UToolMenuSectionDynamic * __thiscall
UToolMenuSectionDynamic::UToolMenuSectionDynamic
          (UToolMenuSectionDynamic *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuSectionDynamic__6B_;
  return this;
}

// UToolMenuSectionDynamic @ 142c3b0c0

UToolMenuSectionDynamic * __thiscall
UToolMenuSectionDynamic::UToolMenuSectionDynamic
          (UToolMenuSectionDynamic *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuSectionDynamic__6B_;
  return this;
}

// ~UToolMenuSectionDynamic @ 142c3ca20

void __thiscall UToolMenuSectionDynamic::~UToolMenuSectionDynamic(UToolMenuSectionDynamic *this)

{
  *(undefined ***)this = &___7UToolMenuSectionDynamic__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConstructSections @ 142c50630

void __thiscall
UToolMenuSectionDynamic::ConstructSections
          (UToolMenuSectionDynamic *this,UToolMenu *param_1,FToolMenuContext *param_2)

{
  UFunction *pUVar1;
  UToolMenu *local_78;
  FToolMenuContext local_70;
  
  local_70.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ContextObjects.ArrayNum = 0;
  local_70.ContextObjects.ArrayMax = 0;
  local_70.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_70.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_70.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ContextCleanupFuncs.ArrayNum = 0;
  local_70.ContextCleanupFuncs.ArrayMax = 0;
  local_70.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.CommandLists.ArrayNum = 0;
  local_70.CommandLists.ArrayMax = 0;
  local_70.CommandList.Object = (FUICommandList *)0x0;
  local_70.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_70.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Extenders.ArrayNum = 0;
  local_70.Extenders.ArrayMax = 0;
  local_70.bIsEditing = false;
  local_78 = param_1;
  FToolMenuContext::operator=(&local_70,param_2);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UToolMenuSectionDynamic_ConstructSections);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_78);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_70.Extenders.AllocatorInstance.Data,
             local_70.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_70.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_70.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_70.CommandLists.AllocatorInstance.Data,
             local_70.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_70.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_70.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_70.ContextCleanupFuncs.AllocatorInstance.Data,
             local_70.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_70.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_70.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_70.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_70.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_70.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_70.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_70.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ContextObjects.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 142c5f760

UClass * __cdecl UToolMenuSectionDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionDynamic",
               &Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton,
               StaticRegisterNativesUToolMenuSectionDynamic,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuSectionDynamic>,
               InternalVTableHelperCtorCaller<UToolMenuSectionDynamic>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionDynamic.InnerSingleton;
}

// StaticRegisterNativesUToolMenuSectionDynamic @ 142c70f90

void __cdecl UToolMenuSectionDynamic::StaticRegisterNativesUToolMenuSectionDynamic(void)

{
  return;
}

