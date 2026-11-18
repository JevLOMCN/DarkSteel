// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 1496cc5a0

UClass * __cdecl USceneSnappingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneSnappingManager",
               &Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton,
               StaticRegisterNativesUSceneSnappingManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USceneSnappingManager>,
               InternalVTableHelperCtorCaller<USceneSnappingManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton;
}

// USceneSnappingManager @ 1496d3d10

USceneSnappingManager * __thiscall
USceneSnappingManager::USceneSnappingManager(USceneSnappingManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USceneSnappingManager__6B_;
  return this;
}

// USceneSnappingManager @ 1496d3d40

USceneSnappingManager * __thiscall
USceneSnappingManager::USceneSnappingManager
          (USceneSnappingManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USceneSnappingManager__6B_;
  return this;
}

// ~USceneSnappingManager @ 1496d4ae0

void __thiscall USceneSnappingManager::~USceneSnappingManager(USceneSnappingManager *this)

{
  *(undefined ***)this = &___7USceneSnappingManager__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ExecuteSceneHitQuery @ 1496dbe60

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
USceneSnappingManager::ExecuteSceneHitQuery
          (USceneSnappingManager *this,FSceneHitQueryRequest *param_1,FSceneHitQueryResult *param_2)

{
  return false;
}

// ExecuteSceneSnapQuery @ 1496dbe70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USceneSnappingManager::ExecuteSceneSnapQuery
          (USceneSnappingManager *this,FSceneSnapQueryRequest *param_1,
          TArray<FSceneSnapQueryResult,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// Find @ 1496dbe80

USceneSnappingManager * __cdecl USceneSnappingManager::Find(UInteractiveGizmoManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  USceneSnappingManager *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  
  if (param_1 == (UInteractiveGizmoManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3729399461227528073>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\SceneQueries\\SceneSnappingManager.cpp"
                       ,0x77,"GizmoManager");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USceneSnappingManager *)(*pcVar2)();
      return pUVar4;
    }
    return (USceneSnappingManager *)0x0;
  }
  lVar6 = param_1->_padding_;
  if (lVar6 != 0) {
    pUVar5 = UInteractiveToolsContext::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_1496dbef0;
  }
  lVar6 = 0;
LAB_1496dbef0:
  pUVar4 = UContextObjectStore::FindContext<USceneSnappingManager>
                     (*(UContextObjectStore **)(lVar6 + 0x88));
  return pUVar4;
}

// Find @ 1496dbf10

USceneSnappingManager * __cdecl USceneSnappingManager::Find(UInteractiveToolManager *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  USceneSnappingManager *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  
  if (param_1 == (UInteractiveToolManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3729399461227528087>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\SceneQueries\\SceneSnappingManager.cpp"
                       ,0x69,"ToolManager");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USceneSnappingManager *)(*pcVar2)();
      return pUVar4;
    }
    return (USceneSnappingManager *)0x0;
  }
  lVar6 = param_1->_padding_;
  if (lVar6 != 0) {
    pUVar5 = UInteractiveToolsContext::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_1496dbf80;
  }
  lVar6 = 0;
LAB_1496dbf80:
  pUVar4 = UContextObjectStore::FindContext<USceneSnappingManager>
                     (*(UContextObjectStore **)(lVar6 + 0x88));
  return pUVar4;
}

// GetPrivateStaticClass @ 1496ddde0

UClass * __cdecl USceneSnappingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneSnappingManager",
               &Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton,
               StaticRegisterNativesUSceneSnappingManager,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USceneSnappingManager>,
               InternalVTableHelperCtorCaller<USceneSnappingManager>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneSnappingManager.InnerSingleton;
}

// StaticRegisterNativesUSceneSnappingManager @ 1496e6790

void __cdecl USceneSnappingManager::StaticRegisterNativesUSceneSnappingManager(void)

{
  return;
}

